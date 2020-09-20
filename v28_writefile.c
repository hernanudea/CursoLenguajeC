#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, const char *argv[]) {
    FILE *out;
    char buffer[100];

    if (!(out = fopen(argv[1], "w"))) {
        printf("No puedo escribir el archivo %s.\n", argv[1]);
    }

    do {
        printf("Ingresa una palabrota:");
        scanf("%99s", buffer);
        fputs(buffer, out);
        fputs("\n", out);
        printf("Palabra grabada!, quieres grabar otra? (s/n)");
        scanf("%1s", buffer);
    } while (buffer[0] != 'n');

    fclose(out);

    printf("\n");

    return 0;
}
