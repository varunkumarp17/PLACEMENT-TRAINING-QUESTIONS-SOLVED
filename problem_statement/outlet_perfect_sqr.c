#include <stdio.h>
#include <stdlib.h>

int main()
{
 int num;

 printf("Enter the number\n");
 scanf("%d",&num);
 int a[num];

 printf("Enter the array elements\n");
 for(int i=0;i<num;i++)
 {
    scanf("%d",&a[i]);
 }
int count=0;

for(int i = 0; i < num; i++ )
{
    for(int j=0;j*j<=a[i];j++)
    {
    if((j*j)==a[i])
    {
     count++;
     break;
    }
    }
}
    printf("The outlet is %d\n",count);


    return 0;
}