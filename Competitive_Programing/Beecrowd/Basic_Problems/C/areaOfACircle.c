#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double Calc_Circle_Area(double x, double *PI_value){
  double PI = 3.14159;
  if(PI_value == NULL)
    PI_value = &PI;
	return *PI_value * pow(x, 2);
}

int main(){
	double R;
  scanf("%lf", &R);
	printf("A=%.4lf\n", Calc_Circle_Area(R, NULL));
	return 0;
}