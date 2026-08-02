#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    int a[n];
    printf("Enter the Array Elements\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int max = a[0];   
    int min = a[0];

    for(int i = 1; i < n; i++)  
    {
        if(a[i] > max)
            max = a[i];   

        if(a[i] < min)
            min = a[i];  
    }

    printf("Max value in the array is %d\n", max);
    printf("Min value in the array is %d\n", min);

    return 0;
}