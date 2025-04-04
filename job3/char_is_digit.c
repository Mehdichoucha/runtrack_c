#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    char str[] = "u";
 
    int i;
    for (i = 0; str[i] != '\0'; i++) 
    {
     
        if (isalpha(str[i]) != 0)
            return 1;
 
        else if (isdigit(str[i]) != 0)
            return 0;
    }
 
}