# sg200x-evb
step1:  
git clone https://github.com/sophgo/sophpi.git -b sg200x-evb  
cd sophpi  
./scripts/repo_clone.sh --gitclone scripts/subtree.xml  
  
step2:  
cp sdk_patchs/* . -rpf  
  
step3:  
source buile/cvisetup.sh  
defconfig sg200x_duo_sd  
clean_all  
build_all  
