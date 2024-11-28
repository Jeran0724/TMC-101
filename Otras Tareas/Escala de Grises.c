#include <stdio.h>  // Biblioteca estándar de entrada/salida.
#include <stdlib.h> // Biblioteca estándar para funciones como system().
#pragma pack(push, 1)   // Desactiva el padding automático.


typedef struct  // Definición de la estructura para el encabezado del archivo BMP.
{
    unsigned char  bfType[2];   // Identificador del archivo, debe ser "BM" en formato BMP.
    unsigned int   bfSize;  // Tamaño total del archivo en bytes.
    unsigned short bfReserved1; // Campo reservado.
    unsigned short bfReserved2; // Campo reservado.
    unsigned int   bfOffBits;   // Posición donde comienzan los datos de la imagen.
}

BITMAPFILEHEADER;   // Encabezado del archivo BMP.

typedef struct  // Definición de la estructura para el encabezado de información del BMP.
{
    unsigned int   biSize;  // Tamaño del encabezado de información.
    int            biWidth; // Ancho de la imagen en píxeles.
    int            biHeight;    // Alto de la imagen en píxeles.
    unsigned short biPlanes;    // Número de planos, siempre 1.
    unsigned short biBitCount;  // Bits por píxel.
    unsigned int   biCompression;   // Tipo de compresión.
    unsigned int   biSizeImage; // Tamaño en bytes de los datos de la imagen.
    int            biXPelsPerMeter; // Resolución horizontal en píxeles por metro.
    int            biYPelsPerMeter; // Resolución vertical en píxeles por metro.
    unsigned int   biClrUsed;   // Número de colores en la paleta.
    unsigned int   biClrImportant;  // Número de colores importantes.
}

BITMAPINFOHEADER;   //// Encabezado de información del BMP.

#pragma pack(pop)   // Restaura la alineación predeterminada.

unsigned char convertirAGris(unsigned char b, unsigned char g, unsigned char r) // Convierte un píxel en formato BGR a escala de grises.
{
    return (unsigned char)(0.3 * r + 0.59 * g + 0.11 * b);  // Calcula el valor de gris.
}

void convertirBMPBlancoNegro(const char *input_filename, const char *output_filename)   // Convierte una imagen BMP a escala de grises.
{
    FILE *input_file = fopen(input_filename, "rb"); // Abre el archivo de entrada en modo binario.
    if (input_file == NULL) // Verifica si se pudo abrir el archivo.
    {
        fprintf(stderr, "No se puede abrir el archivo %s\n", input_filename);
        return; // Sale de la función si ocurre un error.
    }

    BITMAPFILEHEADER fileHeader;    // Lee el encabezado del archivo BMP.
    fread(&fileHeader, sizeof(BITMAPFILEHEADER), 1, input_file); // Copia el encabezado al struct.

    BITMAPINFOHEADER infoHeader;    // Lee el encabezado de información del BMP.
    fread(&infoHeader, sizeof(BITMAPINFOHEADER), 1, input_file); // Copia la información al struct.

    if (fileHeader.bfType[0] != 'B' || fileHeader.bfType[1] != 'M' || infoHeader.biBitCount != 24)  // Verifica si el archivo es un BMP de 24 bits.
    {
        fprintf(stderr, "El archivo no es un BMP de 24 bits\n");    // Mensaje da error si no cumple con el formato.
        fclose(input_file); // Cierra el archivo de entrada.
        return;
    }

    FILE *output_file = fopen(output_filename, "wb");   // Crea el archivo de salida en modo binario.
    if (output_file == NULL) // Verifica si se pudo crear el archivo.
    {
        fprintf(stderr, "No se puede crear el archivo %s\n", output_filename);
        fclose(input_file); // Cierra el archivo de entrada.
        return;
    }

    fwrite(&fileHeader, sizeof(BITMAPFILEHEADER), 1, output_file); // Copia el encabezado del archivo.
    fwrite(&infoHeader, sizeof(BITMAPINFOHEADER), 1, output_file); // Copia el encabezado de información.

    int padding = (4 - (infoHeader.biWidth * 3) % 4) % 4; // Cada fila debe ser múltiplo de 4 bytes.

    for (int i = 0; i < infoHeader.biHeight; i++)   // Itera por cada fila.
    {
        for (int j = 0; j < infoHeader.biWidth; j++)    // Itera por cada píxel en la fila.
        {
            unsigned char bgr[3];   // Buffer para almacenar un píxel (B, G, R).
            fread(bgr, 3, 1, input_file);   // Lee un píxel del archivo de entrada.

            unsigned char gris = convertirAGris(bgr[0], bgr[1], bgr[2]);    // Convierte el píxel a escala de grises.

            unsigned char gris_pixel[3] = {gris, gris, gris};   // Crea un píxel gris en formato BGR.
            fwrite(gris_pixel, 3, 1, output_file); // Escribe el píxel gris en el archivo de salida.
        }

        fseek(input_file, padding, SEEK_CUR);   // Salta el padding en el archivo de entrada.

        unsigned char padding_bytes[3] = {0, 0, 0}; // Máximo de 3 bytes de relleno.
        fwrite(padding_bytes, padding, 1, output_file); // Escribe el relleno en el archivo de salida.
    }

    fclose(input_file); // Cierra los archivos de entrada y salida.
    fclose(output_file);

    printf("Imagen convertida a blanco y negro y guardada en %s\n", output_filename);   // Imprime un mensaje indicando que el archivo fue procesado exitosamente.
}

int main(int argc, char *argv[])    // Función principal del programa.
{
    const char *archivo_entrada = "avion.bmp";  // Nombre del archivo de entrada y salida.
    const char *archivo_salida = "avion_bn.bmp";

    convertirBMPBlancoNegro(archivo_entrada, archivo_salida);   // Llama a la función para convertir la imagen.

    return 0; // Termina el programa.
}
