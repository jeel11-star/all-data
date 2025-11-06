#include <stdio.h>
int main()
{

    char str[90], *pt;
    int i = 0;
    printf("Enter Any string:  ");
    scanf("%s",str);
    pt = str;
    while (*pt != '\0')
    {
        i++;
        pt++;
    }
    printf("Length of String : %d", i);



    int i,j;





    int arr[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter number for row %d col %d :" ,i+1,j+1);
            scanf("%d",&arr[i][j]);

        }
        
    }

     for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("|%d|",arr[i][j]);
        }
        printf("\n");
    }








    return 0;
}