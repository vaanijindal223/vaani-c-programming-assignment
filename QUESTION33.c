//Write a C Program to Find the Grade of a Student Using Switch Case
#include <stdio.h>

int main() {
    int marks;
    printf("Enter the student's marks (0-100): ");
    scanf("%d", &marks);
    if (marks >= 0 && marks <= 100) {
        int grade = marks / 10;
        switch (grade) {
            case 10:
            printf("Outstanding Perfomance Grade:A+ \n");
            case 9:
                printf("Grade: A\n");
                break;
            case 8:
                printf("Grade: B\n");
                break;
            case 7:
                printf("Grade: C\n");
                break;
            case 6:
                printf("Grade: D\n");
                break;
            default:
                printf("Grade: F (Fail)\n");
                break;
        }
    } return 0;
    }
