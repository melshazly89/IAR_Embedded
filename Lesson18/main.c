#include <stdint.h>

#include "tm4c_cmsis.h"
#include "BSP.h"

#define LED_RED   (1U << 1)
#define LED_BLUE  (1U << 2)
#define LED_GREEN (1U << 3)
#define CLK_SRC   (1U << 2)
#define INTEN     (1U << 1)
#define ENABLE    (1U)
#define SYS_CLOCK_HZ 16000000UL

int main() {
    SYSCTL->RCGC2 |= (1U << 5);  /* enable clock for GPIOF */
    SYSCTL->GPIOHSCTL |= (1U << 5); /* enable AHB for GPIOF */
    GPIOF_HS->DIR |= (LED_RED | LED_BLUE | LED_GREEN);
    GPIOF_HS->DEN |= (LED_RED | LED_BLUE | LED_GREEN);
    /*SysTick Configuration*/
    SysTick->LOAD   = SYS_CLOCK_HZ/2U-1U; 
    SysTick->VAL   = 0UL; 
    SysTick->CTRL|=CLK_SRC|INTEN|ENABLE;
    __enable_interrupt();   /*Clear PRIMASK bit*/
    while (1) {  
      GPIOF_HS->DATA_Bits[LED_GREEN]= LED_GREEN;
      GPIOF_HS->DATA_Bits[LED_GREEN]= 0U;
    }

}
