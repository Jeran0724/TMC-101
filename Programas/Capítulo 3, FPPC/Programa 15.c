#include <stdio.h> //Permite la inclusi�n de la biblioteca est�ndar de entrada y salida de C.
#include <math.h> //Permite la inclusi�n de la biblioteca de funciones matem�ticas.

/* C�lculo de P.
El programa obtiene el valor de P aplicando
una serie determinada.

I, B, C: Variables de Tipo Entero.
RES: Variable de Tipo Real de Doble Precisi�n. */

void main (void) // Indica donde comienza la ejecuci�n. void quiere decir que la funci�n no tiene par�metros ni retorna valores.
{
    int I = 1, B = 0, C; //Declaraci�n e inicializaci�n de variables enteras
    double RES; //Declaraci�n de una variable de tipo doble para el resultado.
    RES = 4.0 / I; //Inicializa RES con el primer t�rmino de la serie (4/1).
    C = 1; //Inicializa el contador de t�rminos en 1, porque ya se ha calculado el primer t�rmino.

    while ((fabs (3.1415 - RES)) > 0.0005) //Bucle que contin�a hasta que la aproximaci�n de RES est� suficientemente cerca de pi (3.1415).
    {
        I+=2; //Incrementa I en 2 para pasar al siguiente denominador de la serie (1, 3, 5, ...).
        if (B) // Verifica si B es verdadero (1).
        {
            RES += (double) (4.0 / I); //Si B es 1, suma el siguiente t�rmino (4/I) a RES.
            B = 0; //Cambia B a 0 para la pr�xima iteraci�n (pr�xima vez restar).
        }

        else //Si B es falso (0).
        {
            RES -= (double) (4.0 / I); //Resta el siguiente t�rmino (4/I) de RES.
            B = 1; //Cambia B a 1 para la pr�xima iteraci�n (pr�xima vez sumar).
        }

        C++; //Incrementa el contador de t�rminos utilizados.
    }

    printf ("\nN�mero de T�rminos: %d", C); //Imprime el n�mero total de t�rminos utilizados en la aproximaci�n de pi.
}
