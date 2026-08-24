# 快速入门指南

## V410 SDK 编译步骤

### 获取源码

步骤一:

``` bash
mkdir -p <WORKSPACE>
cd <WORKSPACE>
git clone -b sg200x-evb git@github.com:sophgo/sophpi.git
./sophpi/scripts/repo_clone.sh --gitclone sophpi/scripts/subtree.xml
```

步骤二:

``` bash
source build/envsetup_soc.sh
defconfig sg2002_wevb_riscv64_sd
clean_all
build_all
```

## V420 SDK 编译步骤

### 获取源码

步骤一:

``` bash
mkdir -p <WORKSPACE>
cd <WORKSPACE>
git clone -b sg200x-evb git@github.com:sophgo/sophpi.git
./sophpi/scripts/repo_clone.sh --gitclone sophpi/scripts/subtree_cv18xx-v4.2.x.xml
```

步骤二:

``` bash
source build/envsetup_soc.sh
defconfig cv180zb_wevb_0008a_spinor
clean_all
build_all
```

## BM1688 & CV186AH SDK 编译步骤

### 获取源码

步骤一:

``` bash
mkdir -p <WORKSPACE>
cd <WORKSPACE>
git clone -b sg200x-evb git@github.com:sophgo/sophpi.git
./sophpi/scripts/repo_clone.sh --gitclone sophpi/scripts/subtree_a2_release.xml
```

步骤二:

``` bash
source build/envsetup_soc.sh
defconfig device_wevb_emmc
clean_device_all
build_device_all
```

## CV184X SDK 编译步骤

### 获取源码

步骤一:

``` bash
mkdir -p <WORKSPACE>
cd <WORKSPACE>
git clone -b sg200x-evb git@github.com:sophgo/sophpi.git
./sophpi/scripts/repo_clone.sh --gitclone sophpi/scripts/subtree_cv184x-v6.x.xml
```

步骤二:

``` bash
source build/envsetup_soc.sh
defconfig cv1842cp_wevb_0015a_spinor
clean_all
build_all
```

# NOTE.

TODO

# 修订记录

## V410 SDK 修订记录

| 版本号  | 版本日期  | 版本更新内容                                      |
| ------ | --------- | ------------------------------------------------ |
| v4.1.6 | 2024.04.19 | TODO                                             |
| v4.1.6.1 | 2025.01.24 | tdl_sdk: 新增CVI_TDL_Set_ROI接口及yolov8模型<br>SensorSupportList: 修改gc2053_1l & gc2053_slave 的时钟模式|
| v4.1.6.2 | 2025.11.03 | 1、新增cv1811ha_wevb_0007a_spinand, cv1811ca_wevb_0006a_spinor, cv1811ca_wevb_0006a_spinand_musl板级配置; 2、新增cv2002, soi_h65, sc231hai, sc4336p传感器驱动; 3、支持rt-thread SecureBoot;|
| v4.1.6.3 | 2025.12.17 | 1、linux_5.10/tree/sg200x-dev/scripts/dtc/include-prefixes 软连接修复; 2、新增spinand F50L1G41LC-2P flash支持 3、新增AIC8800 wifi芯片支持 |
| v4.1.6.4 | 2026.03.24 | 1、Sensor适配：新增GC2093双目、新增GC4683、新增SC535HAI; 2、Panel适配：新增BT656数据协议的MS7024驱动、新增RGB数据协议的GC9307驱动、新增ST7789P3驱动；3、Build适配：新增cv1812cpa_wevb_0006a_spinand_musl、cv1812cpa_wevb_0006a_emmc_musl板卡定义；4、Linux适配：新增UC25IQ128、GD25F128FSIGR的spinor flash驱动；5、Osdrv适配：新增双核通信rpmsg demo；6、Ramdisk适配：新增 USB ACM、USB NCM、DNSMASQ script；|
| v4.1.6.5 | 2026.05.08 | 1、全线产品新导入了几款KGD；|
| v4.1.6.6 | 2026.06.30 | 1、Sensor适配：新增GC20C3；2、Build适配：新增cv1815j_wevb_0020a_*、cv1815ja_wevb_0020a_*板卡配置及ddr3_1600_x16选项；3、DDR/FSBL适配：CV1815J外挂DDR3 bringup、RX ODT设为120ohm；4、Flash/U-boot/Linux适配：新增spinand XT26G01F、nor ZB25VQ32D，u-boot支持flash_erased选项，linux修复nand ecc检测、新增nand polling获取status reg；5、Osdrv适配：VPSS新增duty_ratio；6、Ramdisk适配：支持WIFI AIC8800D80 & AIC8800DC；|
| v4.1.6.7 | 2026.08.24 | 1、Sensor适配：新增IMGDS MIS4001、OV OS08C10传感器驱动，SC035HGS支持480P@180fps；2、Build适配：更新cv1815j/cv1815ja_wevb_0020a_*板卡config及sensor_list；3、DDR/FSBL适配：新增ddr3_1600_x16配置、补充LICENSE；4、Flash适配：u-boot/linux新增XinCun XCSP1AXPK-IT(1Gb/3.3V) SPI-NAND驱动；5、Osdrv适配：CV1815J纳入IS_CHIP_CV181X宏、VO相关修复；6、Ramdisk适配：新增musl版adbd；7、tdl_sdk：新增AeroEar声学无人机检测模型、手部关键点优化；8、ipcamera：集成AeroEar声学无人机检测、OS08C10 WDR支持；|

## V420 SDK 修订记录

| 版本号  | 版本日期  | 版本更新内容                                      |
| ------ | --------- | ------------------------------------------------ |
| v4.2.6 | 2024.04.19 | TODO                                             |
| v4.2.0.1 | 2026.05.08 | 1、全线产品新导入了几款KGD；|
| v4.2.1 | 2026.06.30 | 1、Sensor适配：新增GC4663、OS02H10、CV2005、TP9951、SC285SL、OS02G10，优化IMX675 AE控制；2、Panel/VO适配：新增RGB接口驱动、VPSS stitch送VPSS/VO/VENC、修复VO gamma设置概率性错误；3、Build适配：新增cv1815ja_wevb_0020a_*、cv1815j_wevb_0020a_*板卡配置及ddr3_1600_x16选项，新增musl arm编译修复Y2K38，修复mkubiimg/pack_prog_img；4、Flash/U-boot/Linux适配：新增XT26G01F、XT26G04CWSIGA、ZB35Q01CYIG、XT26G04D、F50L1G41LC-2P、GD25F128FSIGR、UC25IQ128、W25Q512JV等spinand/spinor支持，修复eMMC env保存、spacc hang、efuse读KEY失败、nand ecc检测；5、DDR/FSBL适配：CV1815J外挂DDR3 bringup、RX ODT 120ohm，新增ESMT/UniIC/Nanya等DDR vendor，修复eMMC clk div；6、Osdrv/Ramdisk适配：新增GT9xx触摸驱动、cvifb close保活、ipcm消息统计，修复PWM/ADC/clock_cooling suspend/resume，logrotate改为1h；7、Toolchain适配：新增musl arm64/arm32工具链(host-tools/cviruntime/oss/tdl_sdk)、opencv4.5静态库编译、新增curl；8、tdl_sdk：新增yolov11、yolov8 ROI、deepseek LLM交互、blip/yolo world v2、半身人脸识别；9、opensbi：支持CV181X/CV180X suspend/resume；|
| v4.2.2 | 2026.08.24 | 1、Sensor适配：新增OV4683/OV4689传感器驱动（cvi_mpi及cvi_alios双系统）；2、Panel/VO适配：新增DSI屏ST7102_480x854、LVDS屏G101JL-S04_1024x600 bringup，cvi_alios修复I80接口bug；3、Build适配：更新cv1815j/cv1815ja_wevb_0020a_*板卡config、移除ddr_auto_x16选项、更新sensor_list；4、DDR/FSBL适配：新增ddr3_1600_x16配置、CV1815J外挂DDR3写GP_REG3=0x1815、补充LICENSE；5、Flash/U-boot/Linux适配：新增XinCun XCSP1AXPK-IT、DS35Q4GB-IB、W25N04LV等SPI-NAND支持，efuse新增CV181X-AUX0芯片判定；6、Osdrv/cvi_alios适配：新增CV1815J外挂DDR板卡芯片ID、修复CV1835误判、PWM使能前恢复REG_PERIOD/HLPERIOD、cvifb close保活；|

## BM1688 & CV186AH SDK 修订记录

| 版本号  | 版本日期  | 版本更新内容                                      |
| ------ | --------- | ------------------------------------------------ |
| v1.9 | 2025.02.24 | 1.9 版本 a2_release SDK 发布                       |
| v2.0 | 2025.06.25 | 1. 新增对传统PCIe模式SDK用法支持，API接口与SOC模式保持一致 2. 优化并简化了PCIE启动板卡流程 3. 边侧SDK新增buildroot文件系统 4. ffmpeg 新增实时对yuv叠图的硬件加速 5. 新增 NVMe/SATA SSD 支持​​：支持 SSD 挂载及 SSD 启动方式 6. 支持v4l2-ctl抓帧功能，并新增支持sensor: sc020hgs、sc233hgs、sc500ai 7. 优化 tpu-runtime​​：修复分辨率及超时相关问题，提升稳定性 8. 优化 DDR 代码​​：增强兼容性，适配更多硬件环境 9. 边侧buildroot支持OTA升级 10. 优化AI ISP，提升了AI ISP性能 11.增强Web端密码复杂度校验机制，提升系统安全性; |
| v2.1 | 2025.11.25 | 1.优化休眠唤醒，支持深度休眠; 2.深度优化系统启动时间; 3.支持自动获取emmc容量并动态调整data分区大小; 4.完善ISP AF功能，支持自动对焦; 5.更新视频解码固件(r368959)，解决码流卡住问题 |
| v2.2 | 2026.06.29 | 1.PCIE 模式下的多媒体API 新增多卡设备支持。2.加强稳定性，修复了一些已知问题和潜在缺陷。3. bm_opencv引入v4l2。4. 对齐主流roi设置方法，ffmpeg 和bmapi roi设置 使用坐标方式对外提供。5. 支持CPU DFS，在空闲时节省功耗。6.端侧支持ubuntu文件系统。7.支持pcie模式下的温控，ddr容量检测。8.完善对debian 12的支持。9.debian12系统的内核升级到6.12版本。10. OTA 支持 root-ro 与 root-rw 分区动态调整容量，两者总大小固定，且 root-ro 起始物理地址不变。11.bmcv新增TDE接口，支持用TDE硬件 crop、 resize 、csc 、rotate 、划线，画不规则图形。12.优化opencv算子，支持bmcv硬件加速。13.IVE算子由1920x1080支持到3840x2160。|

## CV184X SDK 修订记录

| 版本号  | 版本日期  | 版本更新内容                                      |
| ------ | --------- | ------------------------------------------------ |
| v6.1.0 | 2025.05.30 | 6.1.0 版本 CV184X SDK 首次发布                       |
| v6.2.0 | 2025.06.23 |  1. 支持单双系统：单系统Linux，双系统Linux+AliOS；2. 单双系统内存优化到128MB；3. 双系统快启；|
| v6.2.1 | 2025.07.19 |  1. 双系统支持64bit工具链；2. 单系统模式下，小核默认使用FreeRTOS用于Audio 3A算法和osdc算法；3. 烧录工具支持分区大于4G；4. 提供cipher接口；5. PR2020支持AHD；6. YUV Sensor支持vi-vpss online；|
| v6.2.2 | 2025.08.01 | 1. 修复部分bug，进一步开源代码；2. 单系统arm64工具链编译支持；3. 更新内存分配的变量命名：使用RTOS命名小核的内存分配变量；4. tpu raw12转int16前处理算子开发；5. jpeg支持sbm；6. TPU 膨胀、腐蚀算子支持；7. pqtool快启适配；8. 用户手册更新；|
| v6.3.0 | 2025.08.29 | 1. 修复部分bug；2. 单系统环境下适配 rt-thread；3. 工具链变量名更新：3.1 musl → musl_arm 3.2 32bit → gibc_arm 3.3 64bit → glibc_arm64 4. AOV SDK版本开发，适配休眠唤醒功能；5. tpu raw12转int16前处理算子功能完善；6. 双系统支持应用崩溃后正常重跑；7. TDL完善越界检测功能；8. FB 驱动支持配置启用TDE旋转，90度，180度，270度；9. 用户手册更新；|
| v6.3.1 | 2025.09.19 |  1. 修复部分bug；2. 适配 musl_arm64 工具链；3. 更新cvi_alios的customization pipeline从build目录配置的方式；4. 小核上支持I2C-recovery机制；5. TDL内存优化，对齐cv181x；6. 多媒体模块提供状态重置的接口；7. AOV优化，suspend在100ms以内，resume在30ms以内，修复部分bug；8. imx675 画质调试完成；9. 用户手册更新；|
| v6.3.2 | 2025.10.31 |   1. 修复部分bug：解决”IIC0_SCL//IIC0_SDA配置为rtt小核串口无法输出“问题等；2. 更新部分配置和文件命名：增加RTOS_LOGO_SIZE、更新cvi_alios中的芯片命名等；3. CV1841C系列板卡更名为CV1841CP，所有板卡配置默认ND；4. 所有模块使用CCF框架管理clk；5. 调整rootfs构建流程，并更新busybox：syslogd not ignore syslogd.conf；6. AOV优化，suspend在60ms以内，resume在30ms以内;|
| v6.3.2.1 | 2025.12.18 | 1. 修复部分bug：解决vpss帧率控制异常、AHD热插拔、mjpeg cbr码率控制等问题。2. 添加部分功能：XT26G04D 等nand flash支持、ddr类型自适应、isp收敛耗时优化、clk管理优化等。;|
| v6.3.3 | 2026.03.23 | 1. 修复部分bug：解决VI/VPSS onthefly高带宽溢出、3dnr stride对齐错误、WDR rawdump失败、raw_num_q满、audio track获取错误、madvise内核panic、ion内存释放失败、bmlib内存泄漏、OSD 1920通道启动失败、多传感器复位引脚冲突等问题；2. 添加部分功能：RTOS 3A配置支持、双系统AE调试、动态VI/VPSS scaler模式切换、NAND flash多款支持(XT26G04D/ZB35Q01CYIG/F50L1G41LC-2P)、MS7024 184x显示支持、venc proc_codec、bm_get_ion_mem_vaddr API、d2d功能、AE flicker检测、pqbin导出工具等；3. 优化部分：osal tasklet同步Linux语义、bm-smi重构优化、ISP初始化流程优化、cam0pll SSC支持等；|
| v6.3.3.1 | 2026.05.08 | 1、全线产品新导入了几款KGD；|
| v6.3.4 | 2026.06.29 | 1. 新增仓库 PanelSupportList：屏支持列表统一管理（MIPI-TX/DSI、I80/LVDS），build/u-boot/cvi_mpi/cvi_alios 联动改造。2. 安全启动：fsbl+u-boot+ramdisk 新增 KERNEL_SECURE_BOOT 内核签名/解密、外部 blcp 2nd 签名、OTP key。3. SD-NAND/SD 启动与烧录进度 logo：fsbl、u-boot、build 全链路。4. RT-TOS yoc header：fsbl/rt-thread/build 联动加头部+CRC+0x40 偏移，flash 分区扩到 6M。5. AI ISP（teaisp）双系统：isp/isp_tuning/isp-tool-daemon/cvi_mpi/osdrv/cvi_alios 同步 BNR。6. ISP 新算法：在线 LSC 标定、AE fast converge attr/标定 API、AWB 调试点导出。7. 新存储器件：SPI-NAND XinCun/UM19C0HISW、SPI-NOR UC25IQ128。8. CPU/TPU OD：fsbl/build 新增 OverDrive 频率选择菜单。9. TDL/AI：新增 ADAS、yolo26、stereo、topformer seg motion 模型，SOT 可选 Kalman 跟踪。|



