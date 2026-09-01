//Write a C Program to demonstrate Find maximum of four numbers using nested conditional operators
#include <stdio.h>
int main() {
    int a, b, c, d, max;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    max = (a > b) ?
          ((a > c) ?
           ((a > d) ? a : d) :
           ((c > d) ? c : d)) :
          ((b > c) ?
           ((b > d) ? b : d) :
           ((c > d) ? c : d));
    printf("Maximum = %d\n", max);
    return 0;
}
