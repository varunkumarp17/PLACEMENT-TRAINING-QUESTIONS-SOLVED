#include <stdio.h>
#include <stdlib.h>

int main()
{



    int  dec;

    printf("Enter the Dec\n");

    scanf("%d",&dec);

    int i=0;
    int bin[10];

  while(dec>0)
   {
    bin[i] = dec%2 ;
    dec = dec/2;
    i++;
   }
 for(int j=i-1;j>=0;j--)
 {
    printf("%d",bin[j]);
 }
    return 0;
 }
