#include <stdio.h>

int main(void)
{
    char name_first[30];
    char name_last[30];

    printf("Input your name and last name: ");
    scanf("%s", name_last);
    scanf("%s", name_first);
    printf("Your full name is: %s, %s \n", name_first, name_last);

    return 0;
}