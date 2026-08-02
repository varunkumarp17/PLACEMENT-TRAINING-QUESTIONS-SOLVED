#include<stdio.h>
#include<stdlib.h>

   int main()
   {    
    int i,j;
    int n,m;
    printf("Enter the value of n and m\n");
    scanf("%d%d",&n,&m);

     printf("Hollow Square Pattern\n");
    for(i=1;i<=n;i++)
  {
    for(j=1;j<=m;j++)
    {
        if(i==1 || i==n || j==1 || j==m)
        {
            printf("* ");
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
