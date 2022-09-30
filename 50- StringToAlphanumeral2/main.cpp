#include <stdio.h>

int main()
{
    char str[100];
    int i, j;
    gets(str);

    for(i = 0, j = -1; str[i]; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z' ||
           str[i] >= 'A' && str[i] <= 'Z' ||
           str[i] >= '0' && str[i] <= '9' )
            str[++j] = str[i];
    }
    str[++j] = '\0';
    puts(str);
    return 0;
}
