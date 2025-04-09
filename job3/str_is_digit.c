#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    c = 'A';

    if (isdigit(c) == 0) {
        printf("%c is a character", c);
        return 1;
    } 
    
    else {
        printf("%c is a digit", c);
        return 0;
    }
}