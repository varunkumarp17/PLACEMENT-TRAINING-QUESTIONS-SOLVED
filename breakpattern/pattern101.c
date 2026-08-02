#include<stdio.h>
#include<stdlib.h>

   int main()
   {



   int i,j,k;
   int n;
   printf("Enter the value of n\n");
   scanf("%d",&n);

    int num = 1;
    //char ch = 1;




    printf("Diamond Pattern\n");
    for(i=0;i<n;i++)
  {
    for(j=1;j<=n-i;j++)
    {
        printf(" ");
    }
        for(k=2*i-1;k>=0;k--)
        {
    printf("%d",k);
       }
  printf("\n");
    }

  


return 0;

   }
