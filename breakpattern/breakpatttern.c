#include <stdio.h>
#include <stdlib.h>

int main()
{

  int i,j,k;
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    printf("First Pattern\n");
    printf("\n");
     for(i=1;i<n;i++)
  { 
         if (i==n-1)
    {
       
       printf("break\n") ;
    }
    for(j=1;j<=n-1;j++)
     {
        printf("%d",j);
     }
    printf("\n");
    }
    printf("Second Pattern\n");
     printf("\n");
    for(i=1;i<=1;i++)
  { 
        for(j=1;j<=n;j++)
    { 
        printf("%d%dbreak\n",j,j);
    }
}
return 0;
}   
