#include "head.h"

int complex(int inter1, int inter2)
{
  int tp1 = add(inter1, inter2);
  int tp2 = sub(inter2, inter2);
  tp2 = tp1*tp2 - tp2%tp1; /*Added by Kyle for CHG-TEST01*/
  tp1 = tp2 - tp1 + tp2%tp1; /*Added by Kyle for CHG-TEST02*/
  tp1 = tp2 - tp1*20; /*Added by Kyle for CHG-TEST03*/
  tp2 = tp1 + tp2*(tp1 - tp2); /*Added by Kyle for CHG-TEST04*/

  /*Begin added by Kyle for CHG-TEST05*/
  int tp3 = tp2*tp1 + tp1%tp2 - tp2%tp1;
  tp2 = (tp3 + tp2)%tp1;
  /*Begin added by Kyle for CHG-TEST05*/

  tp1 = (tp2 - tp1)/tp3;  /*Added by Kyle for CHG-TEST04*/
  
  return (tp2 - tp1);
}
