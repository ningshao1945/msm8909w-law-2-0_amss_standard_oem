#line 1 "/local/mnt/workspace/CRMBuilds/BOOT.BF.3.1.2.c3-00012-M8909WAAAANAZB-1_20161208_043404/b/boot_images/core/boot/ddr/common/ddr_debug_msm8909.scl"










 

































































 

#line 1 "/local/mnt/workspace/CRMBuilds/BOOT.BF.3.1.2.c3-00012-M8909WAAAANAZB-1_20161208_043404/b/boot_images/core/boot/secboot3/hw/msm8909/boot_target.h"















 



































 





 




#line 1 "./custwaasanaza.h"






 

#line 1 "./targwaasanaza.h"






 

#line 136 "./targwaasanaza.h"




#line 11 "./custwaasanaza.h"











#line 64 "/local/mnt/workspace/CRMBuilds/BOOT.BF.3.1.2.c3-00012-M8909WAAAANAZB-1_20161208_043404/b/boot_images/core/boot/secboot3/hw/msm8909/boot_target.h"



 





 




#line 103 "/local/mnt/workspace/CRMBuilds/BOOT.BF.3.1.2.c3-00012-M8909WAAAANAZB-1_20161208_043404/b/boot_images/core/boot/secboot3/hw/msm8909/boot_target.h"








  


 






 






 





 









 




 







 









 






 


  




 





 





 




 




 




 





 




 




 




 




 




 




                                 


                                 
                                 


                                 
                               


                                 
                               


                                 
 


                                 
 


                             
                                 



 






 





                             


                             
#line 296 "/local/mnt/workspace/CRMBuilds/BOOT.BF.3.1.2.c3-00012-M8909WAAAANAZB-1_20161208_043404/b/boot_images/core/boot/secboot3/hw/msm8909/boot_target.h"




  
 






 



                              


                              


 



   


 


 


 




 


#line 80 "/local/mnt/workspace/CRMBuilds/BOOT.BF.3.1.2.c3-00012-M8909WAAAANAZB-1_20161208_043404/b/boot_images/core/boot/ddr/common/ddr_debug_msm8909.scl"





CODE_ROM 0x08005800 0x1b000
{
  COPY_ROM 0x08005800  ALIGN 0x8
  {   
    sbl1_ddr_debug.o(SBL1_INDIRECT_VECTOR_TABLE,+FIRST)

  }
    DDR_DEBUG_RO +0x0
  {
    * (+RO-DATA)
  }
    DDR_DEBUG_CODE +0x0
  {
    * (+RO-CODE)
  }
	DDR_DEBUG_RW +0x0  
	  {
	    * (+RW)
	  }

  
ScatterAssert( ImageLimit(COPY_ROM) <= 0x08005800 + (0x220000-0x205000 ))

 DDR_DEBUG_ZI (0x00290000)  0x0010000
	{
	    * (+ZI)
	    * (BOOT_INTERNAL_HEAP)
	    * (DDR_DEBUG_TUNING_COOKIE)
   
	}
  SBL1_DDR_ZI ((0x08005800 + 0x0040000) + (0x0002000 + 0x0002000 + 0x0002000)) 0x0068000
  {
    qhsusb_scsi*.o (+RO, +RW, +ZI)
  }

  SBL1_DATA_RW +0x0 EMPTY 0x0
  {
  }

  SBL1_DATA_ZI +0x0 EMPTY 0x0
  {
  }

  
  SBL1_LOG_META_INFO_SECTION +0x0 EMPTY 64
  {
  }

  
  SBL1_LOG_BUF_SECTION +0x0 EMPTY 2048
  {
  }

  SBL1_DLOAD_ZI +0
  {
  } 

  SBL1_DEVICEPROGRAMMER_USB_ZI +0x0
  {
  } 
    
  SYSTEM_DEBUG_QSEE_INFO +0x0 EMPTY ALIGN 0x8 0x20
  { 
  } 

  TCM_SDI (0x08005800+(0x220000-0x205000)) ALIGN 0x8 0x0003000 
  {
   sbl1_ddr_debug_sdi.o (WDOG_ENTRY,+FIRST)
   sbl1_ddr_debug_sdi.o (+RO,+RW,+ZI)
  }
}
