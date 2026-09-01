//Write a C Program to demonstrate Multiply by 10 using bitwise operators

#include <stdio.h>
int main() {
    int n, result;
    printf("Enter number: ");
    scanf("%d", &n);
    result = (n << 3) + (n << 1);
    printf("%d * 10 = %d\n", n, result);
    return 0;
}
