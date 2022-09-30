#include <stdio.h>

int main()
{
    char str[100];
    gets(str);

    int len = 0;

    while(str[len]) //while(str[len] != '\0')
        len++;

    printf("Length of %s is %d", str, len);
    return 0;
}
