#include <stdio.h>
#include <stdlib.h>

int main()
{

int units;
int price;


printf("Enter the units\n");
scanf("%d",&units);


if(0<=units && units <= 200)
{
printf("The price is %d\n",units);
}
else if(201 <= units && units <= 400)
{
    printf("The price is %d\n",(2*units));
}
else if(units > 400)
{
    printf("The price is %d\n",(5*units));
}
else
{
            printf("Idiot\n");
}



return 0;

}
