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

    for(int i = 0; i < l2; i++)
    {
        for(int j = l1 + i; j > 2 * i; j--)
            s1[j + 1] = s1[j];
        s1[2 * i + 1] = s2[i];
    }

    printf("s1 = %s", s1);

    return 0;
}
