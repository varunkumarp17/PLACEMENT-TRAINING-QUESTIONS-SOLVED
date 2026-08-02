#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

 int binary ;
     printf("Enter the Binary value\n");
        scanf("%d",&binary);

        int dec=0;
        int i = 0 ;
        int data = binary;
        while(binary>0)
        {

         if(binary%10)
         {
            binary = binary/10;
            dec = dec + pow(2,i);
            i++;
         }
        else
        {
            binary = binary/10;
            i++;
            continue;
        }

         //    printf("The decimal value of binary input %d is %d\n",binary,dec);

        }

         printf("The decimal value of binary input %d is %d\n",data,dec);

    return 0;
 }
