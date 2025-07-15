#include "tm4c_cmsis.h"
#include "bsp.h"
__stackless void assert_failed (char const *file, int line){
   NVIC_SystemReset();
}

__stackless void HardFault_Handler(void){
   assert_failed("HardFault", __LINE__);
}
__stackless void NMI_Handler(void){
   assert_failed("NMI", __LINE__);
}
void SysTick_Handler(void){
   GPIOF_AHB->DATA_Bits[LED_RED] ^= LED_RED;
}