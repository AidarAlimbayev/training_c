/*showf_pt.c -- displays float value in two ways */
#include <stdio.h>
int main (void)
{

float aboat = 32000.0;
double abet = 2.14e9;
long double dip = 5.32e-5;
float toobig = 3.4e38 * 100.0f;

printf("%e\n", toobig);
printf("%f can be written %e\n", aboat, aboat);
printf("%f can be written %e\n", abet, abet);
printf("%f can be written %e\n", dip, dip);

return 0;
}