#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,i;
   int array[10];
    int mid;

    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");

   for(i=0;i<n;i++)
   {
       scanf("%d",&array[i]);
   }

    if(n%2==0)
    {
       mid = (n+1)/2;
           printf("The value of mid values are %d and  %d\n",array[mid-1],array[mid]);

    }
    else
    {
        mid = n/2;

    printf("The value of mid is %d \n",array[mid]);
    }
    return 0;
}
