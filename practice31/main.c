#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a;
   int sol;

   int n;
   int rem;

  // printf("Enter the count of digits in the number\n");
  // scanf("%d",&n);
   int array1,array2;
   printf("Enter the value of a\n");
      scanf("%d",&a);
       sol = a;
    int r1=0;
   // int count = 1;
   int i;
        printf("After the reversing\n");
  while(a>0)
      {
       rem= a%10 ;
       r1 = r1*10 + rem ;
       a = a/10;


   }
   printf("Reverse answer is %d\n",r1);
    if(sol==r1)
    {
        printf("%d is a palindrome\n",sol);
    }
    else
        {
        printf("%d is not a palindrome\n",sol);
    }








    return 0;
}
