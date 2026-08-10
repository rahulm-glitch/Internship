#include <stdio.h>

int main()
{
    int X, Y, r;

    printf("\nEnter a X value: ");
    scanf("%d", &X);

    printf("\nEnter a Y value: ");
    scanf("%d", &Y);

    printf("\nX is big if big show 1: %d", X > Y);
    printf("\nY is big if big show 1: %d", Y > X);

    printf("\nBoth true return true = %d", X > Y && Y > X);

    return 0;
}   