#include <stdio.h>
#include <stdlib.h>

int main ()

{
    int edad = 0;
    printf("\nIngresa tu Edad: ");
    scanf("%i", &edad);

    if (edad >0 && edad <=3)
    {
        printf ("\nUsted es un Bebe");
    }
        else if (edad >3 && edad <=12 )
        {printf ("\nUsted es un Nino");}

        else if (edad >12 && edad <=17 )
        {printf ("\nUsted es un Menor");}

        else if (edad >17 && edad <=60 )
        {printf ("\nUsted es un Mayor de Edad");}

        else if (edad >60 && edad <=120 )
        {printf ("\nUsted es un Viejo");}

        else
        {
            if (edad <=0)
            {
                if (edad ==0)
                {
                    printf("\nEdad Debe de ser Mayor a Cero");
                }
                else
                {
                printf ("\nNumeros Negativos No son Validos");
                }
            }

            if (edad > 120)
            {
                printf ("\n120 es la Edad Maxima");
            }
        }
}
