//Area of the Rectangle

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l,b;
    printf("Enter the value of Length and Breadth\n");
    scanf("%d%d",&l,&b);
    printf("Area of the rectangle is %d\n",l*b);
    printf("Perimeter of the rectangle is %d\n",2*(l+b));
    return 0;

}
