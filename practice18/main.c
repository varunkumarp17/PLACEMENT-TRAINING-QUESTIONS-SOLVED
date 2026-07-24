#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,i,val;
   int array[20];
   int count = 0;
   printf("Enter the value of n\n");
   scanf("%d",&n);

    printf("Enter the value\n");
    scanf("%d",&val);

    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&array[i]);
    }



    printf("Checking if the value is present in the array\n");
   for(i=0;i<n;i++)
   {
       if(array[i]==val)
       {
            count = 1;
            break;

       }
   }
    if(count)
    {
        printf("The value %d is present in the array\n",array[i]);

    }
    else
        {
        printf("The element is not present\n");
        }
    return 0;
}
