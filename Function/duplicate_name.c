#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
     char name[5][20];
    int i,j;
    int found = 0;
   
    printf("Enter 5 names\n");

    for(i=0;i<5;i++)
    {
        scanf("%s",name[i]);
    }
     printf("Duplicate names are:\n");
        for(i =0 ;i < 5 ;i++)
        {
        for(j = i+1 ; j<5 ; j++)
        {
        if(strcmp(name[i],name[j])==0)
        {
        printf("%s\n",name[i]);
        found = 1;
        break;
        }
        }
        }

        if(found == 0)
        {
        printf("No duplicates found:\n");
        }



    return 0;
}