#include <stdio.h> //Permite la inclusión de la biblioteca estándar de entrada y salida de C.
#include <math.h> //Permite la inclusión de la biblioteca de funciones matemáticas.

/* Cálculo de P.
El programa obtiene el valor de P aplicando
una serie determinada.

I, B, C: Variables de Tipo Entero.
RES: Variable de Tipo Real de Doble Precisión. */

void main (void) // Indica donde comienza la ejecución. void quiere decir que la función no tiene parámetros ni retorna valores.
{
    int I = 1, B = 0, C; //Declaración e inicialización de variables enteras
    double RES; //Declaración de una variable de tipo doble para el resultado.
    RES = 4.0 / I; //Inicializa RES con el primer término de la serie (4/1).
    C = 1; //Inicializa el contador de términos en 1, porque ya se ha calculado el primer término.

    while ((fabs (3.1415 - RES)) > 0.0005) //Bucle que continúa hasta que la aproximación de RES esté suficientemente cerca de pi (3.1415).
    {
        I+=2; //Incrementa I en 2 para pasar al siguiente denominador de la serie (1, 3, 5, ...).
        if (B) // Verifica si B es verdadero (1).
        {
            RES += (double) (4.0 / I); //Si B es 1, suma el siguiente término (4/I) a RES.
            B = 0; //Cambia B a 0 para la próxima iteración (próxima vez restar).
        }

        else //Si B es falso (0).
        {
            RES -= (double) (4.0 / I); //Resta el siguiente término (4/I) de RES.
            B = 1; //Cambia B a 1 para la próxima iteración (próxima vez sumar).
        }

        C++; //Incrementa el contador de términos utilizados.
    }

    printf ("\nNúmero de Términos: %d", C); //Imprime el número total de términos utilizados en la aproximación de pi.
}
