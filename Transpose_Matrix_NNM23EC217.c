#include <stdio.h>
#include <stdlib.h> 

int main()
{

    int r,c;
    int a[10][10];
    int t[10][10];
    int i,j;
    
    printf("Enter the number of rows and columns\n");
    scanf("%d%d",&r,&c);
  
        printf("Enter the array elements\n");
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    scanf("%d",&a[i][j]);
              
             }
             printf("\n");
            }

            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    t[j][i] = a[i][j];
                }
            }

printf("The Transpose of the matrix is\n");
        for(i=0;i<c;i++)    
        {
            for(j=0;j<r;j++)
            {
                printf("%d\t",t[i][j]);
            }
            printf("\n");
        }   
return 0;
}