#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,a1,b1;
   printf("Enter the value of a and b\n");
   scanf("%d%d",&a,&b);
    a1= a;
    b1 =b ;

   a1 = a1^b1;
   b1 = a1^b1;
   a1 = a1^b1;
   printf("Swap using Exor\n");
   printf("The value of a is %d and b is %d  \n",a1,b1);


    a = a*b;
    b = a/b;
    a = a/b;
   printf("Swap using Multiplication\n");
   printf("The value of a is %d and b is %d  \n",a,b);



   return 0;







}
