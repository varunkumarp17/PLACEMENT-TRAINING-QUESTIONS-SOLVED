#include <stdio.h>
#include <stdlib.h>

int main()
{


    int a,b,choice;

    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    int i =1;

    printf("Enter the Choice 1-add 2-sub 3-mul 4-div\n");
    scanf("%d",&choice);

    switch(choice)
    {
       case 1 :
           printf("Addition of a and b is %d\n",a+b);
        break;
       case 2 :
           printf("Subtraction of a and b is %d\n",a-b);
       break;
       case 3 : printf("Multiplication of a and b is %d\n",a*b);
       break;
       case 4 : printf("Division of a and b is %d\n",a/b);
       break;
       default : printf("Idiot enter the choice given");
    break;

    }

    return 0;
}


