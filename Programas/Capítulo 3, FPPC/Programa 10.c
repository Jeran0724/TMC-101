#include <stdio.h> //Permite la inclusión de la biblioteca estándar de entrada y salida de C.
#include <math.h> //Permite la inclusión de la biblioteca de funciones matemáticas.

/* Pares e Impares.
El programa, al recibir como datos N números enteros,
obtiene la suma de los números pares y calcula el
promedio de los impares.

I, N, NUM, SPA, SIM, CIM: Variables de Tipo Entero. */

void main (void) // Indica donde comienza la ejecución. void quiere decir que la función no tiene parámetros ni retorna valores.
{
    int I, N, NUM, SPA = 0, SIM = 0, CIM = 0; //Declaración de variables enteras.
    printf ("Ingrese el Número de Datos que se Van a Procesar:\t"); //Mensaje en pantalla solicitando al usuario información.
    scanf ("%d", &N); //Lee el valor ingresado y lo almacena en la variable.

    if (N > 0) //Verifica si el número de datos ingresado (N) es mayor que 0.
    {
        for (I=1; I<=N; I++) //Inicia un bucle que se ejecuta N veces, comenzando en 1 y terminando en N.
        {
            printf ("\nIngrese el Número %d: ", I); //Solicita al usuario ingresar el número actual (I-ésimo).
            scanf ("%d", &NUM); //Lee el valor ingresado y lo almacena en la variable.

            if (NUM) //Verifica si el número ingresado no es cero (si es diferente de 0, entra en la siguiente condición).
                if (pow(-1, NUM) > 0) //Esta línea pretende verificar si el número es par usando la función `pow`, pero esta lógica es incorrecta. Aquí se debería usar `NUM % 2 == 0` para saber si el número es par.
                SPA = SPA + NUM; //Si el número es par, se suma a la variable SPA (suma de los pares).
            else //Si el número es impar:
            {
                SIM = SIM + NUM; //Se suma el número a SIM (suma de los impares).
                CIM++; //Se incrementa el contador de números impares (CIM).
            }
        }

        printf ("\nLa Suma de los Números Pares es: %d", SPA); //Imprime la suma de los números pares.
        printf ("\nEl Promedio de Números Imapres es: %5.2f", (float)(SIM / CIM)); //Calcula y muestra el promedio de los números impares. Convierte la suma de los impares (SIM) a flotante para obtener el promedio.
    }

    else //Si el valor de N es menor o igual a 0:
        printf ("\nEl Valor de N es Incorrecto"); //Muestra un mensaje de error indicando que N es inválido.
}
