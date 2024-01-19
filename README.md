# cv18xx sipeed-licheerv boards.

step1:  
git clone https://github.com/sophgo/sophpi.git  
./scripts/repo_clone.sh --gitclone scripts/subtree.xml  

step2:  
cp sdk_patchs/* . -rpf  

step3:  
source buile/cvisetup.sh  
defconfig cv1812cp_licheerv_nano_sd  
clean_all  
build_all  



