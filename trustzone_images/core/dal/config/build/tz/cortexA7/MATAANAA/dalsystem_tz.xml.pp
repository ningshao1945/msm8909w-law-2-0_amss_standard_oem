#line 1 "/local/mnt/workspace/CRMBuilds/TZ.BF.2.5.c10-00004-M8909AAAAANAZT-2_20161130_222454/b/trustzone_images/core/dal/config/tz/dalsystem_tz.xml"













<driver name="System">
    <global_def> 
        <var_seq name="g_target_cfg" type=DALPROP_DATA_TYPE_UINT32_SEQ> 
            0x8909, DAL_CONFIG_ARCH, end
        </var_seq>
    </global_def> 
    <device id="0x0">
        <props name="DalEnv" type=DALPROP_ATTR_TYPE_UINT32>
            DALPROP_MOD_ENV_TZOS
        </props>
        <props name=DALPROP_TARGET_PROP_NAME type=DALPROP_ATTR_TYPE_UINT32_SEQ_PTR> 
          g_target_cfg
        </props>
        <props name="GlbCtxtHWMutexNumber" type=DALPROP_ATTR_TYPE_UINT32>
         0x9
        </props>
    </device>
</driver>
