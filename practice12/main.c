#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int j  = 0 ;

    int array[10];
    printf("Enter the number\n");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if((num%i)==0)
        {
            printf("The factor of %d is %d\n",num,i);
            array[j] = i ;
          //   printf("%d",array[j]);
        }
    }

return 0;


}
