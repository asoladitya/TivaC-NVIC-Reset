#include "tm4c_cmsis.h"

extern int CSTACK$$Limit;
void __iar_program_start(void);
const int __vector_table[] @".intvec" = {
   (int)&CSTACK$$Limit,
   (int)&__iar_program_start,
   (int)& NMI_Handler,
   (int)& HardFault_Handler,
   (int)&MemManage_Handler,
   (int)&BusFault_Handler,
   (int)&UsageFault_Handler,
   0,
   0,
   0,
   0,
   (int)&SVC_Handler,
   0,
   0,
   (int)&PendSV_Handler,
   (int)&SysTick_Handler,
    
};


__stackless void Default_Handler(void);
__stackless void Default_Handler(void){
   assert_failed("Default", __LINE__);
}


#pragma weak HardFault_Handler = Default_Handler
#pragma weak MemManage_Handler = Default_Handler
#pragma weak BusFault_Handler = Default_Handler
#pragma weak UsageFault_Handler = Default_Handler