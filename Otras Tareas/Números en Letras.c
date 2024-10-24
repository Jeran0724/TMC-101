#include <stdio.h>

int opcion = 0;
int nume = 0;
float numd = 0;
const float MAX = 10000;

void entero(int nume);
void decimal(float numd);
void centavo (int numc);
void menu();

void main ()
{
    while (1)
    {
        menu();

        if (opcion == 1)
        {
            printf ("\nInserte su Numero Entero (MAX = 10000): ");
            scanf ("%d", &nume);

            if (nume > MAX)
            {
                printf("\n\tError(Numero Mayor a MAX)\t\n", MAX);
            }
            else
            {
                entero(nume);
            }
        }

        else if (opcion == 2)
        {
            printf ("\nInserte su Numero con Decimal (MAX = 10000.00): ");
            scanf ("%f", &numd);

            if (numd > MAX)
            {
                printf("\n\tError(Numero Mayor a MAX)\t\n", MAX);
            }
            else
            {
                decimal(numd);
            }
        }

        else if (opcion == 3)
        {
            printf ("\n\tHa Salido del Programa\t\n");
            break;
        }

        else
        {
            printf ("\n\tOpcion No Valida\t\n");
        }
    }

    return 0;
}

void menu()
{
    printf ("\n\t Menu \t");
    printf ("\n1. Numeros Enteros a Letras.");
    printf ("\n2. Numeros con Decimales a Letras.");
    printf ("\n3. Salir.");
    printf ("\nSu Opcion Es: ", opcion);
    scanf ("%d", &opcion);
}

void entero(int nume)
{
    char *unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    char *decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
    char *centenas[] = {"", "cien", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};
    char *miles[] = {"", "mil"};

    int mil = nume / 1000;
    int centena = (nume % 1000) / 100;
    int decena = (nume % 100) / 10;
    int unidad = nume % 10;

    printf("\n\t%d en Letras es: \t\n", nume);

    if (mil > 0)
    {
        printf("%s ", miles[mil]);
    }

    if (centena > 0)
    {
        printf("%s ", centenas[centena]);
    }

    if (decena == 1 && unidad > 0)
    {
        printf("dieci%s ", unidades[unidad]);
    }
    else
    {
        if (decena > 0)
        {
            printf("%s ", decenas[decena]);
        }

        if (unidad > 0)
        {
            printf("%s ", unidades[unidad]);
        }
    }
}

void centavo (int numc)
{
    char *unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    char *decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};

    int decena = numc / 10;
    int unidad = numc % 10;

    if (decena == 1 && unidad > 0)
    {
        printf("dieci%s", unidades[unidad]);
    }
    else
    {
        if (decena > 0)
        {
            printf("%s", decenas[decena]);
        }

        if (unidad > 0)
        {
            printf("%s", unidades[unidad]);
        }
    }
}

void decimal(float numd)
{
    int enterod = (int)numd;
    int decimald = (int)((numd - enterod) * 100);

    printf("\n\t%.2f en Letras es: \t\n", numd);
    entero(enterod);
    printf(" con ");
    centavo(decimald);
    printf(" centavos\n");
}
