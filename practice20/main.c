#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,i,val;
   int max2;
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
       max2 = max;
       max = array[i];
       }
    else
        if(( max2 < array[i]) && (max != array[i]))
    {
        max2 = array[i];
    }       }
    printf("First Maximum value of the array is %d\n",max);
    printf("Second Maximum value of the array is %d\n",max2);

   return 0;
}
