/*Startup code for TM4c MCU*/
#include "tm4c_cmsis.h"
extern int CSTACK$$Limit;
void __iar_program_start(void);
void Unused_Handler(void);
const int __vector_table[] @ ".intvec"={
 (int)&CSTACK$$Limit
,(int)&__iar_program_start
,(int)&NMI_Handler
,(int)&HardFault_Handler
,(int)&MemManage_Handler
,(int)&BusFault_Handler
,(int)&UsageFault_Handler
,0   /*Reserved*/
,0   /*Reserved*/
,0   /*Reserved*/
,0   /*Reserved*/
,(int)&SVC_Handler        /*Non Fault Handler*/
,(int)&DebugMon_Handler   /*Non Fault Handler*/
,0   /*Reserved*/
,(int)&PendSV_Handler     /*Non Fault Handler*/
,(int)&SysTick_Handler    /*Non Fault Handler*/
};

__stackless void HardFault_Handler(void)
{
  assert_failed ("HardFault", __LINE__);
}
__stackless void NMI_Handler(void)
{
  assert_failed ("NMI", __LINE__);
}
__stackless void MemManage_Handler(void)
{
  assert_failed ("MemManage", __LINE__);
}
__stackless void BusFault_Handler(void)
{
  assert_failed ("BusFault", __LINE__);
}
__stackless void UsageFault_Handler(void)
{
  assert_failed ("UsageFault", __LINE__);
}
__stackless void Unused_Handler(void)
{
  assert_failed ("unused", __LINE__);
}

/*if the handler is not used*/
#pragma weak SVC_Handler       = Unused_Handler
#pragma weak DebugMon_Handler       = Unused_Handler
#pragma weak PendSV_Handler       = Unused_Handler
#pragma weak SysTick_Handler       = Unused_Handler

