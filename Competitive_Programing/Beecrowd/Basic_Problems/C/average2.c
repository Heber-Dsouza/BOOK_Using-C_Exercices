#include<stdio.h>

#define P1 2
#define P2 3 
#define P3 5
#define calcAverage(a, b, c) (((a * P1) + (b * P2) + (c * P3)) / (P1 + P2 + P3))

int main(){
  double a, b, c;
  scanf("%lf %lf %lf", &a, &b, &c);
  printf("MEDIA = %.1lf\n", calcAverage(a, b, c));
  return 0;
}