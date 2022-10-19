#include<stdio.h>
int main() {
  long long num1, num2, menor;
  scanf ("%lld %lld", &num1, &num2);
  if (num1>=num2) {
    menor=num2;
  } else{
    menor=num1;
  }
  long long divisor;
  for (long long i=1; i<=menor; i++) {
      if (num1%i==0 && num2%i==0) {
        divisor=i;
      }
  }
  printf("%lld\n", divisor);
  return 0;
}