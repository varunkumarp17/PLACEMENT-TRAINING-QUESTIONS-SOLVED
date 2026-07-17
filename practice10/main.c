#include <stdio.h>
#include <stdlib.h>

int fact(int n)
    {
    if(n == 0)
    {
    return 1;
    }
    else
    {
     return n*fact(n-1);
    }
    }

    int main()
    {
   int n;
   printf("Enter the value of n\n");
   scanf("%d",&n);
  int factorial = fact(n);
   printf("The factorial of num is %d\n",factorial);
    return 0;
    }
