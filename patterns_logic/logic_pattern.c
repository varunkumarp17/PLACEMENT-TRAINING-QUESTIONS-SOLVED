#include<stdio.h>
#include<stdlib.h>   
   
   int main()
   {
   
   
   
   int i,j,k;
   int n;
   printf("Enter the value of n\n");
   scanf("%d",&n);
 /**/  
   printf("The pattern is\n");
     for(i=1;i<=n;i++)
  { 
       
    for(j=1;j<=n;j++)
     {
          if (j==3)
    {
       printf("break") ;
    }
       else{
        printf("%d",j);
       } 
     }
    printf("\n");
    }

    
      printf("The Lower Alpha elements are\n");
            for(i=0;i<n;i++)   
            {
                for(j=0;j<n;j++)
                {
                   if(i>=j)
                   {
                     printf("%c",'A'+ j);
                   }

               }
            printf("\n");
            }

                         
 
    printf("Pyramid Number Pattern\n");
    for(i=1;i<=n;i++)
  {
    for(j=1;j<=n-i;j++)
    {
        printf(" ");
    }
        for(k=1;k<=2*i-1;k++){
    printf("%d",i);
    }
    printf("\n");
    }

         printf("Pyramid Increment Number Pattern\n");
    for(i=1;i<=n;i++)
  {
    for(j=1;j<=n-i;j++)
    {
        printf(" ");
    }
        for(k=1;k<=2*i-1;k++){
    printf("%d",k);
    }
    printf("\n");
    }
    
    int num=1;
    for(i=1;i<n;i++)
  {
    for(j=1;j<=n-i;j++)
    {
        printf(" \t");
    }
        for(k=1;k<=2*i-1;k++)
        {
        printf("%d\t",num++);
         
        }

    printf("\n");
    }



return 0;
   
   }