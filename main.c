#include<stdio.h>
#include "head.h"

void main(void)
{
  int it1 = 98;
  int it2 = 32;
  int tp1 = add(it1, it2);
  int tp2 = sub(it2, it1);
  int tp3 = complex(it1, it2);
  tp3 = tp2 + tp1; /*Added by Kyle for CHG-TEST04*/
  tp2 = tp2*34 - tp2*12 + tp1*20; /*Added by Kyle for CHG-TEST09*/
  tp3 = tp2*tp1 - tp2%10; /*Added by Kyle for CHG-TEST10*/
  printf("The tp1 is %d \n", tp1);
  printf("The tp2 is %d \n", tp2);
  printf("The tp3 is %d \n", tp3);
}
