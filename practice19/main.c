#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,i,val;
   int array[20];
    int max;
   printf("Enter the value of n\n");
   scanf("%d",&n);

    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&array[i]);
    }
     max  = array[0];
   for(i=1;i<n;i++)
       {
    if(max < array[i])
       {
       max = array[i];
       }
       }
   printf("Maximum value of the array is %d\n",max);
   return 0;
}
