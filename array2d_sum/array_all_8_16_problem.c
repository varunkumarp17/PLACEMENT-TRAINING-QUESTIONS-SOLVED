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
    int sum = 0;
    int dia_sum = 0;
    int upper_sum = 0;
    int lower_sum = 0;


        printf("Enter the array elements\n");
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    scanf("%d",&a[i][j]);
             }
             printf("\n");
            }
    printf("The elements are\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                sum += a[i][j];
                printf("%d\t",a[i][j]);
            }    
           printf("\n");
        }

       // printf("The  diagonal elements are\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(i == j)
                {
                    dia_sum += a[i][j];
                   // printf("%d\t",a[i][j]);
                }
                else
                {
                    //printf("\t");
                }
            }

           // printf("\n");
        }


        // printf("The upper triangle elements are\n");
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {

                   if(i<=j)
                   {
                     upper_sum += a[i][j];
                   }
                }
              //  printf("\n");
            }


            // printf("The lower triangle elements are\n");
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {

                   if(i>=j)
                   {
                    
                    lower_sum += a[i][j];
                   }
              //  printf("\n");
            }
            }
            printf("The sum of all elements is: %d\n", sum);
            printf("The sum of diagonal elements is: %d\n", dia_sum);
            printf("The sum of lower triangle elements is: %d\n", lower_sum);
            printf("The sum of upper triangle elements is: %d\n", upper_sum);

return 0;

}
