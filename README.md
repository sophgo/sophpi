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

## V420 SDK 修订记录

| 版本号  | 版本日期  | 版本更新内容                                      |
| ------ | --------- | ------------------------------------------------ |
| v4.2.6 | 2024.04.19 | TODO                                             |

## BM1688 & CV186AH SDK 修订记录

| 版本号  | 版本日期  | 版本更新内容                                      |
| ------ | --------- | ------------------------------------------------ |
| v1.9 | 2025.02.24 | 1.9 版本 a2_release SDK 发布                       |

## CV184X SDK 修订记录

| 版本号  | 版本日期  | 版本更新内容                                      |
| ------ | --------- | ------------------------------------------------ |
| v6.1.0 | 2025.05.30 | 6.1.0 版本 CV184X SDK 首次发布                       |
| v6.2.0 | 2025.06.23 |  1. 支持单双系统：单系统Linux，双系统Linux+AliOS；2. 单双系统内存优化到128MB；3. 双系统快启；|
| v6.2.1 | 2025.07.19 |  1. 双系统支持64bit工具链；2. 单系统模式下，小核默认使用FreeRTOS用于Audio 3A算法和osdc算法；3. 烧录工具支持分区大于4G；4. 提供cipher接口；5. PR2020支持AHD；6. YUV Sensor支持vi-vpss online；|
| v6.2.2 | 2025.08.01 | 1. 修复部分bug，进一步开源代码；2. 单系统arm64工具链编译支持；3. 更新内存分配的变量命名：使用RTOS命名小核的内存分配变量；4. tpu raw12转int16前处理算子开发；5. jpeg支持sbm；6. TPU 膨胀、腐蚀算子支持；7. pqtool快启适配；8. 用户手册更新；|
