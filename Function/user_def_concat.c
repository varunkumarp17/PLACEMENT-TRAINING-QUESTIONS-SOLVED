#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int concat(char a[],char b[],char out[],int num1size,int num2size)
{
for(int i =0 ; i <num1size ; i++)
{
out[i] = a[i];
}

 int i  = 0;
for(int j = num1size ; j < num1size + num2size ; j++)
{

    out[j] = b[j-num1size];
    i++;
}
out[num1size+num2size] = '\0';
printf("Concat string is\n");
printf("%s\n",out);

}

int main()
{
 int i,j,k;

 int num1size,num2size;


 char a[30];
 char b[30];
 char out[30];
 printf("Enter the string a\n");
    scanf("%s",a);
  num1size = strlen(a);

 printf("Enter the string b\n");
    scanf("%s",&b);
  num2size = strlen(b);

  concat(a,b,out,num1size,num2size);



    return 0;
}
