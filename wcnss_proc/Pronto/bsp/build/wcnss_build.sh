#!/bin/bash

# Changing permissions for sh files
cd ../../../
find . -name *.sh | xargs chmod 777 *
cd -

if [ -f ../../../core/bsp/build/setenv.sh ]; then
   . ../../../core/bsp/build/setenv.sh
fi

export BUILD_VER=0111
export BUILD_ID=SCAQBAF

export _CMDPARA=$*
if [[ $1 == 8974 ]]  ; then
	export BUILD_ASIC=8974
	export MSM_ID=8974
	export HAL_PLATFORM=8974
	export TARGET_FAMILY=8974
	export CHIPSET=msm8974
	export _CMDARGU=${_CMDPARA/8974 /}
	export BUILD_CMD="BUILD_ID=$BUILD_ID BUILD_VER=$BUILD_VER MSM_ID=$MSM_ID HAL_PLATFORM=$HAL_PLATFORM TARGET_FAMILY=$TARGET_FAMILY BUILD_ASIC=$BUILD_ASIC CHIPSET=$CHIPSET $_CMDARGU"
elif [[ $1 == 8x26 ]] ; then
	export BUILD_ASIC=8x26
	export MSM_ID=8x26
	export HAL_PLATFORM=8x26
	export TARGET_FAMILY=8x26
	export CHIPSET=msm8x26
	export _CMDARGU=${_CMDPARA/8x26 /}
	export BUILD_CMD="BUILD_ID=$BUILD_ID BUILD_VER=$BUILD_VER MSM_ID=$MSM_ID HAL_PLATFORM=$HAL_PLATFORM TARGET_FAMILY=$TARGET_FAMILY BUILD_ASIC=$BUILD_ASIC CHIPSET=$CHIPSET $_CMDARGU"
elif [[ $1 == 8x26_MR ]] ; then
	export BUILD_ASIC=8x26
        export BUILD_ID=SCAQMAF
	export MSM_ID=8x26
	export HAL_PLATFORM=8x26
	export TARGET_FAMILY=8x26
	export CHIPSET=msm8x26
	export _CMDARGU=${_CMDPARA/8x26_MR /}
	export BUILD_CMD="BUILD_ID=$BUILD_ID BUILD_VER=$BUILD_VER MSM_ID=$MSM_ID HAL_PLATFORM=$HAL_PLATFORM TARGET_FAMILY=$TARGET_FAMILY BUILD_ASIC=$BUILD_ASIC CHIPSET=$CHIPSET $_CMDARGU"
elif [[ $1 == 8x10 ]] ; then
	export BUILD_ASIC=8x10
	export MSM_ID=8x10
	export HAL_PLATFORM=8x10
	export TARGET_FAMILY=8x10
	export CHIPSET=msm8x10
	export _CMDARGU=${_CMDPARA/8x10 /}
	export BUILD_CMD="BUILD_ID=$BUILD_ID BUILD_VER=$BUILD_VER MSM_ID=$MSM_ID HAL_PLATFORM=$HAL_PLATFORM TARGET_FAMILY=$TARGET_FAMILY BUILD_ASIC=$BUILD_ASIC CHIPSET=$CHIPSET $_CMDARGU"
elif [[ $1 == 8x10_MR ]] ; then
	export BUILD_ASIC=8x10
	export BUILD_ID=SCAQMAF
	export MSM_ID=8x10
	export HAL_PLATFORM=8x10
	export TARGET_FAMILY=8x10
	export CHIPSET=msm8x10
	export _CMDARGU=${_CMDPARA/8x10_MR /}
	export BUILD_CMD="BUILD_ID=$BUILD_ID BUILD_VER=$BUILD_VER MSM_ID=$MSM_ID HAL_PLATFORM=$HAL_PLATFORM TARGET_FAMILY=$TARGET_FAMILY BUILD_ASIC=$BUILD_ASIC CHIPSET=$CHIPSET $_CMDARGU"	
elif [[ $1 == 8962 ]] ; then
	export BUILD_ASIC=8962
	export BUILD_ID=NCAQBAF
	export MSM_ID=8962
	export HAL_PLATFORM=8962
	export TARGET_FAMILY=8962
	export CHIPSET=msm8962
	export _CMDARGU=${_CMDPARA/8962 /}
	export BUILD_CMD="BUILD_ID=$BUILD_ID BUILD_VER=$BUILD_VER MSM_ID=$MSM_ID HAL_PLATFORM=$HAL_PLATFORM TARGET_FAMILY=$TARGET_FAMILY BUILD_ASIC=$BUILD_ASIC CHIPSET=$CHIPSET $_CMDARGU"
elif [[ $1 == 8916_COEX ]] ; then
	export BUILD_ID=SCAQNAF
	export BUILD_ASIC=8916
	export MSM_ID=8916
	export HAL_PLATFORM=8916
	export TARGET_FAMILY=8916
	export CHIPSET=msm8916
	export _CMDARGU=${_CMDPARA/8916_COEX /}
	export BUILD_CMD="BUILD_ID=$BUILD_ID BUILD_VER=$BUILD_VER MSM_ID=$MSM_ID HAL_PLATFORM=$HAL_PLATFORM TARGET_FAMILY=$TARGET_FAMILY BUILD_ASIC=$BUILD_ASIC CHIPSET=$CHIPSET $_CMDARGU"
elif [[ $1 == 8936_COEX ]] ; then
    export BUILD_ID=SCAQNAF
    export BUILD_ASIC=8936
    export MSM_ID=8936
    export HAL_PLATFORM=8936
    export TARGET_FAMILY=8936
    export CHIPSET=msm8936
    export _CMDARGU=${_CMDPARA/8936_COEX /}
    export BUILD_CMD="BUILD_ID=$BUILD_ID BUILD_VER=$BUILD_VER MSM_ID=$MSM_ID HAL_PLATFORM=$HAL_PLATFORM TARGET_FAMILY=$TARGET_FAMILY BUILD_ASIC=$BUILD_ASIC CHIPSET=$CHIPSET $_CMDARGU"
elif [[ $1 == 8909_COEX ]] ; then
    export BUILD_ID=SCAQNAF
    export BUILD_ASIC=8909
    export MSM_ID=8909
    export HAL_PLATFORM=8909
    export TARGET_FAMILY=8909
    export CHIPSET=msm8909
    export _CMDARGU=${_CMDPARA/8909_COEX /}
    export BUILD_CMD="BUILD_ID=$BUILD_ID BUILD_VER=$BUILD_VER MSM_ID=$MSM_ID HAL_PLATFORM=$HAL_PLATFORM TARGET_FAMILY=$TARGET_FAMILY BUILD_ASIC=$BUILD_ASIC CHIPSET=$CHIPSET $_CMDARGU"
elif [[ $1 == 8916 ]] ; then
	export BUILD_ASIC=8916
	export MSM_ID=8916
	export HAL_PLATFORM=8916
	export TARGET_FAMILY=8916
	export CHIPSET=msm8916
	export _CMDARGU=${_CMDPARA/8916 /}
	export BUILD_CMD="BUILD_ID=$BUILD_ID BUILD_VER=$BUILD_VER MSM_ID=$MSM_ID HAL_PLATFORM=$HAL_PLATFORM TARGET_FAMILY=$TARGET_FAMILY BUILD_ASIC=$BUILD_ASIC CHIPSET=$CHIPSET $_CMDARGU"
elif [[ $1 == 8952 ]] ; then
	export BUILD_ASIC=8952
	export MSM_ID=8952
	export HAL_PLATFORM=8952
	export TARGET_FAMILY=8952
	export CHIPSET=msm8952
	export _CMDARGU=${_CMDPARA/8952 /}
	export BUILD_CMD="BUILD_ID=$BUILD_ID BUILD_VER=$BUILD_VER MSM_ID=$MSM_ID HAL_PLATFORM=$HAL_PLATFORM TARGET_FAMILY=$TARGET_FAMILY BUILD_ASIC=$BUILD_ASIC CHIPSET=$CHIPSET $_CMDARGU"
elif [[ $1 == 8909 ]] ; then
	export BUILD_ASIC=8909
	export MSM_ID=8909
	export HAL_PLATFORM=8909
	export TARGET_FAMILY=8909
	export CHIPSET=msm8909
	export _CMDARGU=${_CMDPARA/8909 /}
	export BUILD_CMD="BUILD_ID=$BUILD_ID BUILD_VER=$BUILD_VER MSM_ID=$MSM_ID HAL_PLATFORM=$HAL_PLATFORM TARGET_FAMILY=$TARGET_FAMILY BUILD_ASIC=$BUILD_ASIC CHIPSET=$CHIPSET $_CMDARGU"
elif [[ $1 == 8909_MR ]] ; then
	export BUILD_ID=SCAQMAF	
	export BUILD_ASIC=8909
	export MSM_ID=8909
	export HAL_PLATFORM=8909
	export TARGET_FAMILY=8909
	export CHIPSET=msm8909
	export _CMDARGU=${_CMDPARA/8909_MR /}
	export BUILD_CMD="BUILD_ID=$BUILD_ID BUILD_VER=$BUILD_VER MSM_ID=$MSM_ID HAL_PLATFORM=$HAL_PLATFORM TARGET_FAMILY=$TARGET_FAMILY BUILD_ASIC=$BUILD_ASIC CHIPSET=$CHIPSET $_CMDARGU"
elif [[ $1 == 8909_NOFM ]] ; then
	export BUILD_ID=SCAQDAF	
	export BUILD_ASIC=8909
	export MSM_ID=8909
	export HAL_PLATFORM=8909
	export TARGET_FAMILY=8909
	export CHIPSET=msm8909
	export _CMDARGU=${_CMDPARA/8909_NOFM /}
	export BUILD_CMD="BUILD_ID=$BUILD_ID BUILD_VER=$BUILD_VER MSM_ID=$MSM_ID HAL_PLATFORM=$HAL_PLATFORM TARGET_FAMILY=$TARGET_FAMILY BUILD_ASIC=$BUILD_ASIC CHIPSET=$CHIPSET $_CMDARGU"	
elif [[ $1 == 8936 ]] ; then
	export BUILD_ASIC=8936
	export MSM_ID=8936
	export HAL_PLATFORM=8936
	export TARGET_FAMILY=8936
	export CHIPSET=msm8936
	export _CMDARGU=${_CMDPARA/8936 /}
	export BUILD_CMD="BUILD_ID=$BUILD_ID BUILD_VER=$BUILD_VER MSM_ID=$MSM_ID HAL_PLATFORM=$HAL_PLATFORM TARGET_FAMILY=$TARGET_FAMILY BUILD_ASIC=$BUILD_ASIC CHIPSET=$CHIPSET $_CMDARGU"
elif [[ $1 == 8929_COEX ]] ; then
    export BUILD_ID=SCAQNAF
    export BUILD_ASIC=8929
    export MSM_ID=8929
    export HAL_PLATFORM=8929
    export TARGET_FAMILY=8929
    export CHIPSET=msm8929
    export _CMDARGU=${_CMDPARA/8929_COEX /}
    export BUILD_CMD="BUILD_ID=$BUILD_ID BUILD_VER=$BUILD_VER MSM_ID=$MSM_ID HAL_PLATFORM=$HAL_PLATFORM TARGET_FAMILY=$TARGET_FAMILY BUILD_ASIC=$BUILD_ASIC CHIPSET=$CHIPSET $_CMDARGU"
fi
export BUILD_ROOT=../../..
export TOOLS_SCONS_ROOT=$BUILD_ROOT/tools/build/scons

$TOOLS_SCONS_ROOT/build/rename-log.sh
$TOOLS_SCONS_ROOT/build/build.sh -f target.scons $BUILD_CMD 
