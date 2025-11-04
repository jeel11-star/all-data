#include <stdio.h>
void hello(int qarr[], int SIZEE)
{
    int sump = 0;

    printf("/nquestion-3/n");
    printf("\n \n Array elements in reverse order: ");
    for (int i = SIZEE - 1; i >= 0; i--)
    {
        printf("%d ", qarr[i]);
    }
    printf("\n");

        for (int i = 0; i < SIZEE; i++)
    {
        sump += qarr[i];
    }

    printf("Sum of all array elements: %d\n", sump);
}

int calculateSum(int myarr[], int sizezero)
{
    int sum = 0;
    for (int i = 0; i < sizezero; i++)
    {
        sum += myarr[i];
    }
    return sum;
}
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

    // question-1
    printf("\nWELCOME TO OUR PROGRAM\n\n");

    printf("QUESTION-1");
    printf("\nEnter 1 For Addition");
    printf("\nEnter 2 For Subtraction");
    printf("\nEnter 3 For Multiplication");
    printf("\nEnter 4 For Division");

    int choice;

    printf("\nEnter your choice :- ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        int a, b;
        printf("\nEnter First Numbers :- ");
        scanf("%d", &a);
        printf("Enter Second Numbers :- ");
        scanf("%d", &b);
        sum(a, b);
    }
    else if (choice == 2)
    {
        int a, b;
        printf("\nEnter First Numbers :- ");
        scanf("%d", &a);
        printf("Enter Second Numbers :- ");
        scanf("%d", &b);
        minus(a, b);
    }
    else if (choice == 3)
    {
        int a, b;
        printf("\nEnter First Numbers :- ");
        scanf("%d", &a);
        printf("Enter Second Numbers :- ");
        scanf("%d", &b);
        multiply(a, b);
    }
    else if (choice == 4)
    {
        int a, b;
        printf("\nEnter First Numbers :- ");
        scanf("%d", &a);
        printf("Enter Second Numbers :- ");
        scanf("%d", &b);
        divide(a, b);
    }
    else
    {
        printf("invalid input......");
    }

    // question-1 ends

    // question-2

    // end question-2

    // question-3

    // Function to print array elements in reverse and calculate their sum

    int myArray[] = {10, 20, 30, 40, 50};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    // Call the function to process the array
    hello(myArray, arraySize);

    // question-3 end

    // question-4

    printf("\n\nquestion-4");
    int l;
    int *p1 = &l;
    printf("\n\nEnter the value of a: ");
    scanf("%d", &l);
    printf("\n\nthe product of a is %d\n", *p1 * *p1 * *p1);
    //  end question-4

    // question-5

    int icons, jp, count = 11;
    printf("\n\n\nQUESTION-5\n\n");
    for (icons = 1; icons <= 5; icons++)
    {
        for (jp = 1; jp <= icons; jp++)
        {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }

    return 0;
}