
int main()
{

    int count = 0;
    int init , fin,j,i ;
    printf("Enter the number initial and final\n");
    scanf("%d%d",&init,&fin);

    for(j=init;j<=fin;j++)
    {
        printf("%d\n",j);
      count =  0;
      for(i=2;i<j;i++)
      {
        if(j%i==0)
    z    {
          count++;
           break;
        }
      }
      if(count==0)
      {
            printf("%d is prime number\n",j);
      }
    }
    return 0;
}
