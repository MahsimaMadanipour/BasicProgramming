#include <stdio.h>
typedef struct
{
    int h;
    int m;
    int s;
} TIME;

struct Date
{
    int y;
    int m;
    int d;
};

typedef struct Date DATE;

struct DATE_AND_TIME
{
    DATE d;
    TIME t;
};

int TimeCmp(TIME t1, TIME t2);

int main()
{
    TIME t1 = {17, 20, 12}, t2 = {17, 21, 12};

    printf("%d\n", TimeCmp(t1, t2));

    return 0;
}

int TimeCmp(TIME t1, TIME t2)
{
    if(t1.h != t2.h)
        return t1.h - t2.h;
    if(t1.m != t2.m)
        return t1.m - t2.m;
    return t1.s - t2.s;
}

int DateCmp(DATE d1, DATE d2)
{
    if(d1.y != d2.y)
        return d1.y - d2.y;
    if(d1.m != d2.m)
        return d1.m - d2.m;
    return d1.d - d2.d;
}

int DateAndTimeCmp(DATE_AND_TIME dt1, DATE_AND_TIME dt2)
{
    int r = DateCmp(dt1.d, dt2.d);
    if(!r)
        return r;
    return TimeCmp(dt1.t, dt2.t);
}
