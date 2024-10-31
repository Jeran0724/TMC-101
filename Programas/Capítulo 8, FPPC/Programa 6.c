#include <stdio.h>
#include <string.h>

/* Comercializadora Farmacéutica.
El programa maneja informacion sobre ventas, inventario,
reabastecimineto y nuevos productos de una comercializadora
farmacéutica. */

typedef struct
{
    int clave;
    char nombre[15];
    float precio;
    int existencia;
}

producto;

void Lectura(producto *, int);
void Ventas(producto *, int);
void Reabastecimiento(producto *, int);
void Nuevos_Productos(producto *, int *);
void Inventario(producto *, int);

void main(void)
{
    producto INV[100];
    int TAM, OPE;
    do
    {
        printf("Ingrese el Número de Productos: ");
        scanf("%d", &TAM);
    }

    while (TAM > 100 || TAM < 1);

    Lectura(INV, TAM);
    printf("\nIngrese Pperación a Realizar. \n\t\t1 – Ventas \n\t\t 2 – Reabastecimiento \n\t\t 3 - Nuevos Productos \n\t\t 4 – Inventario \n\t\t 0 - Salir: ");
    scanf("%d", &OPE);

    while (OPE)
    {
        switch (OPE)
        {
            case 1: Ventas(INV, TAM); break;
            case 2: Reabastecimiento(INV, TAM); break;
            case 3: Nuevos_Productos(INV, &TAM); break;
            case 4: Inventario(INV, TAM); break;
        };

        printf("\nIngrese Operación a Realizar. \n\t\t1 – Ventas \n\t\t 2 – Reabastecimiento \n\t\t 3 - Nuevos Productos \n\t\t 4 – Inventario \n\t\t 0 - Salir: ");
        scanf("%d", &OPE);
    }
}

void Lectura(producto A[], int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("\nIngrese Información del Producto %d", I + 1);
        printf("\n\tClave: ");
        scanf("%d", &A[I].clave);
        fflush(stdin);
        printf("\tNombre:");
        gets(A[I].nombre);
        printf("\tPrecio:");
        scanf("%f", &A[I].precio);
        printf("\tExistencia: ");
        scanf("%d", &A[I].existencia);
    }
}

void Ventas(producto A[], int T)
{
    int CLA, CAN, I, RES;
    float TOT, PAR;
    printf("\nIngrese Clave del Producto -0 para salir-: ");
    scanf("%d", &CLA);
    TOT = 0.0;

    while (CLA)
    {
        printf("\tCantidad: ");
        scanf("%d", &CAN);
        I = 0;

        while ((I < T) && (A[I].clave < CLA))
            I++;

        if ((I == T) || (A[I].clave > CLA))
            printf("\nLa Clave del Producto es Incorrecta");
        else if (A[I].existencia >= CAN)
        {
            A[I].existencia -= CAN;
            PAR = A[I].precio * CAN;
            TOT += PAR;
        }

        else
        {
            printf("\nNo Existe en Inventario la Cantidad Solicitada. Solo Hay %d", A[I].existencia);
            printf(" \nLos Lleva 1 - Si 0 – No?: ");
            scanf("%d", &RES);

            if (RES)
            {
                PAR = A[I].precio * A[I].existencia;
                A[I].existencia = 0;
                TOT += PAR;
            }
        }

        printf("\nIngrese la Siguiente Clave del Producto -0 para salir-:");
        scanf("%d", &CLA);
    }
    printf("\nTotal de la Venta: %f", TOT);
}

void Reabastecimiento(producto A[], int T)
{
    int CLA, CAN, I;
    printf("\nIngrese Clave del Producto -0 para salir-: ");
    scanf("%d", &CLA);

    while (CLA)
    {
        I = 0;
        while ((I < T) && (A[I].clave < CLA))
            I++;

        if ((I == T) || (A[I].clave > CLA))
            printf("\nLa clave del Producto Ingresada es Incorrecta");
        else
        {
            printf("\tCantidad: ");
            scanf("%d", &CAN);
            A[I].existencia += CAN;
        }

        printf("\nIngrese Ptra Clave del Producto -0 para salir-: ");
        scanf("%d", &CLA);
    }
}

void Nuevos_Productos(producto A[], int *T)
{
    int CLA, I, J;
    printf("\nIngrese Clave del Producto -0 para salir-: ");
    scanf("%d", &CLA);

    while ((*T < 30) && (CLA))
    {
        I = 0;

        while ((I < *T) && (A[I].clave < CLA))
            I++;

        if (I == *T)
        {
            A[I].clave = CLA;
            printf("\tNombre:");
            fflush(stdin);
            gets(A[I].nombre);
            printf("\tPrecio:");
            scanf("%f", &A[I].precio);
            printf("\tCantidad: ");
            scanf("%d", &A[I].existencia);
            *T = *T + 1;
        }

        else if (A[I].clave == CLA)
        {
            printf("\nEl Producto ya se Encuentra en el Inventario");
        }
        else
        {
            for (J = *T; J > I; J--)
                A[J] = A[J - 1];

            A[I].clave = CLA;
            printf("\tNombre:");
            fflush(stdin);
            gets(A[I].nombre);
            printf("\tPrecio:");
            scanf("%f", &A[I].precio);
            printf("\tCantidad: ");
            scanf("%d", &A[I].existencia);
            *T = *T + 1;
        }

        printf("\nIngrese Otra Clave de Producto -0 para salir-: ");
        scanf("%d", &CLA);
    }

    if (*T == 30)
        printf("\nYa No Hay Espacio para Incorporar Nuevos Productos");
}

void Inventario(producto A[], int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("\nClave: %d", A[I].clave);
        printf("\tNombre: %s", A[I].nombre);
        printf("\tPrecio: %d", A[I].precio);
        printf("\tExistencia: %d \n", A[I].existencia);
    }
}
