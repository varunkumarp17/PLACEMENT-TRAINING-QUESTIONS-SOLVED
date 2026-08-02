#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int marks[6][5];
    int i,j;
    int *ptr = &marks;

    printf("Enter the value r and c\n");
    scanf("%d%d",&r,&c);

    printf("Enter 5 names\n");
    for(i=0;i<r;i++)
    {
        for(j=0 ; j<c;j++ )
        {
        scanf("%d",marks[i][j]);
        }
    }
    int total = 0;
    for(i=0;i<r;i++)
    {
        for(j=0 ; j<c;j++ )
        {
       total = total + a[i][j];
        }
    }

    int avg = total/30;

      for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if()
            printf("The %dx%d element is %d\n", i, j, *(*(ptr + i)+j));
        }
    }
    return 0;
}