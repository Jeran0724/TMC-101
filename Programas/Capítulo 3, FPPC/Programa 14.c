#include <stdio.h> //Permite la inclusi�n de la biblioteca est�ndar de entrada y salida de C.

/* Elecci�n.
El programa obtiene el total de votos de cada
candidato y el porcentaje correspondiente.
Tambi�n considera votos nulos.

VOT, C1, C2, C3, C4, C5, NU, SVO: Variables de Tipo Entero.
PO1, PO2, PO3, PO4, PO5, PON: Variables de Tipo Real. */

void main (void) // Indica donde comienza la ejecuci�n. void quiere decir que la funci�n no tiene par�metros ni retorna valores.
{
    int VOT, C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0, NU = 0, SVO; //Declaraci�n de variables enteras
    float PO1, PO2, PO3, PO4, PO5, PON; //Declaraci�n de variables reales para almacenar los porcentajes de cada candidato y votos nulos.
    printf ("Ingrese el Primer Voto"); //Solicita al usuario que ingrese el primer voto.
    scanf ("%d", &VOT); //Lee el voto ingresado por el usuario y lo almacena en la variable VOT.

    while (VOT) //Mientras VOT sea diferente de 0, contin�a pidiendo votos.
    {
        switch (VOT) //Verifica el valor de VOT.
        {
            case 1: C1++; break; //Si el voto es 1, incrementa el contador del Candidato 1.
            case 2: C2++; break; //Si el voto es 2, incrementa el contador del Candidato 2.
            case 3: C3++; break; //Si el voto es 3, incrementa el contador del Candidato 3.
            case 4: C4++; break; //Si el voto es 4, incrementa el contador del Candidato 4.
            case 5: C5++; break; //Si el voto es 5, incrementa el contador del Candidato 5.
            default: NU++; break; //Para cualquier otro valor, incrementa el contador de votos nulos.
        }

        printf ("Ingrese el Siguiente Voto -0 para terminar-: "); //Pide al usuario el siguiente voto.
        scanf ("%d", &VOT); //Lee el siguiente voto y lo almacena en VOT.
    }

    SVO = C1 + C2 + C3 + C4 + C5 + NU; //Calcula el total de votos sumando los votos de cada candidato y los votos nulos.
    PO1 = ((float) C1 / SVO) * 100; //Porcentaje del Candidato 1.
    PO2 = ((float) C2 / SVO) * 100; //Porcentaje del Candidato 2.
    PO3 = ((float) C3 / SVO) * 100; //Porcentaje del Candidato 3.
    PO4 = ((float) C4 / SVO) * 100; //Porcentaje del Candidato 4.
    PO5 = ((float) C5 / SVO) * 100; //Porcentaje del Candidato 5.
    PON = ((float) NU / SVO) * 100; //Porcentaje de votos nulos.

    printf ("\nTotal del Votos: %d", SVO); //Imprime el total de votos y el porcentaje de cada candidato.
    printf ("\n\nCandidato 1: %d Votos -- Porcentaje: %5.2f", C1, PO1); //Imprime el total de votos y el porcentaje del candidato 1.
    printf ("\nCandidato 2: %d Votos -- Porcentaje: %5.2f", C2, PO2); //Imprime el total de votos y el porcentaje del candidato 2.
    printf ("\nCandidato 3: %d Votos -- Porcentaje: %5.2f", C3, PO3); //Imprime el total de votos y el porcentaje del candidato 3.
    printf ("\nCandidato 4: %d Votos -- Porcentaje: %5.2f", C4, PO4); //Imprime el total de votos y el porcentaje del candidato 4.
    printf ("\nCandidato 5: %d Votos -- Porcentaje: %5.2f", C5, PO5); //Imprime el total de votos y el porcentaje del candidato 5.
    printf ("\nNulos: %d Votos -- Porcentaje: %5.2f", NU, PON); //Imprime el total de votos y el porcentaje de votos nulos.
}
