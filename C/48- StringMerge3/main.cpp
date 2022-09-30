#include <stdio.h>

int main()
{
    char s1[100], s2[100];
    int l1 = 0, l2 = 0;

    gets(s1);
    gets(s2);

    while(s1[l1])
        l1++;

    while(s2[l2])
        l2++;

    if(l1 != l2)
    {
        printf("Length of \"%s\" and \"%s\" are not equal.", s1, s2);
        return 0;
    }

    int i, k;
    for(i = l1 - 1, k = 2 * l1 - 1; i >= 0; i--)
    {
        s1[k--] = s2[i];
        s1[k--] = s1[i];
    }
    s1[2 * l1] = '\0';

    printf("s1 = %s", s1);

    return 0;
}
