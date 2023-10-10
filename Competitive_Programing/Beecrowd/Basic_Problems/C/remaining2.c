#include<stdio.h>

#define result(i, n) ((i * n) + 2)
#define MAX 10000

int main(){
  int n, i;
  scanf("%d", &n);
  for(i = 0; result(i, n) < MAX; i++)
    printf("%d\n", result(i, n));
  return 0;
}