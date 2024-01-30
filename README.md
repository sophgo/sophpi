# cv186ah evb boards.

step1:  
git clone https://github.com/sophgo/sophpi.git  
cd sophpi  
./scripts/repo_clone.sh --gitclone scripts/subtree.xml  

step2:  
cp sdk_patchs/* . -rpf  

step3:  
source buile/cvisetup.sh  
defconfig cv186ah_wevb_emmc  
clean_all  
build_all  



