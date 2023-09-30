#include<stdio.h>

int main(){
  const int validPassword = 2002, entry;
  while(scanf("%d", &entry) && entry != validPassword)
    printf("Senha Invalida\n");
  printf("Acesso Permitido\n");
  return 0;
}