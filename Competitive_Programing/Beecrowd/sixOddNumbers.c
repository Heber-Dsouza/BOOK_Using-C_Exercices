#include<stdio.h>

#define MAX 6

int main(){
  int n, i;
  scanf("%d", &n);
  for(i = 0; i < MAX; i++)
    printf("%d\n", n + (i * 2) + (n % 2 == 0 ? 1 : 0)); // *a
  return 0;
}

// a: 0 para obter apartir do número ímpar ou 2 para obter apartir do próximo número ímpar