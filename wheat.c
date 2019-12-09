/*wheat.c -- exponential growth*/
#include <stdio.h>
#define SQUARES 64
#define CROP 1E15 
int main(void)
{
    double current, total;
    int count = 1;

    printf("square      grains       total     ");
    printf("fraction 0f \n");
    printf("        added       frains      ");
    printf("US total\n");
    total = current = 1.0; /*start with one grain*/
    printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);
    while (count < SQUARES)
    {
        count = count + 1;
        current = 2.0 * current;
                /*double grains on nest square */
        total = total + current;
        printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);

    }
    printf("That's all.\n");

    return 0;
}