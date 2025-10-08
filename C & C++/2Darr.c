#include <stdio.h>
int main(){
    int i,j;
    int row,col;
    printf("Enter number of row: ");
    scanf("%d",&row);
    printf("Enter number of col: ");
    scanf("%d",&col);

    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter number for row %d col %d :" ,i+1,j+1);
            scanf("%d",&arr[i][j]);

        }
        
    }

     for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("|%d|",arr[i][j]);
        }
        printf("\n");
    }


while (1<2)
{
    


    int ur,uc,choice;


    printf("1. for update\n");
    printf("2. for exit\n");
    scanf("%d",&choice);
    if (choice==1)
    {    
    printf("Enter Element for Update Row:- ");
    scanf("%d",&ur-1);
      printf("Enter Element for Update column:- ");
    scanf("%d",&uc-1);
    printf("enter the value for that element:- ");
    scanf("%d",&arr[ur][uc]);
   
     for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("|%d|", arr[i][j]);
        }
        printf("\n");
    }

    
    }
    else if(choice==2){
        printf("exiting.....");
        break;
    }
    else{
        printf("invalid output");
    }    
} 
    return 0;
}