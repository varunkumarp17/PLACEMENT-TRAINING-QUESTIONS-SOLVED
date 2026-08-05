
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int st , end;
    int i;

printf("Enter the Range to find the leap years\n");
scanf("%d%d",&st,&end);

printf("Leap Years in the given range are:\t");
for(i = st ; i <= end ; i++)
{
if((i % 4 == 0 ) && (i % 100 != 0) || (i % 400 == 0))
{
printf("%d\t" ,i);
}


}
return 0;

}
