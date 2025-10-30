// write a program to input two numbers and display their sum, product and average
# include<stdio.h>

int main() {
    int a, b;
    printf("Enter a:");
    scanf("%d", &a);

    printf("Enter b:");
    scanf("%d", &b);

    int sum = a + b;
    int product = a * b;
    int average = a + b / 2;
    printf("The sum is : %d\n", sum);
    printf("The product is: %d\n", product);
    printf("The average is: %d\n", average);
    return 0;
}