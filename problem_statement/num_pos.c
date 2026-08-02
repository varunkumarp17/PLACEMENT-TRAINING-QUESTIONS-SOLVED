#include <stdio.h>
#include <stdlib.h>


int check(int a[], int target, int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==target)
        {
           return 1;
        }
    }
    return -1;
}


int main()
{
  int out;
    int i,j,k;
        int n;
  
    printf("Enter the value of n\n");
    scanf("%d",&n);
 
    int a[n];

    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    int target;

    printf("Enter the Target number\n");
    scanf("%d",&target);

    out = check(a,target,n);

    


    printf("The value of out is %d\n",out);

    
    return 0;

}