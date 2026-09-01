//Write a C Program to demonstrate Find the largest of three numbers using the conditional operator
#include <stdio.h>

int main() {
    int a, b, c, largest;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("Largest = %d\n", largest);
    return 0;
}
