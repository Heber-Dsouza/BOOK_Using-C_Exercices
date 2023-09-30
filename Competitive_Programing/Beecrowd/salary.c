#include<stdio.h>

#define calcSalary(a ,b) (a * b)

int main(){
  int number, hours;
  double wage;
  scanf("%d %d %lf", &number, &hours, &wage);
  printf("NUMBER = %d\nSALARY = U$ %.2lf\n", number, calcSalary(hours, wage));
  return 0;
}