#include<stdio.h>
int main() {
  long long num1, num2, menor;
  scanf ("%lld %lld", &num1, &num2);
  if (num1>=num2) {
    menor=num2;
  } else{
    menor=num1;
  }
  printf("%lld", menor);
  return 0;
}