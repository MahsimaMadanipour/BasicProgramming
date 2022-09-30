#include <stdio.h>

int main()
{
    char s1[100], s2[100], s3[100];
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

    for(int i = 0; i < l1; i++)
    {
        s3[2 * i] = s1[i];
        s3[2 * i + 1] = s2[i];
    }
    s3[2 * l1] = '\0';

    printf("s3 = %s", s3);

    return 0;
}
