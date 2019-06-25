/**
 * Verify that the expression qetchar () != EOFis 0 or 1.
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    char c = getchar();
    int val = (getchar()!=EOF);     //its value is 1
    printf("%c\t%d", c, val);  
    return 0;
}
