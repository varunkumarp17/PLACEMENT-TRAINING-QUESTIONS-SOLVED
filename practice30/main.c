#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    int n;


    printf("Enter the string length n\n");
    scanf("%d",&n);
    char str[n];
    printf("Enter the string\n");
    scanf("%s",str);
    int vc=0;
  //  int cc=0;
    int i;
   // char vowel[4]="AEIOU";
    for(i=0;i<=n;i++)
    {
        //for(int j=0;j<5;j++)
      //  {
        if(str[i]== 'a'||str[i]== 'e'||str[i]== 'i'||str[i]== 'o'||str[i]== 'u'||str[i]== 'A'||str[i]== 'E'||str[i]== 'I'||str[i]== 'O'||str[i]== 'U')
        {
            vc++;
        }

  //  }

    }
    printf("Vowels count is %d\n",vc);
    printf("Consonants count is %d\n",(n-vc));

    return 0;
}
