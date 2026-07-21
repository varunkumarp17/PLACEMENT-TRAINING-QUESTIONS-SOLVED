#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,count=0;
    int start , end ;

    printf("Enter the start and end value\n");
    scanf("%d%d",&start,&end);

    for(j=start;j<=end;j++)
        {
            count = 0;
     //   printf("%d\n",j);
        for(i=2;i<j;i++)
        {
            if((j%i==0))
            {
                count++;
                break;
            }

        }
        if(count == 0)
        {
        printf("%d is a prime number\n",j);
        }

        }


return 0;


        }
