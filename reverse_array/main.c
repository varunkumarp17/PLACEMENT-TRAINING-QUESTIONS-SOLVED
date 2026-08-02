#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    int a[10];
    int rvr[10];
    int odd[10];

    int i,j,k;

    printf("Enter the number of elements n\n");
    scanf("%d",&n);


        printf("Enter the array elements\n");
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }

            for(i=0;i<n;i++)
            {
                rvr[n-i-1]=a[i];
            }



        printf("Reverse Array is \n");
        for(i=0;i<n;i++)
        {
            printf("%d\t",rvr[i]);
        }
        return 0;
        }
