/**
 * Write a pointer version of the function strcat that we showed
 * in Chapter 2: strcat (s ,t) copies the string t to the end of s.
*/

#include <stdio.h>

void strcat(char *s, char *t);

int main()
{
    char ch[] = "Abhishek";
    char ch2[] = "Mishra";
    strcat(ch, ch2);

    return 0;
}

void strcat(char *s, char *t)
{
    char *cat = s;
    while(*(s) != '\0')
        s++;            //cannot increment in the same while loop as the pointer is incremented one more than null value,
                        //hence the null is also concatenated to the original string.

    while((*(s++) = *(t++)) != '\0')
    ;

    while( *(cat) != '\0' )
    {
        printf("%c", *cat);
        cat++;
    }
}