#include <stdio.h>

/* Apuntadores y Arreglos. */

void main (void)
{
    int X = 5, Y = 8, V[5] = {1,3,5,7,9};
    int *AY, *AX;

    AY = &Y;
    X = *AY;
    *AY = V[3] + V[2];

    printf ("\nX = %d \tY = %d \tV[0] = %d \tV[1] = %d \tV[2] = %d \tV[3] = %d \tV[4] = %d", X, Y, V[0], V[1], V[2], V[3], V[4]);

    AX = &V[V[0] * V[1]];
    X = *AX;
    Y = *AX * V[1];
    *AX = *AX - 3;
    printf ("\nX = %d \tY = %d \tV[0] = %d \tV[1] = %d \tV[2] = %d \tV[3] = %d \tV[4] = %d", X, Y, V[0], V[1], V[2], V[3], V[4]);
}
