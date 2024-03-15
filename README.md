# cv18xx-embedfire-lubancat boards.  

step1:  
```
git clone -b cv18xx-embedfire-lubancat git@github.com:sophgo/sophpi.git
cd sophpi
./scripts/repo_clone.sh --gitclone scripts/subtree.xml
```
  
step2:  
```
cp sdk_patchs/* . -rpf
```
  
step3:  
```
source build/cvisetup.sh  
defconfig cv1813h_wevb_0007a_emmc  
clean_all  
build_all  
```