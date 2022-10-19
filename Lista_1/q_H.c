#include<stdio.h>
int main() {
  long long a11,a12;
  scanf("%lld %lld", &a11, &a12);
  long long a21,a22;
  scanf("%lld %lld", &a21, &a22);
  long long p1,p2;
  scanf("%lld %lld", &p1, &p2);
  long long m1, m2;
  m1=(a11*p1+a12*p2)/(p1+p2);
  m2=(a21*p1+a22*p2)/(p1+p2);
  if (m1>=m2) {printf("1\n");}
  else {printf("2\n");}
  return 0;
}