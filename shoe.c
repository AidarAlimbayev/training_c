#include <stdio.h>
#define ADJUST 7.64
#define SCALE 0.325

int main(void)
{
    double shoe, foot;

    shoe = 9.0;
    foot = SCALE * shoe + ADJUST;
    printf("Shoe size(men's) foot lenght\n");
    printf("%10.1f %15.2f inches\n", shoe, foot);

    return 0;
}