#include <stdio.h>

int main()
{
    int marks;
    char grade;

    printf("Enter your marks: ");
    scanf("%d", &marks);
    if (marks >= 100)
    {
        printf("in valid input\n");
    }
    else if (marks >= 90)
    {
        grade = 'A';
        printf("your grade is A");
    }
    else if (marks >= 80)
    {
        grade = 'B';
        printf("your grade is B\n");
    }
    else if (marks >= 70)
    {
        grade = 'C';
        printf("your grade is C\n");
    }
    else if (marks >= 60)
    {
        grade = 'D';
        printf("your grade is D\n");
    }
    else if (marks >= 35)
    {
        grade = 'E';
        printf("your grade is E\n");
    }
    else if (marks <= 35)
    {
        grade = 'F';
        printf("your grade is F\n");
    }

    else
    {
        printf("invaild input");
    };

    switch (grade)
    {
    case 'A':
        printf("Excellent\n");
        break;
    case 'B':
        printf("Well done\n");
        break;
    case 'C':
        printf("Good job\n");
        break;
    case 'D':
        printf("you passed\n");
        break;
    case 'E':
        printf("you are just passed");
        break;
    case 'F':
        printf("you are failed");
        break;

    default:
        printf("invalid input\n");
    }

    if (marks >= 35)
    {
        printf("\nyou are eligible for the next level");
    }
    else
    {
        printf("\nyou are not eligible for the next level");
    }
    return 0;
}