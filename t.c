// Write a C Program to demonstrate Divide an integer by 8 using right shift
#include <stdio.h>
int main() {
    int n, result;
    printf("Enter an integer: ");
    scanf("%d", &n);
    result = n >> 3;
    printf("%d / 8 = %d\n", n, result);
    return 0;
}
