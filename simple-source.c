#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("введите 2 целых числа через пробел \n");
    scanf("%d %d", &a, &b);
    c = a - b;
    printf("сумма: %d ", c);
    return 0;
}
