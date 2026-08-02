#include <stdio.h>
#include <stdlib.h>

int main()
{

int income;
int id;
int tax;
float taxamount;

printf("Enter the Employee Id\n");
scanf("%d",&id);
printf("Enter the Income\n");
scanf("%d",&income);


if(0 <=income && income <= 150000)
{
    tax = 0;
printf("The income tax of employee %d is %d %\n",id,tax);
   taxamount = income*(0);
printf("The tax amount of the employee %d is %f\n",id,taxamount);
}

else if(150000 < income && income <= 300000)
{
    tax =10;
printf("The income tax of employee %d is %d % \n",id,tax);
   taxamount = income*(0.1);
printf("The tax amount of the employee %d is %f\n",id,taxamount);

}
else if(300000 < income && income <= 500000)
{
    tax = 20;
printf("The income tax of employee %d is %d %\n",id,tax);
   taxamount = income*(0.2);
printf("The tax amount of the employee %d is %f\n",id,taxamount);

}
else if(income > 500000)
{
    tax =30;
           printf("The income tax of employee %d is %d %\n",id,tax);
   taxamount = income*(0.3);
printf("The tax amount of the employee %d is %f\n",id,taxamount);

}



return 0;

}
