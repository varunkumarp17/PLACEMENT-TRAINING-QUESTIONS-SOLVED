#include <stdio.h>
#include <stdlib.h>

int main()
{
 int num;

 printf("Enter the number\n");
 scanf("%d",&num);

 while(num%2==0)
  num = num/2;
  while(num%3==0)
  num = num/3;
  while(num%5==0)
  num = num/5;
 if(num==1)
 {
    printf("The given no. is Ugly Number\n");
 }
 else
 {
    printf("Not a Ugly number\n");
 }
  

    return 0;
}