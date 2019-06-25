/**
 * Modify the temperature conversion program to print the table in
 * reverse order, that is, from 300 degrees to O.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    double Celcius, fahrenheight = 0.0;    
    int upper, lower, step;
    
    lower = 0;
    upper = 300;
    step  = 20;

    printf("CELCIUS \t FAHRENHEIGHT\n");

    Celcius = upper;
    while(Celcius >= lower)
    {
        fahrenheight = (Celcius * (9.0/5.0)) + 32;
        printf("%3.0f \t\t %6.1f\n", Celcius, fahrenheight);
        Celcius -= step; 
    }
    return 0;
}

