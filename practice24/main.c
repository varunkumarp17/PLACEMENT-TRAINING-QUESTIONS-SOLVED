#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a;
   int sol;
   int n;
   printf("Enter the count of digits in the number\n");
   scanf("%d",&n);

   printf("Enter the value of a\n");
   scanf("%d",&a);
    int r1;
   // int count = 1;
   int i;
 printf("After the reversing\n");
  for(i=0;i<n;i++)
   {
       r1= a%10 ;
   a = a/10;

   printf("%d",r1);


  // count=0;

   }









    return 0;
}
