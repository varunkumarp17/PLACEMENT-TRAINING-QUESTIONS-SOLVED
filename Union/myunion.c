#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union myunion {
    int myNum;
    char myLetter;
    char myString[10];
};

int main(){

union myunion u1;
u1.myNum = 10000;
u1.myLetter = 'A';

printf("myNum = d\n%",u1.myNum);
printf("myLetter: %c\n",u1.myLetter);
return 0;
}