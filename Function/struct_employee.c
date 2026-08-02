#include <stdio.h>
#include <stdlib.h>

struct employee{
 int id;
 char name[20];
 char dept[20];
 int salary;

};

int main()
    {
        struct employee s1[100];
    int n;
    printf("Enter the number of employee\n");
    scanf("%d",&n);


    printf("Enter the employee details\n");

   for(int i=0;i<n;i++)
   {
    scanf("%d%s%s%d",&s1[i].id,&s1[i].name,&s1[i].dept,&s1[i].salary);

   }

   printf("The Employee Details are\n");
    for(int i=0;i<n;i++)
   {
    printf("%d  %s  %s  %d\n",s1[i].id,s1[i].name,s1[i].dept,s1[i].salary);

   }




    return 0;

}