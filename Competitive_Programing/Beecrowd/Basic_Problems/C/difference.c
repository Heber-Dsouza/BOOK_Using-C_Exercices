#include<stdio.h>

#define difference(a, b, c, d) ((a * b) - (c * d))

int main(){
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  printf("DIFERENCA = %d\n", difference(a, b, c, d));
  return 0;
}