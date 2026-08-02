#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a;
   int sol;

   int n,i,j;
   int rem;

  // printf("Enter the count of digits in the number\n");
  // scanf("%d",&n);
 char str[20];
 char rvr[20];


    printf("Enter the length of the string\n");
     scanf("%d",&n);

     printf("Enter the string\n");
      scanf("%s",str);

    int count;
        for(i=0;i<=n;i++)
        {
                rvr[n-i-1] = str[i];
        }
        rvr[n]='\0';


        printf("The reversed string is %s\n",rvr);

        for(i=0;i<n-1;i++)
        {

            if(str[i]==rvr[i])
            {
               count++;
                continue;

            }
            else
               count =0;
                break;
        }

        if(count)
        {
            printf("Given string is Palindrome\n");
        }
        else
            printf("Given string is not a Palindrome\n");




    return 0;
}
