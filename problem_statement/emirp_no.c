#include <stdio.h>
#include <stdlib.h>

int primecheck(int n)
{
    int count =0;
 if(n<2)
 return 0;

 for(int i = 1; i <= n ; i++)
 {
    if(n%i == 0)
    count++;
   
 }

return count;
}

int reversenum(int n)
{

int reverse;
while(n>0)
{
reverse = reverse*10 + n % 10 ;
n =  n/10;
}
return reverse;
}



int main()
{
 int num;
 int rvrnum;


 printf("Enter the number\n");
 scanf("%d",&num);

 int check = primecheck(num);
 if(check!=2)
 {
    printf("The given number is not Emirp\n");
    exit(0);
 }
 
  rvrnum = reversenum(num);

  check = 0;

  check = primecheck(rvrnum);

  if(check!=2)
  {
    printf("The given number is not Emirp\n");
    exit(0);
  }
 else
 {
    printf("The given number is Emirp\n");
 }




 return 0;


}