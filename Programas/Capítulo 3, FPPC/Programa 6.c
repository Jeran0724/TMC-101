#include <stdio.h> //Permite la inclusión de la biblioteca estándar de entrada y salida de C.

/* Nómina de Profesores.
El programa, al recibir como datos los salarios
de los profesores de una universidad, obtiene la
nómnina y el promedio de los salarios.

I: Variable de Tipo Entero.
SAL, NOM y PRO: Variables de Tipo Real. */

void main (void) // Indica donde comienza la ejecución. void quiere decir que la función no tiene parámetros ni retorna valores.
{
    int I = 0; //Variable entera inicializada en 0.
    float SAL, PRO, NOM = 0; //Se declaran variables flotantes (almacenan numeros con decimales). Son inicializadas en 0.
    printf ("Ingrese el Salario del Profesor: \t"); //Mensaje en pantalla solicitando al usuario información.
    scanf ("%f", &SAL); //Lee el valor ingresado y lo almacena en la variable.

    do //Asegura que el código se ejecute al menos una vez.
    {
        NOM = NOM + SAL; //Suma el salario ingresado a la variable.
        I = I + 1; //Lleva la cuenta de la información ingresada incrementando 1.
        printf ("Ingrese el Salario del Profesor -0 para terminar- :\t"); //Mensaje en pantalla solicitando al usuario información. Debe ingresar 0 para finalizar.
        scanf ("%f", &SAL); //Lee el valor ingresado y lo almacena en la variable. Si el usuario ingresa 0, el bucle se detendrá.
    }

    while (SAL); //El bucle se repetirá mientras SAL sea diferente a 0
    PRO = NOM / I; //Calcula el promedio de los salarios sividiendo la suma total entre el número de profesores.
    printf ("\nNómina: %.2f \t Promedio de Salarios: %.2f", NOM, PRO); //Una vez finalizado el bucle se muestra la suma total con dos decimales.
}
