#include <stdio.h>

int main()
{
    char str[100];
    int  counter[26] = {0}, others = 0, maxFreq;
    gets(str);
    for(int i = 0; str[i]; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            counter[str[i] - 'a']++;
        else if(str[i] >= 'A' && str[i] <= 'Z')
            counter[str[i] - 'A']++;
        else
            others++;
    }
    maxFreq = others;
    for(int i = 0; i < 26; i++)
        if(counter[i] > maxFreq)
            maxFreq = counter[i];

    for(int i = 0; i < 26; i++)
        printf("%c ", 'A' + i);
    printf("Others\n");
    for(int i = 0; i < 26; i++)
        printf("%c ", 'a' + i);
    printf("\n");

    for(int i = 0; i < maxFreq; i++)
    {
        for(int j = 0; j < 26; j++)
            if(i < counter[j])
                printf("* ");
            else
                printf("  ");
        if(i < others)
            printf("*\n");
        else
            printf(" \n");
    }

    return 0;
}
