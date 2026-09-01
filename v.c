//Write a C Program to demonstrate  Evaluate a complex expression
#include <stdio.h>
int main() {
    int a = 10, b = 5, c = 2, d = 3;
    int result;
    result = a + b * c > d && a - b != c || b % c == 1;
    printf("Result = %d\n", result);
    return 0;
}
