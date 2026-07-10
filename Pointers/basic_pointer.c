// Basic pointers

#include <stdio.h>
#include <stdlib.h>

int main()
{

int a=10;
int *p = &a;

printf("The value of a is %d\n",a);
printf("The value of &a is %p\n",&a);
printf("The value of p is %p\n",p);
printf("The value of *p is %d\n", *p);
printf("The value of &p is %p\n",&p);

a = 4;
int b =6;

int *pa = &a;
int *pb = &b;
 // pb = pa;

 *pb = *pa;

printf("The value of *pb is %d\n",*pb);
printf("The value of *pa is %d\n",*pa);

printf("The value of a is %d\n",a);
printf("The value of b is %d\n",b);

printf("The value of pb is %p\n", pb);
printf("The value of pa is %p\n", pa);

printf("The value of &a is %p\n",&a);
printf("The value of &b is %p\n",&b);

printf("Addition of a and b using pointer is %d\n",*pa + *pb);

return 0;


}