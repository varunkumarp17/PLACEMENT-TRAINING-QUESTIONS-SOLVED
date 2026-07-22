#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,i;
   int array[20];

   printf("Enter the value of n\n");
   scanf("%d",&n);

   printf("Enter the array elements\n");
    for(i=0;i<n;i++)
   {
    scanf("%d",&array[i]);
   }


   printf("The value of array\n");
   for(i=0;i<n;i++)
   {
        printf("{");
     printf("%d",array[i]);
      printf("}\n");

   }


    printf("Hello world!\n");
    return 0;
}
