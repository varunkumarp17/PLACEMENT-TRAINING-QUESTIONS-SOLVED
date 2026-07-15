#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int fact;
    printf("Enter the value\n");
    scanf("%d",&n);
    fact = 1;

    if(n == 0)
    {

    printf("The factorial of %d is 1",n);
    return 0;

    }
    for(int i=n;i>0;i--)
{

    fact = fact * i ;
}
    printf("The Factorial is %d\n",fact);

    return 0;
}
