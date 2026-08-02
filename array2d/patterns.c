#include <stdio.h>
#include <stdlib.h>

int main()
{

    int r,c;
    int a[10][10];
   // int rvr[10];
   // int odd[10];

    int i,j,k;
    int csum;
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
printf("The array elements are\n");
        for(i=0;i<r;i++)   
        {
            for(j=0;j<c;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }


        printf("The Lower triangle elements are\n");
            for(i=0;i<r;i++)   
            {
                for(j=0;j<c;j++)
                {
                   
                   if(i>=j)
                   {
                     printf("%d\t",a[i][j]);
                   }

               
                 }
                  printf("\n");
                }
            printf("The Upper triangle elements are\n");
            for(i=0;i<r;i++)   
            {
                for(j=0;j<c;j++)
                {
                   
                   if(i<=j)
                   {
                     printf("%d\t",a[i][j]);
                   }
                }
                printf("\n");
            }

      




return 0;
}
