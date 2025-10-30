//write a program to input two numbers and display their sum
# include<stdio.h>

int main() {
    int a, b;
    printf("Enter a:");
    scanf("%d", &a);

    printf("Enter b:");
    scanf("%d", &b);

    int sum = a + b;
    printf("The sum is: %d", sum);
    return 0;
}