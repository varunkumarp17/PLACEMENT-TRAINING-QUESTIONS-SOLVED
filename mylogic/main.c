#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a;
   int num;

   int n,i,j;
   int rem;
    int count;
  printf("Enter the length of the string\n");
     scanf("%d",&n);
    char str[20];
    char str1[20];

     printf("Enter the string\n");
      scanf("%s",str);

    for(i=0;i<n;i++)
    {


        count = 0;
        num = str[i];

        for(j=0;j<n;j++)
        {

      if(num==str[j])
      {
          count++;
          continue;
      }




        }



 printf("The letter %c is repeated %d times\n",num,count);
    }

    return 0;}
