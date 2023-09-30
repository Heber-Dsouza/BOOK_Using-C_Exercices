#include<stdio.h>

#define Square(n) (n * n) 

int main(){
  int n, i;
  scanf("%d", &n);
  for(i = 1; i <= n / 2; i++)
    printf("%d^2 = %d\n", i * 2, Square(i * 2));
  return 0;
}