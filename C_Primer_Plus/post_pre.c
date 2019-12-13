#include <stdio.h>
int main(void)
{
    int a = 1, b = 1;
    int aplus, plusb;

    aplus = a++;
    plusb = ++b;
    printf("a aplus b plusb \n");
    printf("%1d %5d %5d %5d\n", a, aplus, b, plusb);

    return 0;
}
