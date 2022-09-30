#include <stdio.h>

struct TIME
{
    int h;
    int m;
    int s;
};

struct DATE
{
    int y;
    int m;
    int d;
};

struct DATE_AND_TIME
{
    struct DATE d;
    struct TIME t;
};
int main()
{
    struct TIME t1 = {4, 34, 54};
    struct DATE d = {2020, 1, 1};
    struct DATE_AND_TIME dt = {{2020, 1, 1}, {4, 45, 12}};

    printf("%d:%d:%d\n", t1.h, t1.m, t1.s);
    t1.m = 37;
    printf("%d:%d:%d\n", t1.h, t1.m, t1.s);
    //scanf("%d:%d:%d", &t1.h, &t1.m, &t1.s);
    //printf("%d:%d:%d\n", t1.h, t1.m, t1.s);

    printf("%d/%d/%d\n", d.y, d.m, d.d);

    printf("%d/%d/%d - %d:%d:%d\n",
           dt.d.y, dt.d.m, dt.d.d,
           dt.t.h, dt.t.m, dt.t.s);

    struct TIME *p = &t1;
    printf("%d:%d:%d\n", (*p).h, t1.m, p->s);

    return 0;
}
