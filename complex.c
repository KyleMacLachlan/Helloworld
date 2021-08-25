#inlcude "head.h"

int complex(int inter1, int inter2)
{
  int tp1 = add(inter1, inter2);
  int tp2 = sub(inter2, inter2);
  return (tp2 - tp1);
}
