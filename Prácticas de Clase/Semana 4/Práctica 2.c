#include <stdio.h>
#include <stdlib.h>
#define SALIR 0
#define SUMA 1
#define MUL 2
#define DIV 3
#define ERR_OK 0
#define ERR_DBZ 1

int suma (int, int);
int divicion (float nume, float deno, float *r);
int main()
{
    int menu = 0;
    int result = 0;
    int sum1 = 0;
    int sum2 = 0;

    float f1 = 0.0;
    float f2 = 0.0;
    float resulto = 0.0;
    printf ("Hello Calculator!\n");

    do
    {
        printf ("\nSelecciona la Funcion");
        printf ("\n0- Salir\n1- Suma\n2- Multi\n3- Divi\n");
        scanf ("%i", &menu);

        if (menu == SUMA)
        {
            printf ("\nIngresa el Primer Sumando: ");
            scanf ("%i", &sum1);
            printf ("\nIngresa el Segundo Sumando: ");
            scanf ("%i", &sum2);

            result = suma (sum1, sum2);
            printf ("\nResult = %i\n", result);
        }

        if (menu == DIV)
        {
            printf ("\nIngresa el Numerador: ");
            scanf ("%f", &f2);
            printf ("\nIngresa el Denominador: ");
            scanf ("%f", &f1);

            if (divicion (f2,f1,&resultf) == ERR_OK)
            {
                printf ("\Result = %f\n", resultf);
            }

            else
            {
                printf ("\nDivision Entre O\n");
            }
        }
    }

    while (menu != SALIR);
    return 0;
}

int suma (int a, int b)
{
    return a + b;
}

int divicion (float nume, float deno, float *r)
{
    if (deno > 0)
    {
        *r = nume / deno;
        return ERR_OK;
    }

    else
    {
        *r = 0.0;
        return ERR_DBZ;
    }
}
