#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    int a[10];
    int even[10];
    int odd[10];

    int i,j,k;

    printf("Enter the number of elements n\n");
    scanf("%d",&n);


        printf("Enter the array elements\n");
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }

    for(i=0;i<n;i++)
    {

        for(j=0;j<n;j++)
        {
        
                if(a[j]%2==0)
                {
                    even[j]=a[j];
                }
                if(a[i]%2!=0)
                {
                    odd[i]=a[j];
                
               }
        }
       
    
        

            printf("Even values are \n");
        for(i=0;i<n;i++)
             {
                printf("%d",even[i]);
             }


printf("odd values are \n");
for(i=0;i<n;i++)
{
    printf("%d",odd[i]);
}
    return 0;
}
