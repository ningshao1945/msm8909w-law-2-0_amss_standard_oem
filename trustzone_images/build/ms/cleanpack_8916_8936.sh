#!/bin/bash

cd `dirname $0`
sh build.sh CHIPSET=msm8936 tz hyp sampleapp tzbsp_no_xpu playready widevine securitytest keymaster commonlib USES_FLAGS=USES_PLAYREADY_PACK && sh build.sh CHIPSET=msm8916 tz hyp sampleapp tzbsp_no_xpu playready widevine securitytest keymaster commonlib USES_FLAGS=USES_PLAYREADY_PACK
mkdir -p ./../../../temp/trustzone_images/core/securemsm/trustzone && mkdir -p ./../../../temp/trustzone_images/core/securemsm/trustzone
\cp -f -r ./../../../trustzone_images/core/securemsm/trustzone/monitor ./../../../temp/trustzone_images/core/securemsm/trustzone && \cp -f -r ./../../../trustzone_images/core/securemsm/trustzone/monitor ./../../../temp/trustzone_images/core/securemsm/trustzone
\cp -f -r ./../../../trustzone_images/core/securemsm/trustzone/qsee ./../../../temp/trustzone_images/core/securemsm/trustzone && \cp -f -r ./../../../trustzone_images/core/securemsm/trustzone/qsee ./../../../temp/trustzone_images/core/securemsm/trustzone
sh build.sh CHIPSET=msm8936 tz hyp sampleapp tzbsp_no_xpu playready widevine securitytest keymaster commonlib USES_FLAGS=USES_CLEAN_PACK -c --implicit-deps-unchanged && sh build.sh CHIPSET=msm8916 tz hyp sampleapp tzbsp_no_xpu playready widevine securitytest keymaster commonlib USES_FLAGS=USES_CLEAN_PACK -c --implicit-deps-unchanged
sh build.sh CHIPSET=msm8936 tz hyp sampleapp tzbsp_no_xpu playready widevine securitytest keymaster commonlib -c --implicit-deps-unchanged --cleanpack && sh build.sh CHIPSET=msm8916 tz hyp sampleapp tzbsp_no_xpu playready widevine securitytest keymaster commonlib -c --implicit-deps-unchanged --cleanpack
sh build.sh CHIPSET=msm8936 tz hyp sampleapp tzbsp_no_xpu playready widevine securitytest keymaster commonlib && sh build.sh CHIPSET=msm8916 tz hyp sampleapp tzbsp_no_xpu playready widevine securitytest keymaster commonlib
