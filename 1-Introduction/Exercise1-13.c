/**
 * Write a program to print a histogram of the lengths of words in
 * its input. It is easy to draw the histogram with the bars horizontal; a vertical
 * orientation is more challenging.
*/

#include <stdio.h>

//Horizontal Histogram of the input.

/*
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
            printf("*");
        }
    }
    return 0;
}
*/

//Verticle Histogram of the input.

int main(int argc, char const *argv[])
{
    char c;
    int largest_length = 0, count = 0, space = 0, number_of_words = 0, k = 0;

//finding the numbre of words in the string.

    while((c = getchar()) != EOF)
    {
        if(c == ' ')
        {
            space++;
        }
    }
    number_of_words = space+1;

    int word_len[number_of_words];

//finding the largest word length and storing the lengths of all the words in an array.

    while((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\n')
        {
            word_len[k] = count;
            count = 0;
            ++k;
        }
        else if(c != ' ')
        {
            ++count;
            if(count > largest_length)
            {
                largest_length = count;
            }
        }
    }

//Similar to pattern printing

    for(int i = largest_length; i > 0; i--)
    {
        for(int j = 0; j < number_of_words; j++)
        {
            if(i <= word_len[j])
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
