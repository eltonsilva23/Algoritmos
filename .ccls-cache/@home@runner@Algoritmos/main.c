#include<stdio.h>
int main(){
  int m1,m2,horas,minutos;
  scanf("%d", &m1);
  scanf("%d", &m2);
  horas = (m2 - m1)/60;
  minutos = (m2 - m1)%60;
  printf("%02d:%d\n", horas, minutos);
  return 0;
}