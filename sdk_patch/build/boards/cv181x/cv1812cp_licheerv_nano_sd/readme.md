# manual create bootable sdcard

```
sudo cfdisk /dev/sdX
# then create boot partition:
# size is 32MiB
# type is W95 FAT32 (LBA)
# boot is Bootable
# sdX1 is sdcard's boot partition, use fat32 format
# then create root partition:
# size is 128MiB (set by your rootfs.sd size)
# type is Linux
# boot is not Bootable
# sdX2 is sdcard's root partition
# then create overlay partition:
# size is max size (set by your sdcard size)
# type is Linux
# boot is not Bootable
# sdX3 is sdcard's overlay partition
sudo mkfs.vfat -n boot /dev/sdX1
mkdir -pv /mnt/boot/
sudo mount /dev/sdX1 /mnt/boot
# install bootloader
cp -vf install/soc_cv1812cp_licheerv_nano_sd/*.bin /mnt/boot/
# install kernel
cp -vf install/soc_cv1812cp_licheerv_nano_sd/rawimages/boot.sd /mnt/boot/
# install rootfs
sudo dd if=install/soc_cv1812cp_licheerv_nano_sd/rawimages/roots.sd of=/dev/sdX2
# formate overlay partition
mkfs.ext4 /dev/sdX3 # if you have formarted, you can skip this step
```

# connect to board

user: root
pass: cvitek

```
# connect device's usb port to your PC
# then PC will set new usb rndis interface IP address by ipv4 link local or dhcp
# board is enable mdns by default, you can use mdns found it:
# avahi-browse -art | grep licheervnano
# XXXX is machine id, if you have multi licheervnano in your network, you can use machine id to select it.
# how to generate id: ./ramdisk/rootfs/overlay/cv1812cp_licheerv_nano_sd/etc/init.d/S01genhostname
ssh root@licheervnanoXXXX.local
```

# compile program use vendor's toolchain

```
wget https://sophon-file.sophon.cn/sophon-prod-s3/drive/23/03/07/16/host-tools.tar.gz
tar xf host-tools.tar.gz
cd host-tools/gcc/riscv64-linux-musl-x86_64/bin
export PATH=$(pwd):${PATH}

cd /path/to/your/project
riscv64-unknown-linux-musl-gcc -mcpu=c906fdv -march=rv64imafdcv0p7xthead -mcmodel=medany -mabi=lp64d hellworld.c -o helloworld
# then upload helloworld into board
scp helloworld root@licheervnanoXXXX.local:/tmp/helloworld
# then connect board , execute it
ssh root@licheervnanoXXXX.local -- 'chmod +x /tmp/helloworld; /tmp/helloworld'
```

# middleware

```
# after middleware source code edit, you need rebuild it & copy new program into rootfs
build_all
# example: copy mipi_tx
cp middleware/v2/sample/mipi_tx/sample_dsi ramdisk/rootfs/overlay/cv1812cp_licheerv_nano_sd/bin/sample_dsi
```

# screen

if you want use mipi screen on licheervnano:

1. edit /opt/fb_load.sh

2. uncomment your screen initial command

3. sh /opt/fb_load.sh

4. run your graphic program

5. if your screen is working please:  

```
echo 'sh /opt/fb_load.sh' >> /etc/rc.local
```

if not working, please check step 2, then execute step 3

# your custom config file

```
cp xxx.conf ramdisk/rootfs/overlay/cv1812cp_licheerv_nano_sd/path/to/xxx.conf
```

# add your custom package

create initial file & directory

```
source build/cvisetup.sh
mkdir -pv ramdisk/rootfs/public/hello
touch ramdisk/rootfs/public/hello/Kconfig
touch ramdisk/rootfs/public/hello/target.mk
mkdir -pv ramdisk/rootfs/public/hello/musl_riscv64/bin
```

edit ramdisk/rootfs/public/hello/Kconfig

write:

```
config TARGET_PACKAGE_HELLO
	bool "Target package hello"
	default n
	help
	  target hello
```

edit ramdisk/rootfs/public/dropbear/target.mk

write:

```
ifeq ($(CONFIG_TARGET_PACKAGE_HELLO),y)
TARGET_PACKAGES += hello
endif
```


build your program:

```
# riscv64-unknown-linux-musl-gcc must be vendor's toolchain
riscv64-unknown-linux-musl-gcc -mcpu=c906fdv -march=rv64imafdcv0p7xthead -mcmodel=medany -mabi=lp64d hello.c -o hello
```

copy your program:

```
cp -fv hello ramdisk/rootfs/public/hello/musl_riscv64/bin/hello
```

select your program

```
echo 'CONFIG_TARGET_PACKAGE_HELLO=y' >> build/boards/cv181x/cv1812cp_licheerv_nano_sd/cv1812cp_licheerv_nano_sd_defconfig
```

then reload config & build it into rootfs:

```
defconfig cv1812cp_licheerv_nano_sd
build_all
```
