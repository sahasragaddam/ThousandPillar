//Write a C Program to Calculate grading using the conditional operator
#include <stdio.h>
int main() {
    int marks;
    char *grade;
    printf("Enter marks: ");
    scanf("%d", &marks);
    grade = (marks >= 90) ? "A+" :
            (marks >= 80) ? "A" :
            (marks >= 70) ? "B" :
            (marks >= 60) ? "C" :
            (marks >= 50) ? "D" : "F";
    printf("Grade = %s\n", grade);
    return 0;
}
