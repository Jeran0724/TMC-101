#include <stdio.h> //Permite la inclusi�n de la biblioteca est�ndar de entrada y salida de C.

/* N�mina de Profesores.
El programa, al recibir como datos los salarios
de los profesores de una universidad, obtiene la
n�mnina y el promedio de los salarios.

I: Variable de Tipo Entero.
SAL, NOM y PRO: Variables de Tipo Real. */

void main (void) // Indica donde comienza la ejecuci�n. void quiere decir que la funci�n no tiene par�metros ni retorna valores.
{
    int I = 0; //Variable entera inicializada en 0.
    float SAL, PRO, NOM = 0; //Se declaran variables flotantes (almacenan numeros con decimales). Son inicializadas en 0.
    printf ("Ingrese el Salario del Profesor: \t"); //Mensaje en pantalla solicitando al usuario informaci�n.
    scanf ("%f", &SAL); //Lee el valor ingresado y lo almacena en la variable.

    do //Asegura que el c�digo se ejecute al menos una vez.
    {
        NOM = NOM + SAL; //Suma el salario ingresado a la variable.
        I = I + 1; //Lleva la cuenta de la informaci�n ingresada incrementando 1.
        printf ("Ingrese el Salario del Profesor -0 para terminar- :\t"); //Mensaje en pantalla solicitando al usuario informaci�n. Debe ingresar 0 para finalizar.
        scanf ("%f", &SAL); //Lee el valor ingresado y lo almacena en la variable. Si el usuario ingresa 0, el bucle se detendr�.
    }

    while (SAL); //El bucle se repetir� mientras SAL sea diferente a 0
    PRO = NOM / I; //Calcula el promedio de los salarios sividiendo la suma total entre el n�mero de profesores.
    printf ("\nN�mina: %.2f \t Promedio de Salarios: %.2f", NOM, PRO); //Una vez finalizado el bucle se muestra la suma total con dos decimales.
}
