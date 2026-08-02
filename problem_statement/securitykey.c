#include <stdio.h>
#include <stdlib.h>

int main(){

    int i,j;
    int n;
     int a[20];

     printf("Enter the size of an array\n");
     scanf("%d",&n);

     printf("Enter the array elements\n");
     for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     }

     int dist[20];
     int distance = 0;
     for(i=0;i<n-1;i++)
     {
        dist[i] = a[i]-a[i+1];
        if(dist[i]<0)
        {
            dist[i] = (-1)*dist[i];

        }
          distance = distance + dist[i];
         printf("%d",dist[i]);
     }
        
    printf("The distance is %d\n",distance);
    
return 0;



}

