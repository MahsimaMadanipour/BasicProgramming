#include <stdio.h>

int main()
{
    char str[100];
    int  counter[26] = {0}, Others = 0;
    gets(str);
    for(int i = 0; str[i]; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            counter[str[i] - 'a']++;
        else if(str[i] >= 'A' && str[i] <= 'Z')
            counter[str[i] - 'A']++;
        else
            Others++;
        /*
        for(int j = 0; j < 26; j++)
            if(str[i] == 'a' + j || str[i] == 'A' + j)
                counter[j]++;   */
    }

    for(int i = 0; i < 26; i++)
    {
        printf(" %c / %c: ", 'a' + i, 'A' + i);
        for(int j = 0; j < counter[i]; j++)
            printf("*");
        printf("\n");
    }
    printf("Others: ");
    for(int j = 0; j < Others; j++)
        printf("*");

    return 0;
}
