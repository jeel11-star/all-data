#include <stdio.h>

int main()
{
    float sub1, sub2, sub3, sub4, sub5;
    float total_marks, percentage;

    printf("Enter marks for Subject 1: ");
    scanf("%f", &sub1);
    printf("Enter marks for Subject 2: ");
    scanf("%f", &sub2);
    printf("Enter marks for Subject 3: ");
    scanf("%f", &sub3);
    printf("Enter marks for Subject 4: ");
    scanf("%f", &sub4);
    printf("Enter marks for Subject 5: ");
    scanf("%f", &sub5);

    total_marks = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (total_marks / 500.0) * 100.0;

    printf("\nTotal Marks: %.2f\n", total_marks);
    printf("Percentage: %.2f%%\n", percentage);
    
    int z = 7;
    printf("z=%3.2d", z);

    return 0;
}