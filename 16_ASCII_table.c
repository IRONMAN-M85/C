//according to ASCII table checking lower and Upper case characters

#include <stdio.h>
int main()
{
    char ch; //assigning

    printf("Enter the character here \n"); // taking input
    scanf("%c", &ch);

    //For lower 97 to 122 lower
    // For upper case 65 -90  Upper 
    
    if (ch >= 97 && ch <= 122) {
        printf ("It is lower case");
    }
     else if ( ch >= 65 && ch <= 90){
        printf("It is uppercase");
    }
    else {
        printf ("It is  not an alphabet or invalid operation ");
    }
    
    printf("\nExample of printing character from ASCII code \n for this see source code \n %c\n" , 97); 
    return 0;
}