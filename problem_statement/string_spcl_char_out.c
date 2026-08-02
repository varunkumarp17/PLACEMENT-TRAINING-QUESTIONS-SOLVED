#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
int count=0;

char string[100];
 printf("Enter the string input \n");
 scanf("%s",string);

 for(int i=0;string[i]!='\0';i++)
 {
    if((string[i]>='A' && string[i]<='Z')||(string[i]>='a' && string[i]<='z')||(string[i]>='0' && string[i]<='9'))
    {
     continue;
    }
    else
    {
      count++;
    }
 }




printf("The Secret value is %d\n",count);
    return 0;

}
