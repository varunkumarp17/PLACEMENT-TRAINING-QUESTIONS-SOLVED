#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;
  printf("Ente the value of n\n");
  scanf("%d",&n);
  int a[n];

    a[0]=0;
    a[1]=1;
 printf("%d\t",a[0]);
  printf("%d\t",a[1]);

  for(int i=2;i<=n;i++)
  {
    a[i] = a[i-2] + a[i-1];
   
    printf("%d\t",a[i]);


  }

    return 0;
}