#include <stdio.h>

int main()
{
    int n;
    int m = 5;
    scanf("%d", &n);
    switch(n)
    {
        case 0:
            printf("n is Zero");
            break;
        case 1:
            printf("n is One");
            break;
        case 2:
            printf("n is Two");
            break;
        case 3:
            printf("n is Three");
            break;
        case 4:
            printf("n is Four");
            break;
        case 5:
            printf("n is Five");
            break;
        case 6:
            printf("n is Six");
            break;
        case 7:
            printf("n is Seven");
            break;
        case 8:
            printf("n is Eight");
            break;
        case 9:
            printf("n is Nine");
            break;
        default:
            printf("n is out of range!");
    }
    printf("\n");

    switch(n)
    {
        case 0:
        case 2:
        case 4:
        case 6:
        case 8:
            printf("n is even.");
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
            printf("n is odd.");
    }
    return 0;
}
