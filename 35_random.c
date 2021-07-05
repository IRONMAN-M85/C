/**
 * @Author: ironman
 * @Date:   2021-05-26T05:26:25-04:00
 * @Last modified by:   ironman
 * @Last modified time: 2021-05-29T03:08:55-04:00
 */



//random number generating
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {

    int number ;

    srand (time(NULL));  ///instruction  to generate numbers randomly frequently
    number = rand()%10 + 1; //rand number generator


    printf ("%d  ",number);
    
    return 0 ;
}
