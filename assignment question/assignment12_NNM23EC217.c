#include <stdio.h>

struct vehicle
{
    char regno[20];
    char brand[20];
    int cc;
    float mileage;
};

int main()
{
    struct vehicle v[5];
    int i,max=0;
    for(i=0;i<5;i++)
    {
        printf("Enter details of Vehicle %d\n",i+1);
        printf("Enter Registration Number: ");
        scanf("%s",v[i].regno);
        printf("Enter Brand: ");
        scanf("%s",v[i].brand);
        printf("Enter CC: ");
        scanf("%d",&v[i].cc);
        printf("Enter Mileage: ");
        scanf("%f",&v[i].mileage);
    }
    printf("\nDetails of all Vehicles:\n");
    for(i=0;i<5;i++)
    {
        printf("\nVehicle %d\n",i+1);
        printf("Registration Number: %s\n",v[i].regno);
        printf("Brand: %s\n",v[i].brand);
        printf("CC: %d\n",v[i].cc);
        printf("Mileage: %.2f\n",v[i].mileage);
    }
    for(i=1;i<5;i++)
    {
        if(v[i].mileage>v[max].mileage)
        {
            max=i;
        }
    }
    printf("\nVehicle with Best Mileage:\n");
    printf("Registration Number: %s\n",v[max].regno);
    printf("Brand: %s\n",v[max].brand);
    printf("CC: %d\n",v[max].cc);
    printf("Mileage: %.2f\n",v[max].mileage);

    return 0;
}