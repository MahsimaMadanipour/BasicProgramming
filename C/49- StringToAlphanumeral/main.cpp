#include <stdio.h>

int main()
{
    char str[100];
    gets(str);

    for(int i = 0; str[i]; /*i++*/)
    {
        if( (str[i] < 'a' || str[i] > 'z') &&
            (str[i] < 'A' || str[i] > 'Z') &&
            (str[i] < '0' || str[i] > '9')    )
        {
            int j = i;
            do{
                j++;
                str[j - 1] = str[j];
            } while(str[j]);
            //i--;
        }
        else
            i++;
    }

    puts(str);

    return 0;
}
