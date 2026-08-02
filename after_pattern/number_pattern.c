#include<stdio.h>
#include<stdlib.h>

   int main()
   {    
    int i,j,k;

    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Pattern is\n");

    for(i=1;i<n;i++)
  {
    if(i==2)
     {
    for( j = 1 ; j <= 3; j++)
    {
    printf("%d",i+1);
    }
        for(k=1;k<=4;k++)
        {
        printf("%d",i);
         }
         printf("\n");
        }

         else
          {
      for( j = 1; j <= 3; j++)
       {
       printf("%d",i);
       }
        for(k=1;k<=4;k++)
        {
        printf("%d",i+1);
        }
        printf("\n");
       }
        }
    
return 0;

    }