#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int a[10];
    int i,j;
    int count = 0;
    int n = 0;

    printf("Enter the number\n");
    scanf("%d",&num);
    printf("The number is %d\n",num);
   
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            a[n] = i;
            count++;
            n++;
        }
    }
    printf("Count value is %d\n",count);

    int sum = 0;
    
    for(i=0;i<count;i++)
    {   
            sum = sum + a[i];
    }
   printf("The sum is %d\n",sum);
    if(sum==num){
        printf("The given no. is Perfect no.\n");
    }
    else
    {
        printf("Not a Perfect number\n");
    }
    return 0;
}