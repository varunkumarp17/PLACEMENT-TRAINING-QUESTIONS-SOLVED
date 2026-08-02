#include <stdio.h>
#include <stdlib.h>


/*
 void func(int n)
 {
     printf("Print a number\n");
     scanf("%d",&n);
     printf("Entered number is %d\n",n);
 }
     */

 
int add(int a,int b)
{
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    return a+b;
}

int mul(int a,int b)
{
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    return a*b;
}

int sub(int a,int b)
{
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    return a-b;
}




int main()
{
 int i;
   int a,b;
    int sum;
 // func(i);
    int division;
    int mul;
    int sub;
  sum = add(a,b);

        printf("Sum of two number is %d\n",sum);


    return 0;
} 