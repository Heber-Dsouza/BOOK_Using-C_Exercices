#include<stdio.h>

#define _perimetro(a, b, c) (a + b + c)
#define _area(a, b, c) (((a + b) * c ) / 2)

int isTriangle(float a, float b, float c){
  return ((a + b) > c) && ((a + c) > b) && ((b + c) > a);
}

int main(){
  float a, b, c;
  scanf("%f %f %f", &a, &b, &c);
  if(isTriangle(a, b, c))
    printf("Perimetro = %.1f\n", _perimetro(a, b, c));
  else
    printf("Area = %.1f\n", _area(a, b, c));
  return 0;
}