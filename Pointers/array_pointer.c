#include <stdio.h>
#include <stdlib.h>


int main()
{
  
    int a[10][10];
    int i,j;
    int r,c;
    printf("Enter the rows and columns\n\n");
    scanf("%d%d",&r,&c);
    
    printf("Enter the elements\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int (*ptr)[10];

    ptr = a;


    printf("The elements are:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("The %dx%d element is %d\n", i, j, *(*(ptr + i)+j));
        }
    }
 
    return 0;
}