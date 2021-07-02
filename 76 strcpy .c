#include <stdio.h>
//#include <>
int main ()
{
char *source = "sujal"; 
char jasmacopyhunxa [6];

int a = strcpy(jasmacopyhunxa , source);
char b = strcpy(jasmacopyhunxa , source);

printf("\nsee we finally copied source wala string in jasmacopyhunxa : %s",a);
printf("\nsee we finally copied source wala string in jasmacopyhunxa : %s", strcpy(jasmacopyhunxa , source));
return 0;
}