#include<stdio.h>

#define stardardEarningPorcentage 15.0
#define increasedValue(value) (value * (stardardEarningPorcentage / 100))

int main(){
  char name[101];
  double salary, salesTotal;
  scanf("%s %lf %lf", name, &salary, &salesTotal);
  printf("TOTAL = R$ %.2lf\n", salary + increasedValue(salesTotal));
  return 0;
}
