#include <stdio.h>

int main()
{
    char s1[50], s2[50];

    gets(s1);
    gets(s2);

    int l1 = 0;
    while(s1[l1])
        l1++;

    int i = 0;
    do{
        s1[l1 + i] = s2[i];
        i++;
    }while(s2[i - 1]);

    printf("After concat s1 = %s", s1);
    return 0;
}
