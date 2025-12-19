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

## V420 SDK 修订记录

| 版本号  | 版本日期  | 版本更新内容                                      |
| ------ | --------- | ------------------------------------------------ |
| v4.2.6 | 2024.04.19 | TODO                                             |

## BM1688 & CV186AH SDK 修订记录

| 版本号  | 版本日期  | 版本更新内容                                      |
| ------ | --------- | ------------------------------------------------ |
| v1.9 | 2025.02.24 | 1.9 版本 a2_release SDK 发布                       |
| v2.0 | 2025.06.25 | 1. 新增对传统PCIe模式SDK用法支持，API接口与SOC模式保持一致 2. 优化并简化了PCIE启动板卡流程 3. 边侧SDK新增buildroot文件系统 4. ffmpeg 新增实时对yuv叠图的硬件加速 5. 新增 NVMe/SATA SSD 支持​​：支持 SSD 挂载及 SSD 启动方式 6. 支持v4l2-ctl抓帧功能，并新增支持sensor: sc020hgs、sc233hgs、sc500ai 7. 优化 tpu-runtime​​：修复分辨率及超时相关问题，提升稳定性 8. 优化 DDR 代码​​：增强兼容性，适配更多硬件环境 9. 边侧buildroot支持OTA升级 10. 优化AI ISP，提升了AI ISP性能 11.增强Web端密码复杂度校验机制，提升系统安全性; |

## CV184X SDK 修订记录

| 版本号  | 版本日期  | 版本更新内容                                      |
| ------ | --------- | ------------------------------------------------ |
| v6.1.0 | 2025.05.30 | 6.1.0 版本 CV184X SDK 首次发布                       |
| v6.2.0 | 2025.06.23 |  1. 支持单双系统：单系统Linux，双系统Linux+AliOS；2. 单双系统内存优化到128MB；3. 双系统快启；|
| v6.2.1 | 2025.07.19 |  1. 双系统支持64bit工具链；2. 单系统模式下，小核默认使用FreeRTOS用于Audio 3A算法和osdc算法；3. 烧录工具支持分区大于4G；4. 提供cipher接口；5. PR2020支持AHD；6. YUV Sensor支持vi-vpss online；|
| v6.2.2 | 2025.08.01 | 1. 修复部分bug，进一步开源代码；2. 单系统arm64工具链编译支持；3. 更新内存分配的变量命名：使用RTOS命名小核的内存分配变量；4. tpu raw12转int16前处理算子开发；5. jpeg支持sbm；6. TPU 膨胀、腐蚀算子支持；7. pqtool快启适配；8. 用户手册更新；|
| v6.3.0 | 2025.08.29 | 1. 修复部分bug；2. 单系统环境下适配 rt-thread；3. 工具链变量名更新：3.1 musl → musl_arm 3.2 32bit → gibc_arm 3.3 64bit → glibc_arm64 4. AOV SDK版本开发，适配休眠唤醒功能；5. tpu raw12转int16前处理算子功能完善；6. 双系统支持应用崩溃后正常重跑；7. TDL完善越界检测功能；8. FB 驱动支持配置启用TDE旋转，90度，180度，270度；9. 用户手册更新；|
| v6.3.1 | 2025.09.19 |  1. 修复部分bug；2. 适配 musl_arm64 工具链；3. 更新cvi_alios的customization pipeline从build目录配置的方式；4. 小核上支持I2C-recovery机制；5. TDL内存优化，对齐cv181x；6. 多媒体模块提供状态重置的接口；7. AOV优化，suspend在100ms以内，resume在30ms以内，修复部分bug；8. imx675 画质调试完成；9. 用户手册更新；|
| v6.3.2 | 2025.10.31 |   1. 修复部分bug：解决”IIC0_SCL//IIC0_SDA配置为rtt小核串口无法输出“问题等；2. 更新部分配置和文件命名：增加RTOS_LOGO_SIZE、更新cvi_alios中的芯片命名等；3. CV1841C系列板卡更名为CV1841CP，所有板卡配置默认ND；4. 所有模块使用CCF框架管理clk；5. 调整rootfs构建流程，并更新busybox：syslogd not ignore syslogd.conf；6. AOV优化，suspend在60ms以内，resume在30ms以内; |
| v6.3.2.1 | 2025.12.18 | 1. 修复部分bug：解决vpss帧率控制异常、AHD热插拔、mjpeg cbr码率控制等问题。2. 添加部分功能：XT26G04D 等nand flash支持、ddr类型自适应、isp收敛耗时优化、clk管理优化等。; |


