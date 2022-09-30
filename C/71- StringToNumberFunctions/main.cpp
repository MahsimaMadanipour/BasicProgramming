#include <stdio.h>
#include <string.h>
int my_atoi(const char *s);
float my_atof(const char *s);
int my_strtod(char *s, char **r);
int main()
{
    char str[20] = "12375";
    printf("Number in %s is %d\n", str, my_atoi(str));

    strcpy(str, "12.");
    printf("Number in %s is %f\n", str, my_atof(str));

    strcpy(str, "1285shgfd");
    char *r;
    int n = my_strtod(str, &r);
    printf("Number in %s is %d\n", str, n);
    printf("The remaining of %s is %s", str, r);
    return 0;
}

int my_atoi(const char *s)
{
    int r = 0;
    while(*s)
    {
        r *= 10;
        r += *s - '0';
        s++;
    }
    return r;
}

float my_atof(const char *s)
{
    float r = 0, c = 0.1;
    while(*s && *s != '.')
    {
        r *= 10;
        r += *s - '0';
        s++;
    }
    if(*s == '\0')
        return r;
    s++;
    while(*s)
    {
        r += (*s - '0') * c;
        c /= 10;
        s++;
    }
    return r;
}

int my_strtod(char *s, char **r)
{
    int res = 0;
    while(*s >= '0' && *s <= '9')
    {
        res *= 10;
        res += *s - '0';
        s++;
    }
    *r = s;
    return res;
}
