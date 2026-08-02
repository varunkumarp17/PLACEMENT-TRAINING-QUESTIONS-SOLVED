#include<stdio.h>
#include<stdlib.h>

   int main()
   {    
    int i,j;
    int n,m;
    printf("Enter the value of n\n");
    scanf("%d",&n);

     printf("Hollow Square Pattern\n");
    for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
        if(i==j || j== n-i+1 )
        {
            printf("%d",j);
        }
        else
        {
            printf("  ");
        }
    }
    printf("\n");
    }
    return 0;
}
