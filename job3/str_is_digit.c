#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[] = "987654321"; // change the value between the quotes to change the final result
    int i = 0;

    while (str[i] != '\0') {
        if (!isdigit(str[i])) {
            printf("There is at least one other character");
            return 1;
        }
        i++;
    }

    printf("There is only digits");
    return 0;
}