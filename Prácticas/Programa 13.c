#include <stdio.h>

/* Aplicación de Operadores. */

void main (void)

{
    int i = 5, j = 4, k, l, m;

    k = !i * 3 + --j * 2 - 3;
    printf ("\nEl Valor de K es: %d", k);

    l = ! (!i || 1 && 0) && 1;
    printf ("\nEl Valor de L es: %d", l);

    m = (k = (! (12 > 10)), j = (10 || 0) && k, (! (k || j)));
    printf ("\nEl Valor de M es: %d", m);
}
