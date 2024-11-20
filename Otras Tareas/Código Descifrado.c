#include <stdio.h>  // Biblioteca estándar de entrada/salida.
#include <stdlib.h> // Biblioteca estándar para funciones como system().
#include <string.h> // Biblioteca para funciones relacionadas con cadenas de caracteres.

main() //32-126
{
    char frase[100];    // Arreglo para almacenar la frase a decifrar.
    int key;    // Variable para la clave de cifrado.
    int i, salto=0; // Variables para iterar y ajustar el resultado del descifrado.

    while(1)    // Bucle infinito para repetir el proceso continuamente.
    {
        system("cls");  // Limpia la pantalla.
        printf("Ingresa la frase a decifrar: ");    // Solicita la frase a decifrar.
        gets(frase);    // Lee la frase ingresada.

        do {
            printf("Inserisci la chiave di cifratura: ");   // Solicita la clave de cifrado.
            scanf("%d", &key);  // Lee la clave de cifrado como un número entero.
        } while(key < 1 || key > 10);   // Si la clave no está entre 1 y 10, repite la solicitud.

        printf("\n\n----------------------------------\nFrase decifrata:\n");   // Imprime el encabezado para la frase decifrada.

        for(i = 0; i < strlen(frase); i++, salto = 0)   // Recorre cada carácter de la frase.
        {
            if(frase[i] < 32 + key) // Si el carácter supera el límite ASCII después de sumar la clave, ajusta el valor de 'salto'.
            {
                salto = 95; // Ajusta el valor de 'salto'.
            }
            printf("%c", frase[i] - key + salto);   // Imprime el carácter descifrado.
        }

        printf("\n\n"); // Salto de línea después de imprimir la frase decodificada.
        system("pause");    // Pausa la ejecución y espera que el usuario presione una tecla.
    }
}
