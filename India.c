#include <stdio.h>
int main()
{
    char a[] = "india is best country";
    int i = 0, c = 0;
    while (a[i])
    {
        if ( a[i] == 32 )
            c++;
    }
    printf("%d", c);
    return 0;
}
