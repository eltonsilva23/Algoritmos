#include<stdio.h>
int main() {
  int h1, m1, h2, m2;
  scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
  
  while (h1+m1+h2+m2!=0){
    int acorda, dorme, tempo_1, tempo_2;
    acorda = h2*60+m2;
    dorme = h1*60+m1;
    tempo_1=acorda - dorme;
    tempo_2 = tempo_1 + 1440;
    if (acorda > dorme)
      printf("%d\n", tempo_1);
    else
      printf("%d\n", tempo_2);
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    }
  return 0;
}