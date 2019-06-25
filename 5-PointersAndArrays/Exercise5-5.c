/**
 * Write versions of the library functions strncpy, strncat, and
 * strncmp; which operate on at most the first n characters of their argument
 * strings. For example, strncpy (s,t ,n) copies at most n characters of t to s.
*/

// characters when compared, use ascii values.
// char c = 'a', c1 = 'A';
// if(c > c1)
// {
//     printf("yo...%d\t%d", c, c1);
// }
// else
// {
//     printf("no....%d\t%d", c, c1);
// }

#include <stdio.h>

int strcmp(char *s, char *t, int n);

int main(int argc, char const *argv[])
{
    int cmp = 0;
    char s1[] = "abhishek";
    char s2[] = "mihsra";
    char s3[] = "abhsalksjdashdnf";

    cmp = strcmp(s1, s3, 4);
    printf("%d \n", cmp);

    return 0;
}

int strcmp(char *s, char *t, int n)
{
    int i = 0, val = 0, temp = 1;
    while( temp++ <= n)
    {
        if(*s == *t)
        {
            val = 0;
        }
        else if(*s > *t)
        {
            val = 1;
            break;
        }
        else if(*s < *t)
        {
            val = -1;
            break;
        }
        s++;
        t++;
    }
    return val;
}
