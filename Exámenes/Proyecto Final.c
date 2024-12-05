#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nombre[50];
    float promedio;
    char carrera[50];
}

Alumno;

int main()
{
    Alumno alumno;
    FILE *archivo;
    char nombreArchivo[50];
    int opcion;
    char buscarNombre[50];
    int encontrado = 0;

    do
    {
        printf("\n--- Menu ---\n");
        printf("1. Crear Archivo\n");
        printf("2. Agregar Alumno\n");
        printf("3. Buscar Alumno\n");
        printf("4. Mostrar Todos\n");
        printf("5. Salir\n");
        printf("Elija una Opcion: ");
        scanf("%d", &opcion);

        if (opcion == 1)
        {
            printf("Nombre del Archivo: ");
            scanf("%s", nombreArchivo);
            archivo = fopen(nombreArchivo, "wb");

            if (archivo != NULL)
            {
                printf("Archivo Creado.\n");
                fclose(archivo);
            }

            else
            {

                printf("Error al Crear Archivo.\n");
            }
        }

        if (opcion == 2)
        {
            printf("Nombre del Archivo: ");
            scanf("%s", nombreArchivo);
            archivo = fopen(nombreArchivo, "ab");

            if (archivo != NULL)
            {
                printf("Nombre del Alumno: ");
                scanf("%s", alumno.nombre);
                printf("Promedio: ");
                scanf("%f", &alumno.promedio);
                printf("Carrera: ");
                scanf("%s", alumno.carrera);
                fwrite(&alumno, sizeof(Alumno), 1, archivo);
                printf("Alumno Agregado.\n");
                fclose(archivo);
            }

            else
            {
                printf("Error al Abrir Archivo.\n");
            }
        }

        if (opcion == 3)
        {
            printf("Nombre del Archivo: ");
            scanf("%s", nombreArchivo);
            archivo = fopen(nombreArchivo, "rb");

            if (archivo != NULL)
            {
                printf("Nombre a Buscar: ");
                scanf("%s", buscarNombre);

                while (fread(&alumno, sizeof(Alumno), 1, archivo))
                {
                    if (strcmp(alumno.nombre, buscarNombre) == 0)
                    {
                        printf("Alumno Encontrado: %s, %.2f, %s\n", alumno.nombre, alumno.promedio, alumno.carrera);
                        encontrado = 1;
                        break;
                    }
                }

                if (!encontrado)
                {
                    printf("No Encontrado.\n");
                }

                fclose(archivo);

            }

            else
            {
                printf("Error al Abrir Archivo.\n");
            }
        }

        if (opcion == 4)
        {
            printf("Nombre del Archivo: ");
            scanf("%s", nombreArchivo);
            archivo = fopen(nombreArchivo, "rb");

            if (archivo != NULL)
            {
                while (fread(&alumno, sizeof(Alumno), 1, archivo))
                {
                    printf("Alumno: %s, %.2f, %s\n", alumno.nombre, alumno.promedio, alumno.carrera);
                }

                fclose(archivo);

            }

            else
            {
                printf("Error al Abrir Archivo.\n");
            }
        }
    }

    while (opcion != 5);

    return 0;
}
