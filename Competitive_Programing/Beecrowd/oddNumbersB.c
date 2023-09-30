#include <stdio.h>

#define handleComparator(i, n) (i < (n / 2) + (n % 2))
#define handlePrint(i) (1 + (i * 2))

int main(){
    int n, i;
    scanf("%d", &n);
    for(i = 0; handleComparator(i, n); i++)
        printf("%d\n", handlePrint(i));
    return 0;
}
