#include <stdio.h>
int main()
{
    printf("helo\n");

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    char last;
    last = 26;

    for (int a = 1; a <= last; a++)
    {
        char ch = 'a';
        for (int b = 1; b <= a; b++)
        {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }

    for (int c = 1; c <= 5; c++)
    {
        for (int e = 5; e >= c; e--)
        {
            printf(" ");
        }

        for (int f = 1; f <= c; f++)
        {
            printf("%d", f);
        }
        printf("\n");
    }
    
    for (int q = 5; q >=1; q--)
    {
        for (int w = q; w>=1; w--)
        {
            printf("%d",w);
        }
        printf("\n");
    }
    
    for (int p = 1; p <=5; p++)
    {
        for (int o = 1; o <=p; o++)
        {
            printf("%d",p);
        }
        printf("\n");
        
    }
    for (int m = 5; m >=1; m--)
    {
      for (int n = m; n>=1; n--)
      {
        printf("%d",m);
      }
      printf("\n");
    }
    
    for (int z = 1; z <=5; z++)
    { if (z==1||z==3){
        printf("* * * * *");
    }
        else{
            printf("*       *");
        }
        printf("\n");
    }
    printf("\n");
    for (int f=1; f <=5; f++)
    {if (f==1){
        printf("* * * * *\n");
    }
    else if (f==2||f==3||f==4)
    {
    
        printf("    *    \n");
    }
    else
    {
        printf("* * *");
    }
    }

    
    
    
    

    return 0;
}
