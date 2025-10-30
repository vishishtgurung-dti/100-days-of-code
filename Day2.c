//write a program to calculate perimeter and area of a rectangle given its length and breath
# include<stdio.h>

int main() {
    int length = 4;
    int breadth = 5;

    int perimeter = 2*(length * breadth);
    int area = length * breadth;
    printf("The perimeter of rectangle is: %d\n", perimeter);
    printf("The area of rectangle is: %d", area);
    return 0;
}