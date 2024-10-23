#include <stdio.h>

/* Declaración de Cadenas de caracteres y Asignación de Valores. */

void main (void)
{
    char *cad0;
    cad0 = "Argentina";
    puts (cad0);

    cad0 = "Brasil";    //Correcto

    char *cad1;
    gets (*cad1);
    gets (cad1);    //Incorrecto

    char *cad1 = "";
    gets(cad1); //Correcto

    char cad1[];    //Incorrecto

    char cad2[20] = "Mexico";
    puts(cad2);
    gets(cad2);
    puts(cad2); //Correcto

    cad2[10] = "Guatemala"; //Incorrecto
}
