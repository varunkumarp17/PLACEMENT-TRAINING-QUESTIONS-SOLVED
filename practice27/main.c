#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num,i,base;

   int count = 0;
    printf("Enter the value of num\n");
    scanf("%d",&num);

    printf("Enter the base\n");
    scanf("%d",&base);



    printf("Checking Process\n");
   while(num>0)
   {

       if(num%base)
       {


           break;
           count++;
       }
    num=num/2;
     continue;


   }

    if(!count)
    {
        printf(" Divisible\n");

    }
    else
        {
        printf("Not Divisible\n");
        }
    return 0;
}
