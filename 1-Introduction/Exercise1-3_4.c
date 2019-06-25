/**
 * 
 * Modify the temperature conversion program to print a heading
 * above the table.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    double Celcius = 0.0, fahrenheight = 0.0;    
    int upper, lower, step;
    
    lower = 0;
    upper = 300;
    step  = 20;

    printf("CELCIUS \t FAHRENHEIGHT\n");
    while(fahrenheight <= upper)
    {
        fahrenheight = (Celcius * (9.0/5.0)) + 32;
        printf("%3.0f \t\t %6.1f\n", Celcius, fahrenheight);
        Celcius += step; 
    }
    return 0;
}
