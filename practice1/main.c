#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    int a[10];
   // int rvr[10];
   // int odd[10];

    int i,j,k;
    int csum;
    printf("Enter the number of elements n\n");
    scanf("%d",&n);

        int sum=0;

        printf("Enter the array elements\n");
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
            csum =a[0]+a[1];

            for(i=0;i<n;i++)
            {
                  //  sum = 0;

                for(j=i+1;j<n;j++)
                 {
              sum = a[i] + a[j];

                         if(sum>csum)
           {
            csum = sum;
           //ss printf("sum is %d\n", sum);
                }
            }
        }

        printf("Maximum sum is %d\n", csum);
        return 0;
        }
