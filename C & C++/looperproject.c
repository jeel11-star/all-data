#include <stdio.h>

int main()
{
    char ch;
    int numbers, firstdigit, lastdigit, sum;
    for (ch = 'a'; ch <= 'z'; ch += 4)
    {
        printf("%c ", ch);
    }
    printf("\n");

    int number;
    int count = 0;

    printf("Enter your number: ");
    scanf("%d", &number);
    if (number == 0)
    {
        count = 1;
    }
    else
    {
        if (number < 0)
        {
            number = -number;
        }
        while (number > 0)
        {
            number /= 10;
            count++;
        }
    }

    printf("%d\n", count);
    {

        int numbers, firstDigit, lastDigit, sum;

        printf("Enter an integer: ");
        scanf("%d", &numbers);

        lastDigit = numbers % 10;

        firstDigit = numbers;
        while (firstDigit >= 10)
        {
            firstDigit /= 10;
        }
        sum = firstDigit + lastDigit;
           printf("%d\n",sum);
    }

    return 0;
}
