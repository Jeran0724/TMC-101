#include <stdio.h> //Permite la inclusi�n de la biblioteca est�ndar de entrada y salida de C.

/* N�mina.
El programa, al recibir los salarios de 15 profesores,
obtiene el total de la n�mina de la universidad.

I: Variable de Tipo Entero.
SAL y NOM: Variables de Tipo Real. */

void main (void) // Indica donde comienza la ejecuci�n. void quiere decir que la funci�n no tiene par�metros ni retorna valores.
{
    int I; //Se declara I como variable entero.
    float SAL, NOM; //Estas variables son declaradas como flotantes.
    NOM = 0; //Se le da el valor de 0.
    for (I=1; I<=15; I++) //Un bucle que se ejecuta 15 veces. I comienza en 1 hasta llegar a 15.
    {
        printf ("\Ingrese el Salario del Profesor %d:\t", I); //Mensaje que aparece en pantalla solicitando al usuario informaci�n.
        scanf ("%f", &SAL); //Lee el valor ingresado y lo almacena en la variable.
        NOM = NOM + SAL; //Suma el salario ingresado en SAL con la variable NOM (0).
    }

    printf ("\nEl Total de la N�mina es: %.2f", NOM); //Al finalizar, muestra en pantalla el total acumulado con 2 decimales.
}
