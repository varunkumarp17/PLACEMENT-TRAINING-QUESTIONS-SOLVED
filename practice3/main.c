
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num,out;
    printf("Enter the value of num\n");
    scanf("%d",&num);
    printf("The value of num is %d\n",num);

    for(i=1;i<=10;i++)
    {
        out = num*i;
        printf("5*%d = %d\n",i,out);
    }

    return 0;
}
