#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person {
    char name[100];
    unsigned int age;
};

int main(int argc, const char *argv[]) {

    FILE *out;
    char buffer[100];

    if (argc < 2){
        printf("Indique el nombre del archivo de salida\n");
        return -1;
    }

    // Verificamos que el archivo pueda ser abierto
    if (!(out = fopen(argv[1], "w"))) {
        printf("No puedo escribir el archivo %s.\n", argv[1]);
        return -2;
    }

   struct person p;

    do {
        printf("Ingrese el nombre de la persona:\n");
        scanf("%99s", p.name);
        printf("Ingrese la edad de la persona:\n");
        scanf("%d", &(p.age));
        //fwrite( escribe en binario)
        fwrite(&p, sizeof(struct person), 1, out);
        printf("Grabada!\tOtra? (s/n)");
        scanf("%1s", buffer);
    }while (buffer[0] != 'n');

    fclose(out);

    printf("\n");

    return 0;
}
