#include <stdio.h>

int main()
{
    char str1[10] = {'A', 'l', 'i', '\0'};
    char str2[10] = "Mohammad";

    printf("str1 = %5s\n", str1);
    printf("str2 = %5s\n", str2);

    scanf("%9s", str1);
    printf("str1 = %s\n", str1);
    scanf("%9s", str2);
    printf("str2 = %s\n", str2);

    gets(str1);
    gets(str1);
    printf("str1 = %s\n", str1);

    return 0;
}
