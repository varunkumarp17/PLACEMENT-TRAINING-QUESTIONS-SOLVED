#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int a[n];

    printf("Enter the array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b[n];
    
    for(int i=0;i<n;i++)
    {
        b[i] = a[n-i-1];
    }
    
    printf("Reversed Array is\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",b[i]);
    }



    return 0;
}