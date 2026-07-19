
int main()
{
    int num;
    int count = 1;

    printf("Enter the number\n");
    scanf("%d",&num);
    if(num<=1)
    {
        count = 0;
    }
    else
    {
    for(int i=2;i<=num/2;i++)
    {
        if((num%i)==0)
        {
          count = 0;
           break;
        }
        }
        }
      if(count)
      {
        printf("Is a prime number");
      }
      else
      {
            printf("Is not a prime number");
      }
    return 0;
}
