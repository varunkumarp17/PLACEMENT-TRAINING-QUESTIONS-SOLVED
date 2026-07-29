#include <stdio.h>
#include <stdlib.h>

int main()
{

    char data;
    int type;
        printf("Enter the letter\n");
    scanf("%c", &data);
    printf("Using Format specifier\n");
    printf("%The value is %d\n",data);

   printf("Using Assignment\n");
    int val = data ;
    printf("The value of %c is %d\n",data,val);

    printf("Using TypeCasting\n");
   type = (int)data;
     printf("The value of %c is %d\n",data,type);

    return 0;
}
