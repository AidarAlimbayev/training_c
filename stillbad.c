/* stillbad.c -- a program with syntax errors fixed */
#include <stdio.h>
int main(void)
{
    int n, n2, n3;
    /* this program has a semantic error */
    n = 5;
    n2 = n * n;
    n3 = n * n2;
    printf("n = %d, n sqared = %d, n cubed = %d\n", n, n2, n3);

    getchar();
    return 0;
}
