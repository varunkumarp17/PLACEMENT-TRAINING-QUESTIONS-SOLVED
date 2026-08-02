
#include <stdio.h>
#include <stdlib.h>

struct emp{
    int empno;
    char empname[15];
    char empjob[15];
    float empsalary;
    int deptno;

};
int main(){
    struct emp e[15];
    int i,check=0,search;
    printf("enter the Emplyees details\n");
    for(i=0;i<10;i++)
    {
        printf("employee %d details:\n",i+1);
        printf("Employee no: ");
        scanf("%d",&e[i].empno);
        printf("Name: ");
        scanf("%s",e[i].empname);
        printf("Job: ");
        scanf("%s",e[i].empjob);
        printf("Salary: ");
        scanf("%f",&e[i].empsalary);
        printf("Department Number: ");
        scanf("%d",&e[i].deptno);
    }
    printf("\nEnter the employee number to serach");
    scanf("%d",&search);

    for(i=0;i<10;i++)
    {
        if(search==e[i].empno)
        {
            check=1;

            printf("Employee Found\n");
            printf("Employee Number : %d\n",e[i].empno);
            printf("Name            : %s\n",e[i].empname);
            printf("Job             : %s\n",e[i].empjob);
            printf("Salary          : %.2f\n",e[i].empsalary);
            printf("Department No   : %d\n",e[i].deptno);

            break;
        }
    }
    if(check==0)
        {
            printf("No data found");
        }
    return 0;

}
