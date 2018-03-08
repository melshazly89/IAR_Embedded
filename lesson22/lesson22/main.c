#include <stdint.h>
#include "bsp.h"


/* background code: sequential with blocking version */
uint32_t Task1_Stack[40]; 
uint32_t *Task1_SP=&Task1_Stack[40];
void Task1() {
	  BSP_init();
    while (1) {
			  BSP_ledGreenOn();
        BSP_delay(BSP_TICKS_PER_SEC / 4U);
			  BSP_ledGreenOff();
        BSP_delay(BSP_TICKS_PER_SEC * 3U / 4U);
    }
}

uint32_t Task2_Stack[40]; 
uint32_t *Task2_SP=&Task2_Stack[40];
void Task2() {
	  BSP_init();
    while (1) {			
				BSP_ledBlueOn();
        BSP_delay(BSP_TICKS_PER_SEC / 4U);
			  BSP_ledBlueOff();
        BSP_delay(BSP_TICKS_PER_SEC * 3U / 4U);
    }
}
int main()
{
	uint32_t volatile run=0;
	BSP_init();
/*Fabricate cortex-M ISR Stack frame for Task1*/
*(--Task1_SP)=(1U<<24);             /*Set THUMB Mode*/
*(--Task1_SP)=(uint32_t)&Task1;     /*PC*/
*(--Task1_SP)=0x0000000EU;          /*LR*/
*(--Task1_SP)=0x0000000CU;          /*R12*/
*(--Task1_SP)=0x00000003U;          /*R3*/
*(--Task1_SP)=0x00000002U;          /*R2*/
*(--Task1_SP)=0x00000001U;          /*R1*/
*(--Task1_SP)=0x00000000U;          /*R0*/
/*R4-R11 */
*(--Task1_SP)=0x0000000BU;          /*R11*/
*(--Task1_SP)=0x0000000AU;          /*R10*/
*(--Task1_SP)=0x00000009U;          /*R9*/
*(--Task1_SP)=0x00000008U;          /*R8*/
*(--Task1_SP)=0x00000007U;          /*R7*/
*(--Task1_SP)=0x00000006U;          /*R6*/
*(--Task1_SP)=0x00000005U;          /*R5*/
*(--Task1_SP)=0x00000004U;          /*R4*/
	
/*Fabricate cortex-M ISR Stack frame for Task2*/
*(--Task2_SP)=(1U<<24);             /*Set THUMB Mode*/
*(--Task2_SP)=(uint32_t)&Task2;     /*PC*/
*(--Task2_SP)=0x0000000EU;          /*LR*/
*(--Task2_SP)=0x0000000CU;          /*R12*/
*(--Task2_SP)=0x00000003U;          /*R3*/
*(--Task2_SP)=0x00000002U;          /*R2*/
*(--Task2_SP)=0x00000001U;          /*R1*/
*(--Task2_SP)=0x00000000U;          /*R0*/
/*R4-R11 */
*(--Task2_SP)=0x0000000BU;          /*R11*/
*(--Task2_SP)=0x0000000AU;          /*R10*/
*(--Task2_SP)=0x00000009U;          /*R9*/
*(--Task2_SP)=0x00000008U;          /*R8*/
*(--Task2_SP)=0x00000007U;          /*R7*/
*(--Task2_SP)=0x00000006U;          /*R6*/
*(--Task2_SP)=0x00000005U;          /*R5*/
*(--Task2_SP)=0x00000004U;          /*R4*/

while(1)
{
	
}
}