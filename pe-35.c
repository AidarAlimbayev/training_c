/*pe-3.2*/
#include <stdio.h>

int main (void)
{
    double s_mol = 3.0e-23;
    double grams = 950;
    double rez;
    rez = grams * s_mol;
    printf("%.2e", rez);
    return 0;
} 