#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    c = 'A'; // change the value between the quotes to change the final result

    if (isdigit(c) == 0) {
        printf("%c is a character", c);
        return 0;
    } 
    
    else {
        printf("%c is a digit", c);
        return 1;
    }
}