#include <stdio.h>
#include <stdlib.h>

int swap(int a,int b)
{
a = a+b;
b = a-b;
a = a-b;
printf("Value of num1 and num2 after swapping is %d and %d respectively\n",a,b);
}

int main()
{
 
    int num1,num2;
  
    printf("Enter the numbers num1 and num2\n");
    scanf("%d%d",&num1,&num2);
 
    printf("Value of num1 and num2 before swapping is %d and %d respectively\n",num1,num2);

    swap(num1,num2);

    return 0;

}