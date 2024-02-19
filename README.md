step1:

git clone https://github.com/sophgo/sophpi.git

./scripts/repo_clone.sh --gitclone scripts/subtree.xml


step2:

cp sdk_patchs/* . -rpf


step3:

source buile/cvisetup.sh

defconfig cv1813h_wevb_0007a_emmc

clean_all

build_all