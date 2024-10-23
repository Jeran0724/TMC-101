#include <stdio.h>

void main (void)
{
    char p1, p2, p3 = '$';

     printf ("\nIngrese un Caracter: ");
     p1 = getchar();
     putchar (p1);
     printf ("\n");

     printf ("\nIngrese otro Caracter: ");
     fflush(stdin);
     scanf ("%c", &p2);
     printf ("%c", p2);

     fflush (stdin);
     printf ("\nEl caracter p3 es: ");
     putchar (p3);
     printf ("\n");

     if (p1>=65 && p1<=90 && p2>=65 && p2<=90)
     {
         p1= p1+32;
         p2= p2+32;
     }

     else
     {
         p1 = p1-32;
         p2 = p2-32;
     }

     printf ("\nEl Caracter p1 Termina Siendo: ");
     putchar (p1);
     printf ("\n");

     printf ("\nEl Caracter p2 Termina Siendo: ");
     putchar (p2);
     printf ("\n");
}
