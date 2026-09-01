//Write a C Program to demonstrate Demonstrate operator precedence
#include <stdio.h>
int main() {
    int a = 10, b = 5, c = 2, result;
    result = a + b * c;
    printf("a + b * c = %d\n", result);
    result = (a + b) * c;
    printf("(a + b) * c = %d\n", result);
    result = a > b && b > c;
    printf("a > b && b > c = %d\n", result);
    return 0;
}
