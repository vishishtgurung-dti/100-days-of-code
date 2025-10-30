#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, r1, r2;

    printf("Enter values of a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Not a quadratic equation.\n");
    } 
    else {
        d = b * b - 4 * a * c;

        if (d > 0) {
            r1 = (-b + sqrt(d)) / (2 * a);
            r2 = (-b - sqrt(d)) / (2 * a);
            printf("Roots are real and different.\n");
            printf("Root1 = %.2f, Root2 = %.2f\n", r1, r2);
        }
        else if (d == 0) {
            r1 = r2 = -b / (2 * a);
            printf("Roots are real and equal.\n");
            printf("Root1 = Root2 = %.2f\n", r1);
        }
        else {
            printf("Roots are imaginary.\n");
            printf("No real roots exist.\n");
        }
    }

    return 0;
}
