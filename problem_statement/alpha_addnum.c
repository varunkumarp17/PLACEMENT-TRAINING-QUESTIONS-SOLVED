#include <stdio.h>
#include <stdlib.h>

int main()
{
int num;
char in;

printf("Enter the letter and the num\n");
scanf("%c %d",&in,&num);

printf("The Key is %c\n",num+in);


return 0;

}