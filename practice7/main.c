#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int sum;
    printf("Enter the value\n");
    scanf("%d",&n);
    sum =0;
    for(int i=1;i<n+1;i++)
{
    sum = sum + i ;
}
    printf("The total sum is %d\n",sum);

    return 0;
}
