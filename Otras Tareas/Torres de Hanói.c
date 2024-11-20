#include <string.h> // Biblioteca para manejo de cadenas (no usada directamente en este código).
#include <stdio.h>  // Biblioteca estándar de entrada/salida.
#include <stdlib.h> // Biblioteca para funciones como malloc y system.

void imprime(int *tab, int fil, int col, int ultNum)    // Función para imprimir el tablero.
{
    int f, c;   // Variables para iterar por filas y columnas.
    int i, esp; // Variables auxiliares para bucles y cálculo de espacios.

    for(c = col-1; c >= 0; c--) // Itera desde la última columna hasta la primera.
    {
        for(f = 0; f < fil; f++)    // Recorre cada fila.
        {
            esp = (ultNum - tab[col*f+c]) / 2;  // Calcula los espacios en blanco para centrar los discos.

            for(i = 0; i < esp; i++)    // Imprime espacios antes del disco.
                printf(" ");

            for(i = 0; i < tab[col*f+c]; i++)   // Imprime el disco como un conjunto de asteriscos.
                printf("*");

            for(i = 0; i < esp; i++)    // Imprime espacios después del disco.
                printf(" ");

            printf("\t");   // Tabulación para separar las columnas.
        }

        printf("\n");   // Nueva línea al terminar una fila.
    }
}

void mueveDisco(int *tab, int fil, int col, int ultNum, int filOrig, int filDest)   // Función para mover un disco de una torre a otra.
{
    int cO = col-1, cD = col-1; // Posiciones iniciales en las columnas origen y destino.

    while(cO >= 0 && tab[col*filOrig+cO] == 0)  // Encuentra el primer disco en la columna origen.
    {
        cO--;
    }
    if(cO < 0) cO = 0;  // Asegura que no se salga del rango.

    while(cD >= 0 && tab[col*filDest+cD] == 0)  // Encuentra la primera posición vacía en la columna destino.
    {
        cD--;
    }

    tab[col*filDest+cD+1] = tab[col*filOrig+cO];    // Mueve el disco de la columna origen a la destino.
    tab[col*filOrig+cO] = 0;    // Vacía la posición original.

    imprime(tab, fil, col, ultNum); // Imprime el tablero actualizado.
}

void hanoi(int *tab, int fil, int col, int disc, int ultNum, int O, int A, int D)   // Implementa la recursión para resolver el problema de las Torres de Hanói.
{
    if(disc == 1)   // Caso base: mover un solo disco.
    {
        system("cls");  // Limpia la pantalla.
        mueveDisco(tab, fil, col, ultNum, O, D);    // Mueve el disco de origen a destino.

        if(col <= 5) delay(4);  // Ajusta el tiempo de espera según la cantidad de discos.
        else if(col <= 10) delay(3);
        else if(col <= 15) delay(2);
        else if(col > 15) delay(1);
    }
    else    // Mueve discos mayores y menores.
    {
        hanoi(tab, fil, col, disc-1, ultNum, O, D, A);  // Mueve los discos superiores a auxiliar.

        system("cls");  // Limpia la pantalla.
        mueveDisco(tab, fil, col, ultNum, O, D);    // Mueve el disco más grande a destino.

        if(col <= 5) delay(4);  // Ajusta el tiempo de espera según la cantidad de discos.
        else if(col <= 10) delay(3);
        else if(col <= 15) delay(2);
        else if(col > 15) delay(1);

        hanoi(tab, fil, col, disc-1, ultNum, A, O, D);  // Mueve los discos superiores desde auxiliar a destino.
    }
}

void delay(int tiempo)  // Función para introducir una pausa en la ejecución.
{
    int c, d;   // Variables para los bucles.
    while(tiempo >= 0)
    {
        for(c = 1; c <= 10000; c++) // Bucle anidado para crear un retardo.
            for(d = 1; d <= 10000; d++) {}

        tiempo--;   // Reduce el tiempo restante.
    }
}

main()
{
    int fil = 3, col, *tablero = NULL;  // Inicializa el número de torres, discos y el puntero del tablero.
    int f, c, disc = 1, ultNum; // Variables auxiliares para filas, columnas y discos.

    printf("Indique el numero de discos: ");    // Solicita el número de discos al usuario.
    scanf("%i", &col);  // Lee la cantidad de discos.

    tablero = (int *)malloc(sizeof(int) * fil * col);   // Reserva memoria para el tablero.

    for(f = 0; f < fil; f++)    // Inicializa el tablero con los discos en la primera torre.
        for(c = col-1; c >= 0; c--)
            if(f == 0)
            {
                tablero[col*f+c] = disc;    // Asigna el tamaño del disco.
                disc += 2;  // Incrementa el tamaño del siguiente disco.
            }
            else
                tablero[col*f+c] = 0;   // Inicializa las torres vacías.

    ultNum = disc;  // Guarda el tamaño del disco más grande.

    system("cls");  // Limpia la pantalla.
    imprime(tablero, fil, col, ultNum); // Imprime el estado inicial del tablero.
    delay(6);   // Pausa inicial.

    hanoi(tablero, fil, col, col, ultNum, 0, 1, 2); // Llama a la función recursiva para resolver las Torres de Hanói.
}
