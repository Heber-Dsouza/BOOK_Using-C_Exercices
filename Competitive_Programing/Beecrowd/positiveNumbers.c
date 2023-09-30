#include<stdio.h>

#define MAX 6

int main(){
  float values[MAX];
  int i, count = 0;
  for(i = 0; i < MAX; i++){
    scanf("%f", &values[i]);
    if(values[i] > 0)
      count++;
  }
  printf("%d valores positivos\n", count);
  return 0;
}