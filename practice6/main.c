#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a,b,c;
 printf("Enter the values of a b and c\n");
    scanf("%d",&a);
        scanf("%d",&b);
           scanf("%d",&c);
            if(((a*b)*c) == (a*(b*c)))
            {
                printf("Multiplication holds good for Associative property\n");
            }
            else
            {
                printf("Multiplication doesn't hold good");
            }
             if(((a+b)+c) == (a+(b+c)))
            {
                printf("Addition holds good for commutative property\n");
            }
              else
            {
                printf("Addition doesn't hold good");
            }
            return 0;
            }
