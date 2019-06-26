/**
 * Write a program to print a histogram of the frequencies of different
 * characters in its input.
*/

#include <stdio.h>
#define MAXLEN 100

int main(int argc, char const *argv[])
{
    char c;
    int most_occuring = 0, ind = 0, count = 0, k = 0;
    char input[MAXLEN];
    int word_freq[MAXLEN];
    bool signal = false;

    while((c = getchar()) != EOF)
    {
        input[ind] = c;
        ++ind;
    }
    
    //printf("%d", ind);
    // for(int ind2 = 0; ind2 < ind-1; ind2++)
    // {
    //     printf("%c", input[ind2]);
    // }

    for(int i = 0; i < ind-1; i++)
    {
        count  = 0;
        signal = false;         //for deciding whether the charater is already done or not, if that characters freq
                                // is already calculated then we will skip it.
        for(int j = 0; j < ind-1; j++)
        {
            if((input[i] == input[j]) && (j > i))
            {
                count++;
            }
            if((input[i] == input[j]) && j < i)
            {
                signal = true;
            }
        }
        if(!signal)
        {
            word_freq[k] = count+1;
            ++k;
        }
    }

    // for(int ind = 0; ind < k; ind++)
    // {
    //     printf("%d", word_freq[ind]);
    // }

    //Histogram printing...
    
    for(int i = (ind-1); i > 0; i--)
    {
        for(int j = 0; j < k; j++)
        {
            if(i <= word_freq[j])
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
