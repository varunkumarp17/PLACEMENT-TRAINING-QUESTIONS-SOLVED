#include <stdio.h>
#include <stdlib.h>

int main()
{
 int num;

 printf("Enter the number\n");
 scanf("%d",&num);

 int numsqr = num*num;

 int a[10];
 int i=0;
 int sum = 0;
 while (numsqr>0)
 {
    sum = sum +  numsqr%10;
    numsqr /= 10;
    i++;
 }
 
 if(sum == num)
 {
    printf("The given no. is Neon Number\n");
 }
 else
 {
    printf("Not a Neon number\n");
 }
  

    return 0;
}