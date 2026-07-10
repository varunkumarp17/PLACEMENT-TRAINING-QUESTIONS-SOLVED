// Basic pointers

#include <stdio.h>
#include <stdlib.h>

int main()
{

int a = 4;
int b =6;

int *pa = &a;
int *pb = &b;

printf("The value of a and b before swapping is %d and %d\n",a,b);

* pa = *pa + *pb;
*pb = *pa - *pb;
*pa = *pa - *pb; 

printf("The value of a and b after swapping is %d and %d\n",*pa,*pb);

printf("Addition of a and b using pointer is %d\n",*pa + *pb);

return 0;


}