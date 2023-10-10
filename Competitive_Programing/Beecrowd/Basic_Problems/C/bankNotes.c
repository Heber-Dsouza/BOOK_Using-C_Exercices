#include <stdio.h>

int main(){

	struct Notas {
		int bill, number;
	} x[] = {{100, 0}, {50, 0},	{20, 0}, {10, 0}, {5, 0}, {2, 0}, {1, 0}};

	int money, i,
		arrayLength = sizeof(x) / sizeof(x[0]);

  scanf("%d", &money);
  printf("%d\n", money);

  for(i = 0; i < arrayLength; i++){
    x[i].number = money / x[i].bill;
    if(money == x[i].bill)
      x[i].number = 1;
    money %= x[i].bill;
  }

	for(i = 0; i < arrayLength; i++)
		printf("%d nota(s) de R$ %d,00\n", x[i].number, x[i].bill);

	return 0;
}
