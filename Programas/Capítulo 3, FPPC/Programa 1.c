#include <stdio.h> //Permite la inclusión de la biblioteca estándar de entrada y salida de C.

/* Nómina.
El programa, al recibir los salarios de 15 profesores,
obtiene el total de la nómina de la universidad.

I: Variable de Tipo Entero.
SAL y NOM: Variables de Tipo Real. */

void main (void) // Indica donde comienza la ejecución. void quiere decir que la función no tiene parámetros ni retorna valores.
{
    int I; //Se declara I como variable entero.
    float SAL, NOM; //Estas variables son declaradas como flotantes.
    NOM = 0; //Se le da el valor de 0.
    for (I=1; I<=15; I++) //Un bucle que se ejecuta 15 veces. I comienza en 1 hasta llegar a 15.
    {
        printf ("\Ingrese el Salario del Profesor %d:\t", I); //Mensaje que aparece en pantalla solicitando al usuario información.
        scanf ("%f", &SAL); //Lee el valor ingresado y lo almacena en la variable.
        NOM = NOM + SAL; //Suma el salario ingresado en SAL con la variable NOM (0).
    }

    printf ("\nEl Total de la Nómina es: %.2f", NOM); //Al finalizar, muestra en pantalla el total acumulado con 2 decimales.
}
