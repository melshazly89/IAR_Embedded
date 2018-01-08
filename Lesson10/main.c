#include"lm4f120h5qr.h"
#include"delay.h"
#define LED_RED (1U<<1)
#define LED_BLUE (1U<<2)
#define LED_GREEN (1U<<3)
void swap(int *x,int *y);
void swap(int *x,int *y)
{
int temp=*x;
*x=*y;
*y=temp;
}
int main()
{
  int x=4;
  int y=10;
  swap(&x,&y);
  SYSCTL_RCGCGPIO_R|=(1U<<5);   
  GPIO_PORTF_DIR_R|=(LED_RED|LED_BLUE|LED_GREEN); 
  GPIO_PORTF_DEN_R|=(LED_RED|LED_BLUE|LED_GREEN);   
  GPIO_PORTF_DATA_BITS_R[LED_BLUE]=LED_BLUE;
  while(1)
  {
  GPIO_PORTF_DATA_BITS_R[LED_RED]=LED_RED;   
  delay(1000000);
  GPIO_PORTF_DATA_BITS_R[LED_RED]=0;
  delay(500000);
  }
  return 0;
}
