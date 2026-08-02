#include <stdlib.h>
#include <stdio.h>

int main()
{

    int n;

    printf("Enter the value of n\n");
    scanf("%d",&n);

    int a[n];
    int positive = 0;
    int negative = 0;
    int zero = 0;

    printf("Enter the Array Elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>0)
        {
        positive++;
        }
          if(a[i]<0)
        {
        negative++;
        }
        if(a[i]==0)
        {
            zero++;
        }
    }

    printf("Positive Count is %d\n",positive);
        printf("Negative Count is %d\n",negative);
            printf("Zero Count is %d\n",zero);

    return 0;
}