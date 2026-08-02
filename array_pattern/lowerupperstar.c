#include <stdio.h>
#include <stdlib.h>

int main()
{

  int i,j;
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Lower Pattern is\n")      ;
  for(i=0;i<n;i++)
  {
    for(j=0;j<=i;j++)
    {
      printf("*\t");
    }
    printf("\n");
  }
  
  printf("Upper Pattern is\n")      ;
     for(i=n;i>=0;i--)
  {
    for(j=0;j<=i;j++)
    {
      printf("*\t");
    }
    printf("\n");
  }


  return 0;
}