#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{


    int a,b,choice;
	int P,R,T;
	int SI,CI;
    printf("Enter the value of P , R and T\n");
    scanf("%d%d%d",&P,&R,&T);
    int i =1;
    float in;
    printf("Enter the Choice 1 - SIMPLE INTEREST  2 - COMPOUND INTEREST 3 - BOTH\n");
    scanf("%d",&choice);

    switch(choice)
    {
       case 1 : SI = ((P*R*T)/100);
           printf("The value of Simple Interest is %d\n",SI);
        break;
       case 2 : in  = pow((1+(R/100)),T);
                  a = P*in ;
                   CI = a - P;
           printf("The value of Compound Interest is %d\n",CI);
       break;
       case 3 : SI = ((P*R*T)/100);
                //s   in = ((1+R/100));
                  in  = pow((1+(R/100)),T);
                  a = P*in ;
                   CI = a - P;
	   printf("The value of Simple Interest and Compound Interest are %d and %d respectively\n",SI,CI);
       break;
       default : printf("Idiot enter the proper choice\n");
		break;

    }

    return 0;
}


