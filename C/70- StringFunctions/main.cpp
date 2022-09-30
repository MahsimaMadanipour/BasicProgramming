#include <stdio.h>

int strLen(const char *s);
char *strCpy(char *s1, const char *s2);
char *strnCpy(char *s1, const char *s2, int n);
int strCmp(const char *s1, const char *s2);
int strnCmp(const char *s1, const char *s2, int n);
char *strChr(char *s, char ch);
char *strrChr(char *s, char ch);
const char *strStr(const char *s1, const char*s2);

int main()
{
    char str1[100] = "Ali";
    char str2[100];
    char str3[100];
    int r;

    printf("Length of %s is %d\n", str1, strLen(str1));

    strCpy(str3, strCpy(str2, str1));
    printf("str2 = %s\n", str2);
    printf("str3 = %s\n", str3);
    strCpy(str3, strCpy(str2, ""));
    strnCpy(str2, str1, 5);
    strnCpy(str3, str1, 2);
    printf("str2 = %s\n", str2);
    printf("str3 = %s\n", str3);

    strCpy(str1, "abc");
    strCpy(str2, "dab");
    r = strCmp(str1, str2);
    if(!r)
        printf("%s = %s\n", str1, str2);
    else if(r > 0)
        printf("%s > %s\n", str1, str2);
    else
        printf("%s < %s\n", str1, str2);

    strCpy(str1, "abc");
    strCpy(str2, "abcd");
    r = strnCmp(str1, str2, 3);
    if(!r)
        printf("%s = %s(n = 3)\n", str1, str2);
    else if(r > 0)
        printf("%s > %s(n = 3)\n", str1, str2);
    else
        printf("%s < %s(n = 3)\n", str1, str2);

    strCpy(str1, "abcdadbc");
    char ch = 'e';
    char *p = strChr(str1, ch);
    if(p)//if(p != NULL)
    {
        printf("First %c in %s is at position %d.\
The substring starting at this \
character is %s\n", ch, str1, p - str1, p);
    }
    else
    {
        printf("There is no %c is %s\n", ch, str1);
    }

    strCpy(str1, "dcababcccdabcd");
    strCpy(str2, "bcd");
    const char *q = strStr(str1, str2);
    if(q)
        printf("First %s in %s is at position %d\n",
           str2, str1, q - str1);
    else
        printf("There is no %s in %s", str2, str1);


    return 0;
}

int strLen(const char *s)
{
    int l = 0;
    while(*(s++))
        l++;
    return l;
}

char *strCpy(char *s1, const char *s2)
{
    char *r = s1;
    while(*s2)
    {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
    return r;
}

char *strnCpy(char *s1, const char *s2, int n)
{
    char *r = s1;
    int c = 0;
    while(*s2 && c < n)
    {
        *s1 = *s2;
        c++;
        s1++;
        s2++;
    }
    *s1 = '\0';
    return r;
}

int strCmp(const char *s1, const char *s2)
{
    while(*s1 && *s2 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

int strnCmp(const char *s1, const char *s2, int n)
{
    int c = 1;
    if(!n)
        return 0;
    while(*s1 && *s2 && *s1 == *s2 && c < n)
    {
        s1++;
        s2++;
        c++;
    }
    return *s1 - *s2;
}

char *strChr(char *s, char ch)
{
    while(*s && *s != ch)
        s++;
    if(*s)
        return s;
    else
        return NULL;
}

char *strrChr(char *s, char ch)
{
    char *r = NULL;
    while(*s)
    {
        if(*s == ch)
            r = s;
        s++;
    }
    return r;
}

const char *strStr(const char *s1, const char*s2)
{
    const char *t1, *t2;
    while(*s1)
    {
        t1 = s1;
        t2 = s2;
        while(*t1 && *t2 && *t1 == *t2)
        {
            t1++;
            t2++;
        }
        if(*t2 == '\0')
            return s1;
        s1++;
    }
    return NULL;
}
