#include<stdio.h>

#define P1 3.5
#define P2 7.5

int main(){
  double a, b;
  scanf("%lf %lf", &a, &b);
  printf("MEDIA = %.5lf\n", (((a * P1) + (b * P2)) / (P1 + P2)));
  return 0;
}