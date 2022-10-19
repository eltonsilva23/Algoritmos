#include<stdio.h>
int main() {
  long long num, i;
  int verificar = 0;
  scanf("%lld", &num);
  for (i=2; i<num; i++){
    if (num%i==0){
      verificar+=1;
      break;
    }
  }
  if (verificar ==0) 
    printf("Sim");
  else
    printf("Nao");
  return 0;
}