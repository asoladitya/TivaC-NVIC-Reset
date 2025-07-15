#include "tm4c_cmsis.h"
#include "core_cm4.h"
#include "delay.h"
#include "fact.h"
#include "stdint.h"
#include "swap.h"
#include "bsp.h"
#include "intrinsics.h"

typedef struct {uint8_t x;
uint16_t y;
} point;



typedef struct {point bottom_right;
point top_left;
} window;




typedef struct {point corners[3];
} triangle;
triangle t;

const int x0 = 20;

int main() {
  
   SYSCTL->RCGC2 |= (1U << 5);
   SYSCTL->GPIOHSCTL |= (1U << 5);
   GPIOF_AHB->DIR |= LED_RED | LED_BLUE | LED_GREEN;
   GPIOF_AHB->DEN |= LED_RED | LED_BLUE | LED_GREEN;
   GPIOF_AHB->DATA ^= LED_BLUE;
   SysTick->CTRL = (1U | 1U<<1 | 1U<<2);
   SysTick->LOAD = CLK_HZ/2 - 1;
   SysTick->VAL = 0;
         int x = 1000000;
         int y = 1000000/2U; 
         __enable_interrupt();
         while (1) {
           GPIOF_AHB->DATA_Bits[LED_GREEN] = LED_GREEN;
           GPIOF_AHB->DATA_Bits[LED_GREEN] = 0U;
         /*int *p = swap(&x, &y);
         GPIOF_AHB->DATA_Bits[LED_RED] ^= LED_RED;        
         delay(1000000);
         int x1 = x0;*/
         
         }
    return 0;
}


