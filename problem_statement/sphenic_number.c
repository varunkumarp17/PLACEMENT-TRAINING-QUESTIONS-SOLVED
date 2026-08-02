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
   // printf("%d\n",num);
   
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            a[n] = i;
            count++;
            n++;
        }
    }
    printf("Count value is %d\n",count);

    if(count!=8)
    {
        printf("Not a Sphenic no.\n");
        return 0;
    }

    int m = 0;
    int prime[3];

    for(i=0;i<count;i++)
    {
        if(a[i]==1) continue; 

        int isPrime = 1;
        for(j=2;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
                isPrime = 0;
                break;
            }
        }

        if(isPrime)
        {
            prime[m] = a[i];
            m++;
        }
    }

    if((prime[0]*prime[1]*prime[2])==num)
    {
        printf("The given no. is a Sphenic number\n");
    }
    else
    {
        printf("Not a Sphenic no.\n");
    }

    return 0;
}