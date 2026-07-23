#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,i,sum;
   int array[20];
    float avg;
   printf("Enter the value of n\n");
   scanf("%d",&n);

   printf("Enter the array elements\n");
    for(i=0;i<n;i++)
   {
    scanf("%d",&array[i]);
   }


   for(i=0;i<n;i++)
    {
    sum = sum + array[i];
    }


   printf("The value of array\n");
   for(i=0;i<n;i++)
   {
        printf("{");
     printf("%d",array[i]);
      printf("}\n");

   }

    printf("The sum of the array is %d\n",sum);
    printf("The average of the array is %d\n",sum/n);
    return 0;
}
