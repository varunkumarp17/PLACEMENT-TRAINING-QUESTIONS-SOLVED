#include <stdio.h>
#include <stdlib.h>

int main()
{
int sub[5];
int marks;
float maxmarks;
float maxtotalmarks;

printf("Enter the max mark\n");
scanf("%f",&maxmarks);

maxtotalmarks = maxmarks*5;

printf("Enter the marks of the 5 subject\n");
for(int i = 0; i < 5; i++)
{
    scanf("%d",&sub[i]);
}

int totalmarks = 0  ;
for(int i = 0 ; i < 5 ; i++ )
{
totalmarks = totalmarks + sub[i];
}

float percent ;

percent = 100*(totalmarks/maxtotalmarks);

printf("The percentage is %f\n",percent);


if(0 <= percent && percent <= 34)
{
   printf("Fail\n");
}
else if(34 < percent && percent <= 49)
{
printf("lll Class\n");
}
else if(49 < percent && percent <= 59)
{
    printf("ll Class\n");
}
else if(59 < percent && percent <= 69)
{
    printf("l Class\n");
}
else if(69 < percent && percent <= 100)
{
    printf("Distinction\n");
}
else 
{
    printf("Invalid");
}
return 0;

}
