#include <stdio.h>

int main() {
  int x;
  scanf("%d", &x);
  if ((x+1)%2==0)
    printf("%d",x+1);
  else
    printf("%d", x+2);
  return 0;
}