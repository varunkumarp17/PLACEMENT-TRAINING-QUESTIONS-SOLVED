#include<stdio.h>
#include <stdlib.h>

int sum(int n)
{
    if(n!=0)
    {
        return n+sum(n-1);
    }
    else
    return 0;
}

int main()
{
 
    int i ;
     int result;
    printf("Enter the value of n\n");
    int n;
    scanf("%d",&n);

     result = sum(n);

     printf("The sum of number is %d\n",result);

return 0;

}