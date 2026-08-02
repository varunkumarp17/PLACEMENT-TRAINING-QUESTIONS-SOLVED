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

           
            printf("Enter the rotate shift value\n");
            scanf("%d",&k);
            for(i=0;i<n;i++)
            {
                int ele = a[0];
                for(i=0;i<n-1;i++)
                 {
               a[i]=a[i+1];
            }
            a[n-1]=ele;
        }

        printf("Reverse Array is \n");
        for(i=0;i<n;i++)
        {
            printf("%d\t",a[i]);
        }
        return 0;
        }
