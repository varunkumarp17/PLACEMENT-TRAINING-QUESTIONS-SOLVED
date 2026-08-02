#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    int n1, n2;
    int count1, count2;
    int min, max;


    printf("Enter the value of num1 and num2 (num1 < num2)\n");
    scanf("%d%d", &n1, &n2);

    for(i = n1; i < n2; i++)
    {
        count1 = 0;
        for(j = 2 ; j < i; j++)
        {
            if(i % j == 0)
            {
                count1++;
                break;
            }
        }
        if(count1 == 0)
        {
        min = i;
        break;
        }
    }

    printf("Min prime number is %d\n", min);

    for(i = n2; i > n1; i--)
    {
        count2 = 0;
        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                count2++;
                break;
            }
        }

        if(count2 == 0)
        {
            max = i;
            break;
        }
    }

    printf("Max prime number is %d\n", max);
     int otp;
    otp = abs(max + min);

    printf("The One Time Password is %d\n", otp);

    return 0;
}