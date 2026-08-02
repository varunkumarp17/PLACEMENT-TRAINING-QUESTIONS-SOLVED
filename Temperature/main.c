#include <stdio.h>
#include <stdlib.h>

int main()
{
   float C,F;

   printf("Enter the Celsius/Degree to Convert it to Farenheit\n");
   scanf("%f",&C);

   F = (C*9/5)+32;
   printf("Farenheit value is %f\n",F);


   return 0;

}
