#line 1 "Z:\\b\\rpm_proc\\core\\bsp\\rpm\\src\\rpm.scl"











 










RPMSS_CODE 0x000000
{
  CODE_RAM 0x000000 0x1FFFF
  {
    startup.o(RPM_ENTRY, +FIRST)
    * (InRoot$$Sections)
    * (+RO-CODE)
    * (+RO-DATA)
  }
}

RPMSS_DATA 0x90000 0x10000
{
  DATA_RAM 0x90000 NOCOMPRESS ZEROPAD
  {
    * (+RW)
    * (+ZI)
  }

  OTHER_SECTIONS +0x0 EMPTY 0x0
  {
    
  }

  INIT_DATA_RAM_STACK_END (0x90000 + 0x10000) EMPTY 0x0
  {
  }
}

