# cv186ah-evb boards.

step1:
```
git clone -b cv186ah-evb git@github.com:sophgo/sophpi.git
cd sophpi
./scripts/repo_clone.sh --gitclone scripts/subtree.xml
```
step2:
```
source build/cvisetup.sh
defconfig cv186ah_wevb_emmc
clean_all
build_all
```