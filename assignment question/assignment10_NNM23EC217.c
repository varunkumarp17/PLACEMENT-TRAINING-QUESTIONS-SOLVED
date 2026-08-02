#include <stdio.h>
#include <stdlib.h>

int sumofsquares(int n)
{
    if(n==1)
    {
        return 1;
    }
    return (n*n)+sumofsquares(n-1);
}

int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int result = sumofsquares(n);
    printf("Sum = %d\n",result);
    return 0;
}