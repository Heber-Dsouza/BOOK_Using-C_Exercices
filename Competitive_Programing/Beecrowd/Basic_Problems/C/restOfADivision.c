#include<stdio.h>

void swap(int *n, int *m){
  if(*n > *m){
    int temp = *n;
    *n = *m;
    *m = temp;
  }
}

int main(){
  int n, m;
  scanf("%d %d", &n, &m);
  swap(&n, &m);
  for(n++; n < m; n++)
    if(n % 5 == 2 || n % 5 == 3)
      printf("%d\n", n);
  return 0;
}