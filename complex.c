#inlcude "head.h"

int complex(int inter1, int inter2)
{
  int tp1 = add(inter1, inter2);
  int tp2 = sub(inter2, inter2);
  tp2 = tp1*tp2 - tp2%tp1; /*Added by Kyle for CHG-TEST01*/
  tp1 = tp2 - tp1 + tp2%tp1; /*Added by Kyle for CHG-TEST02*/
  tp2 = tp1 + tp2*(tp1 - tp2); /*Added by Kyle for CHG-TEST04*/
  return (tp2 - tp1);
}
