#!/bin/sh

oc_version=6.0
oc_revision=201505111542
oc_sdk_dir=openclovis-safplus-sdk-${oc_version}-${oc_revision}
oc_tar_file=${oc_sdk_dir}.tar.gz
extract_dir=${HOME}/temp
install_dir=${HOME}/clovis_2015
cd `dirname $0`
script_dir=$PWD

echo "copying toolchain..."

TARGET=i686-nptl-linux-gnu
mkdir -p ${install_dir}/buildtools
if [ -f ${script_dir}/../toolchain/${TARGET}.tar.gz ]; then
        tar -C ${install_dir}/buildtools -xzf ${script_dir}/../toolchain/${TARGET}.tar.gz
        ln -s ${install_dir}/buildtools/${TARGET} ${install_dir}/buildtools/i686
        echo "Copied Toolchain successfully"
else
        echo "ERROR : Could not locat toolchain ${script_dir}/../toolchain/${TARGET}.tar.gz"
	exit
fi

# create temp folder if not exist
sudo rm -rf ${extract_dir}
mkdir ${extract_dir}

if [ `getconf LONG_BIT` = "64" ]
then
    echo "I'm 64-bit"
     cp ${script_dir}/../base/3rdparty-base-1.27-x86_64.tar ${extract_dir}
else
    echo "I'm 32-bit"
    cp ${script_dir}/../base/3rdparty-base-1.27.tar ${extract_dir}
fi

# extract sdk file into temp folder
echo "extracting SAFplus SDK..."
tar -C ${extract_dir} -xzf ${script_dir}/../base/${oc_tar_file} 
if [ $? != 0 ]
then
   echo "Failed to extract ${oc_tar_file}"
   exit 1
fi

exit 1

src_dir=${extract_dir}/${oc_sdk_dir}
cd ${src_dir} 
#apply patches for the installation files 
for i in ${script_dir}/../base/*.patch; do patch -p1 < $i; done

#apply patches now we apply patches if exist
current_dir=$PWD
# we create link since update_patches uses sdk-6.0 hardcoded 
ln -s $src_dir ${extract_dir}/sdk-6.0
cd ${script_dir}
./update_patches.sh ${extract_dir}


 
cd ${extract_dir}/${oc_sdk_dir}
export CPPFLAGS="-I/usr/include/c++/4.6.3 -I/usr/include/c++/4.6.3/i686-linux-gnu"
# we run preinstall as root
sudo ./install   --preinstall
if [ $? != 0 ]
then
   echo "Failed to install OC new version"
   exit 1
fi
sudo rm -rf ${extract_dir}/${oc_sdk_dir}/log
./install   --install    --install-dir ${install_dir}
if [ $? != 0 ]
then
   echo "Failed to install OC new version"
   exit 1
fi

cp -r $src_dir/.git ${install_dir}/sdk-6.0 
rm -rf ${extract_dir}


