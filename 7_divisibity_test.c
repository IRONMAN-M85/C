//checking that 97 is divisible by your number or not
#include<stdio.h>
int main () {
    int num;
    printf("Enter the number \n");//getting the value of user
    scanf("%d", &num);

    printf("divisibility test %d\n", num%97);
    return 0 ;

}
//if the number is able to get divide then result will be 0 
