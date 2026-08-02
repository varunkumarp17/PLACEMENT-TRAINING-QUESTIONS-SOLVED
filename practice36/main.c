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
   int a1[10];
   int a2[10];


    printf("Enter the string\n");
      scanf("%s",str);

   a1[0] = str[0];
   a2[0] = 1;


    a1[0] = 1;
    for(i=0;i<n;i++)
    {

         for(j=0;j<n;j++)
        {

          if(str[i]==a1[j])
        {
            a2[j]++;
        }
    }
     a1[j] = str[i];
     a2[j] = 1;

    printf("The letter %c is repeated %d times\n",str[i],a1[j]);


    }

 //printf("The letter %c is repeated %d times\n",str[i],a1[i]);


    return 0;
}
