#include<stdio.h>
#include <stdlib.h>



int main()
{
 
    int a=0;
    int b= 1 ;
     int result;
     int n;
     int c;
    printf("Enter the value of n\n");
    scanf("%d",&n);

     for(int i=0;i<n;i++)
     {
        c = a + b;
        printf("%d\n",c);
        a = b;
        b = c; 
     }


return 0;

}