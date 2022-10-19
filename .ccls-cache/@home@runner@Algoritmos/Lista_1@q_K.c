//=int(input())
//c=int(input())
//if (l%2!=c%2) :
//  print(0)
//else:
//  print(1)
#include<stdio.h>
int main () {
  int x1, y1, x2, y2;
  int movimentos;
  int d1=x1-x2;
  int d2=y1-y2;
  scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
  while (x1+y1+x2+y2!=0){
    if ((x1==x2) && (y1==y2))
      movimentos=0;
    else
      if ((x1=x2) && (y1!=y2))
        movimentos=1;
      else
        if ((x1!=x2) && (y1=y2))
          movimentos=1;
        else
          if (d1==d2)
            movimentos=1;
          else
            if (d1!=d2)
            movimentos=2;
    printf("%d\n", movimentos);
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
  }
  return 0;
}