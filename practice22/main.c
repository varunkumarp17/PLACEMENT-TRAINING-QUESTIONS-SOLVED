#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c;
   printf("Enter the value of a,b and c\n");
   scanf("%d%d%d",&a,&b,&c);

  if(a>b && a>c)
  {
      printf("A is the max number\n");
  }
  else if(b>a && b>c)
  {
      printf("B is the max number\n");
  }
  else
  {
      printf("C is the max number\n");
  }


   return 0;







}
