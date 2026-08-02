#include <stdio.h>
#include <stdlib.h>

int main()
{

  int i,j,k;
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
 
        printf("Pyramid Pattern\n");
    for(i=1;i<=n;i++)
  {
    for(j=1;j<=n-i;j++)
    {
        printf(" \t");
    }
        for(k=1;k<=2*i-1;k++){
    printf("*\t");
    }
    printf("\n");
    }

    printf("Inverted Pyramid Pattern\n");
    for(i=n;i>=1;i--)
  {
    for(j=1;j<=n-i;j++)
    {
        printf(" \t");
    }
        for(k=1;k<=2*i-1;k++){
    printf("*\t");
    }
    printf("\n");
    }

    printf("Diamond Pattern\n");
    for(i=1;i<=n;i++)
  {
    for(j=1;j<=n-i;j++)
    {
        printf(" \t");
    }
        for(k=1;k<=2*i-1;k++){
    printf("*\t");
    }
    printf("\n");
    }
    printf("Diagonal Star Pattern\n");
    for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
        if(i==j || i+j==n+1)
        {
            printf("*\t");
        }
        else
        {
            printf(" \t");
        }
    }
    printf("\n");
    }

    printf("Hollow Square Pattern\n");
    for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
        if(i==1 || i==n || j==1 || j==n)
        {
            printf("*\t");
        }
        else
        {
            printf(" \t");
        }
    }
    printf("\n");
    }
   

  return 0;
}
