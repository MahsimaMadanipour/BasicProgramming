#include <stdio.h>

int main()
{
    char src[20], dest[20];

    gets(src);

    /*
    int i;
    for(i = 0; src[i]; i++)
        dest[i] = src[i];
    dest[i] = src[i]; //dest[i] = '\0';
    */
    int i = 0;
    do{
        dest[i] = src[i];
        i++;
    }while(src[i - 1] != '\0');

    printf("Dest = %s", dest);
    return 0;
}
