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

     printf("Pyramid Number Increment Pattern\n");
    for(i=1;i<=n;i++)
  {
    for(j=1;j<=n-i;j++)
    {
        printf(" \t");
    }
        for(k=1;k<=2*i-1;k++){
    printf("%d\t",num++);
    //ch++;
    }
    printf("\n");
    }

     printf("Pyramid Same Alphabet Pattern\n");
    for(i=1;i<=n;i++)
  {
    for(j=1;j<=n-i;j++)
    {
        printf(" \t");
    }
        for(k=1;k<=2*i-1;k++){
    printf("%c\t",'A'+i-1);
    //ch++;
    }
    printf("\n");
    }

    printf("Pyramid Continue Repeat Alphabet Pattern\n");
    for(i=1;i<=n;i++)
  {
    for(j=1;j<=n-i;j++)
    {
        printf(" \t");
    }
        for(k=1;k<=2*i-1;k++){
    printf("%c\t",k+'A'-1);
    num++;
    }
    printf("\n");
    }

    printf("Inverted Pyramid Number Pattern\n");
    for(i=n;i>=1;i--)
  {
    for(j=1;j<=n-i;j++)
    {
        printf(" ");
    }
        for(k=1;k<=2*i-1;k++){
    printf("%d",i);
    //ch++;
    }
    printf("\n");
    }
   
    num = 15;
    int  n1 = 5;
      printf("Pyramid Number Decrement  11 12 13 14 15 7 8 9 10 4 5 6 2 3 1 Pattern\n");
    for(i=0;i<n;i++)
  {
    for(j=1;j<=2*i;j++)
    {
     //   num = num - n + i - 1;
        printf(" \t");
    }
        for(k=0;k<n1;k++){
    printf("%d\t",n+j);
    
    //ch++;
    }
    num = num - (n-i)+1;
 // num = num - (n-i);
    printf("\n");
    }


return 0;

   }
