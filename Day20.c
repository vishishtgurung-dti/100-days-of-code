#include <stdio.h>

int main() {
    int num, digit;
    int product = 1;
    int hasOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Work with the absolute value in case of negative input
    if (num < 0)
        num = -num;

    while (num > 0) {
        digit = num % 10;
        if (digit % 2 != 0) {   // check if digit is odd
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;
    }

    if (hasOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}
