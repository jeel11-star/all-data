#include <stdio.h>

int sum(int a, int b)
{
    int c;
    c = a + b;
    printf("\n\tAddition is %d\n", c);
}
int minus(int a, int b)
{
    int c;
    c = a - b;
    printf("\n\tSubtraction is %d\n", c);
}
int multiply(int a, int b)
{
    int c;
    c = a * b;
    printf("\n\tMultiplication is %d\n", c);
}
int divide(int a, int b)
{
    int c;
    c = a / b;
    printf("\n\tDivision is %d\n", c);
}

    int main()
    {
        printf("\nWELCOME TO OUR PROGRAM\n");

        while (1<2)
        {
            printf("\nEnter 1 For Addition");
            printf("\nEnter 2 For Subtraction");
            printf("\nEnter 3 For Multiplication");
            printf("\nEnter 4 For Division");
            printf("\nEnter 5 For EXIT\n");
            int choice;

            printf("\nEnter your choice :- ");
            scanf("%d", &choice);
            if (choice == 1)
            {
                int a, b;
                    printf("\nEnter First Numbers :- ");
                    scanf("%d",&a);
                    printf("Enter Second Numbers :- ");
                    scanf("%d",&b);
                    sum(a,b);
            }
            else if (choice == 2)
            {
                int a, b;
                    printf("\nEnter First Numbers :- ");
                    scanf("%d",&a);
                    printf("Enter Second Numbers :- ");
                    scanf("%d",&b);
                    minus(a,b);
            }
            else if (choice == 3)
            {
                int a, b;
                    printf("\nEnter First Numbers :- ");
                    scanf("%d",&a);
                    printf("Enter Second Numbers :- ");
                    scanf("%d",&b);
                    multiply(a,b);
            }
            else if (choice == 4)
            {
                int a, b;
                    printf("\nEnter First Numbers :- ");
                    scanf("%d",&a);
                    printf("Enter Second Numbers :- ");
                    scanf("%d",&b);
                    divide(a,b);
            }
            else if (choice==5)
            {
                printf("\n\tExiting.........");
                break;
            }
            else
            {
                printf("invalid input......");
            }
        }
        return 0;
    }