#include<stdio.h>

int main(){
  int age, count = 0;
  float sum = 0;
  while(scanf("%d", &age) && age > 0){
    sum += age;
    count++;
  }
  printf("%.2lf\n", sum / count);
  return 0;
}