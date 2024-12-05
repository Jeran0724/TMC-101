#include <stdio.h>  //Para mostrar mensajes y leer datos.
#include <stdlib.h> //Manejar erroes como el cierre del programa.
#include <string.h> //trabajar con textos, para comparar nombres.

typedef struct  //Agrupación de datos.
{
    char nombre[50];    //Nombre con máximo de 50 caracteres.
    float promedio; //Permite promedio con decimal.
    char carrera[50];   //Nombre de carrera con máximo de 50 caracteres.
}

Alumno; //Las informaciones anteriores se guardan aquí temporalmente.

int main()  //Empieza el programa.
{
    Alumno alumno;  //Las informaciones anteriores se guardan aquí temporalmente.
    FILE *archivo;  //Puente entre el porgrama y el archivo del dispositivo.
    char nombreArchivo[50]; //Nombre de archivo nuevo con máximo de 50 caracteres.
    int opcion; //Se guardan las opciones del menú elegidas por el usuario.
    char buscarNombre[50];  //Nombre del alumno que se desea buscar.
    int encontrado = 0; //Para saber si el alumno que se busca se encontró.

    do  //Empieza el buble.
    {
        printf("\n--- Menu ---\n"); //Se imprime el menú y sus opciones.
        printf("1. Crear Archivo\n");   //Se imprime el menú y sus opciones.
        printf("2. Agregar Alumno\n");  //Se imprime el menú y sus opciones.
        printf("3. Buscar Alumno\n");   //Se imprime el menú y sus opciones.
        printf("4. Mostrar Todos\n");   //Se imprime el menú y sus opciones.
        printf("5. Salir\n");   //Se imprime el menú y sus opciones.
        printf("Elija una Opcion: ");   //Se solicita información al usuario.
        scanf("%d", &opcion);   //Información anterior guardada aquí.

        if (opcion == 1)    //Si se elige la opción 1.
        {
            printf("Nombre del Archivo: "); //Se solicita información al usuario.
            scanf("%s", nombreArchivo); //Información anterior guardada aquí.
            archivo = fopen(nombreArchivo, "wb");   //Abre o crea un archivo.

            if (archivo != NULL)    //Si es diferente a NULL (nada).
            {
                printf("Archivo Creado.\n");    //Se imprime este mensaje.
                fclose(archivo);    //Cierra el archivo asegurando el guardado de los datos ingresados.
            }

            else    //Si es diferente a NULL (nada).
            {

                printf("Error al Crear Archivo.\n");    //...Imprime este mensaje.
            }
        }

        if (opcion == 2)    //Si se elige la opción 2.
        {
            printf("Nombre del Archivo: "); //Se solicita información al usuario.
            scanf("%s", nombreArchivo); //Información anterior guardada aquí.
            archivo = fopen(nombreArchivo, "ab");   //Abre el archivo para agregarle datos.

            if (archivo != NULL)    //Si es diferente a NULL (nada).
            {
                printf("Nombre del Alumno: ");  //Se solicita información al usuario.
                scanf("%s", alumno.nombre);//Información anterior guardada aquí.
                getchar();  //Salto de línea al presioner Enter.
                printf("Promedio: ");   //Se solicita información al usuario.
                scanf("%f", &alumno.promedio);  //Información anterior guardada aquí.
                getchar();  //Salto de línea al presioner Enter.
                printf("Carrera: ");    //Se solicita información al usuario.
                scanf("%s", alumno.carrera);    //Información anterior guardada aquí.
                getchar();  //Salto de línea al presioner Enter.
                fwrite(&alumno, sizeof(Alumno), 1, archivo);    //Los datos ingresados se guardan en un bloque (alumno) dentro del archivo.
                printf("Alumno Agregado.\n");   //Se imprime este mensaje.
                fclose(archivo);    //Cierra el archivo asegurando el guardado de los datos ingresados.
            }

            else    //De lo contrario...
            {
                printf("Error al Abrir Archivo.\n");    //...Imprime este mensaje.
            }
        }

        if (opcion == 3)    //Si se elige la opción 3.
        {
            printf("Nombre del Archivo: "); //Se solicita información al usuario.
            scanf("%s", nombreArchivo); //Información anterior guardada aquí.
            archivo = fopen(nombreArchivo, "rb");   //Abre en modo lectura el archivo.

            if (archivo != NULL)    //Si es diferente a NULL (nada).
            {
                printf("Nombre a Buscar: ");    //Se solicita información al usuario.
                scanf("%s", buscarNombre);  //Información anterior guardada aquí.

                while (fread(&alumno, sizeof(Alumno), 1, archivo))  //Mientras lee los datos ingresados.
                {
                    if (strcmp(alumno.nombre, buscarNombre) == 0)   //Compara el nombre del alumno con el nombre ingresado.
                    {
                        printf("Alumno Encontrado: %s, %.2f, %s\n", alumno.nombre, alumno.promedio, alumno.carrera);    //Se imprime la información de dicho alumno.
                        encontrado = 1; //Indica que encontró al alumno.
                        break;  //la búsqueda puede detenerse.
                    }
                }

                if (!encontrado)    //De no encontrar al alumno...
                {
                    printf("No Encontrado.\n"); //...Imprime este mensaje.
                }

                fclose(archivo);    //Cierra el archivo.

            }

            else    //De lo contrario...
            {
                printf("Error al Abrir Archivo.\n");    //...Imprime este mensaje.
            }
        }

        if (opcion == 4)    //Si se elige la opción 4.
        {
            printf("Nombre del Archivo: "); //Se solicita información al usuario.
            scanf("%s", nombreArchivo); //Información anterior guardada aquí.
            archivo = fopen(nombreArchivo, "rb");   //Abre en modo lectura el archivo.

            if (archivo != NULL)    //Si es diferente a NULL (nada).
            {
                while (fread(&alumno, sizeof(Alumno), 1, archivo))  //Mientras lee los datos ingresados.
                {
                    printf("Alumno: %s, %.2f, %s\n", alumno.nombre, alumno.promedio, alumno.carrera);   //Imprime todas las informaciones de todos los alumnos.
                }

                fclose(archivo);    //Cierra el archivo.

            }

            else    //De lo contrario...
            {
                printf("Error al Abrir Archivo.\n");    //...Imprime este mensaje.
            }
        }
    }

    while (opcion != 5);    //El programa corre mientras opción sea diferente a 5.

    return 0;   //Finaliza el programa.
}
