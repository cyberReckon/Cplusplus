#include <stdio.h>
#include <math.h>
#include <conio.h>
//sin calculator in C
int main()
{     //define variables
    float sineValue,inputValue;
        //Get input from user
    printf("please enter the value to calculate sine: ");
    scanf("%f",&inputValue);
        //Calculate the sine value 
    sineValue=sin(inputValue);
         //Display the sine value
    printf("\nThe sine value of %f is =%f",inputValue,sineValue);
    getch();
    return 0;
}