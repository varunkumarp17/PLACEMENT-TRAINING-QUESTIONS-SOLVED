#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a,b;
 printf("Enter the values of a and b\n");
    scanf("%d",&a);
        scanf("%d",&b);
            if((a+b) == (b+a))
            {
                printf("Addition holds good for commutative property\n");
            }
            else
            {
                printf("Addition doesn't hold good")
            }
             if((a-b) == (b-a))
            {
                printf("Subtraction holds good for commutative property\n");
            }
             if((a*b) == (b*a))
            {
                printf("Multiplication holds good for commutative property\n");
            }
             if((a/b) == (b/a))
            {
                printf("Division holds good for commutative property\n");
            }
    return 0;
}
