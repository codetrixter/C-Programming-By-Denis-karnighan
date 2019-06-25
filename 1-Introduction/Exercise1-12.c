/**
 * Write a program that prints its input one word per line.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c;

    while((c = getchar()) != EOF)  
    {
        if(c == ' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c", c);
        }
    }
    return 0;
}
