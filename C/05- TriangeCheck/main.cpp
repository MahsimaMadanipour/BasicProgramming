#include <stdio.h>

int main()
{
    float a, b, c;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    /*
    if(a <= 0)
    {
        printf("Length of edges should be positive.");
        return 0;
    }
    if(b <= 0)
    {
        printf("Length of edges should be positive.");
        return 0;
    }
    if(c <= 0)
    {
        printf("Length of edges should be positive.");
        return 0;
    }*/
    if(a <= 0 || b <= 0 || c <= 0)
    {
        printf("Length of edges should be positive.");
        return 0;
    }
    if(a + b <= c)
    {
        printf("%f + %f <= %f", a, b, c);
        return 0;
    }
    if(a + c <= b)
    {
        printf("%f + %f <= %f", a, c, b);
        return 0;
    }
    if(b + c <= a)
    {
        printf("%f + %f <= %f", b, c, a);
        return 0;
    }

    printf("That's OK!");
    return 0;
}
