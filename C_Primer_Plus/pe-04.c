// #include <stdio.h>

// int main(void)
// {
    
//     for (int i = 3; i != 0; i --)
//     {
//         printf("For he's a jolly good fellow!\n");
//     }
//         printf("Which nobody can deny!\n");

//     return 0;
// }

#include <stdio.h>

void jolly(void);
void deny(void);

int main(void)
{
    jolly();
    jolly();
    jolly();
    deny();
    return 0;
}

void jolly(void)
{
    printf("For he's a jolly good fellow or fellow!\n");
}

void deny(void)
{
    printf("Which nobody can deny and deny!\n");
}