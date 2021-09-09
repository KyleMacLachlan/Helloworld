#include "head.h"
/*Test by conf 01 added by kyle*/
/*Added by kyle for test of conf02*/
int complex(int inter1, int inter2)
{
  int tp1 = add(inter1, inter2);
  int tp2 = sub(inter2, inter2);
  tp2 = tp1 + tp2%tp1 - tp1*tp2; /*Added by Kyle for CHG-TEST06*/
  tp2 = tp1*tp2 - tp2%tp1; /*Added by Kyle for CHG-TEST01*/
  tp1 = tp2 - tp1 + tp2%tp1; /*Added by Kyle for CHG-TEST02*/
  tp1 = tp2 - tp1*20; /*Added by Kyle for CHG-TEST03*/
  tp2 = tp1 + tp2*(tp1 - tp2); /*Added by Kyle for CHG-TEST04*/

  /*Begin added by Kyle for CHG-TEST05*/
  int tp3 = tp2*tp1 + tp1%tp2 - tp2%tp1;
  tp2 = (tp3 + tp2)%tp1;
  /*Begin added by Kyle for CHG-TEST05*/

  tp1 = (tp2 - tp1)/tp3;  /*Added by Kyle for CHG-TEST05*/
  tp2 = tp2*tp1*(tp2 + tp1)%tp1; /*Added by Kyle for CHG-TEST05*/

  tp3 = tp2 + tp1*tp2%tp1; /*Added by Kyle for CHG-TEST06*/

  tp2 = tp1*100 - tp2%tp1 + tp1*20; /*Added by Kyle for CHG-TEST07*/

  tp1 = (tp2 + tp1)%10 + tp2*176 - tp1%32; /*Added by Kyle for CHG-TEST08*/

  tp2 = tp2*100 - (tp1%30)*43 + tp2*23; /*Added by Kyle for CHG-TEST09*/
  tp2 = tp2*tp2*tp1 - tp2*tp2%tp1; /*Added by Kyle for CHG-TEST10*/
  /*Cnf3 added by kyle 333333*/
  return (tp2 - tp1);
}
