/**
 * Write the function strend (s ,t ), which returns 1 if the string
 * t occurs at the end of the string s, and zero otherwise.
*/

#include <stdio.h>

int strend(char *s, char *t);

int main(int argc, char const *argv[])
{
    int result= 0;
    char s1[] = "abhishek";
    char s2[] = "shek";
    char s3[] = "abc";

    result = strend(s1, s3);
    printf("%d \n", result);

    return 0;
}

int strend(char *s, char *t)
{
    char *start = t;
    bool flag = false;

    while(*(s) != '\0')
    s++;

    while(*(t) != '\0')
    t++;

    while(t >= start)                   //can be optimized???
    {
        if((*(s--) == *(t--)))
        {
            flag = true;
        }
        else
        {
            flag = false;;
        }
    }

    if(flag == true)
        return 1;
    else
        return 0;
}