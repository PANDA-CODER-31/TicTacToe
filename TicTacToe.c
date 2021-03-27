#include<stdio.h>

int main()
{
    int x=9,i,r,c;
    char arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
        arr[i][j]='*';
        }
    }
    while(x--)
    {
        printf("enter the %d row and column\n",9-x);
        scanf("%d %d",&r,&c);
       r--;
       c--;
        if(x%2==1)
        {
            arr[r][c]='X';
            for(int i=0;i<3;i++)
           {
               for(int j=0;j<3;j++)
                {
                  printf("%c",arr[i][j]);
                }
                printf("\n");
           }

           if((arr[0][0]=='X' && arr[0][1]=='X' && arr[0][2]=='X') || (arr[1][0]=='X' && arr[1][1]=='X' && arr[1][2]=='X') || (arr[2][0]=='X' && arr[2][1]=='X' && arr[2][2]=='X') || (arr[0][0]=='X' && arr[1][0]=='X' && arr[2][0]=='X') || (arr[0][1]=='X' && arr[1][1]=='X' && arr[2][1]=='X') || (arr[0][2]=='X' && arr[1][2]=='X' && arr[2][2]=='X') || (arr[0][0]=='X' && arr[1][1]=='X' && arr[2][2]=='X') || (arr[0][2]=='X' && arr[1][1]=='X' && arr[2][0]=='X' ) )
             {
                 printf(" 1 st player win the game ");
                 break;
             }
            
           
        }
        else
         {
            arr[r][c]='O';
            for(int i=0;i<3;i++)
           {
               for(int j=0;j<3;j++)
                {
                 printf("%c ",arr[i][j]); 
                }
                printf("\n");
           }
           if((arr[0][0]=='O' && arr[0][1]=='O' && arr[0][2]=='O') || (arr[1][0]=='O' && arr[1][1]=='O' && arr[1][2]=='O') || (arr[2][0]=='O' && arr[2][1]=='O' && arr[2][2]=='O') || (arr[0][0]=='O' && arr[1][0]=='O' && arr[2][0]=='O') || (arr[0][1]=='O' && arr[1][1]=='O' && arr[2][1]=='O') || (arr[0][2]=='O' && arr[1][2]=='O' && arr[2][2]=='O') || (arr[0][0]=='O' && arr[1][1]=='O' && arr[2][2]=='O') || (arr[0][2]=='O' && arr[1][1]=='O' && arr[2][0]=='O' )  )
             {
                 printf(" 2 nd player win the game ");
                break;
                 
             }
             
        }
       
    }
       printf("your match has been finished");
        return 0;
}