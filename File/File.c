#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{
FILE *fp;
char n[20],p[20];
char ans='y';

fp = fopen("namesList.txt","a");
if(fp==NULL)
{
    puts("\nError ");
    exit(1);
}
while(ans=='y' || ans=='Y')
{
 puts("\nEnter name : ");
 gets(n);
 fputs(n,fp);
 fputc('\n',fp);
 puts("\nAny more y/n ? ");
 ans = getche();
}

fopen("d:\\NamesList.txt","r");

while(!feof(fp))
{
 fgets(p,20,fp);
 puts(p);

}
fclose(fp);

return 0;
}
