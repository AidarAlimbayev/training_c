/* charcode/c - displays code number for a character */
#include <stdio.h>
int main(void)
{
    char ch;

    printf("Please enter a character.\n");
    scanf("%c", &ch); /*user inputs charachter */
    printf("The code for %c is %d.\n", ch, ch);

    getchar();
    return 0;
}