//write a program to calculate the area and circumference of circle given its radius
# include<stdio.h>

int main() {
    float r = 4.14;
    
    float area = 3.14 *( r * r);
    printf("The area of circle is: %d\n", area);
    
    float circumference = 2 * (3.14 * r);
    printf("The circumference of circle is: %d\n", circumference);
    return 0;
}