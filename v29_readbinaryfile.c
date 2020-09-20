#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person {
    char name[100];
    unsigned int age;
};

int main(int argc, const char *argv[]) {

    FILE *in;

    if (argc < 2){
        printf("Indique el nombre del archivo de entrada\n");
        return -1;
    }

    // Verificamos que el archivo pueda ser abierto
    if (!(in = fopen(argv[1], "r"))) {
        printf("No puedo leer el archivo %s.\n", argv[1]);
        return -2;
    }

   struct person p;

    while(fread(&p, sizeof(struct person), 1, in)){
        printf("%s tiene %d años.\n", p.name, p.age);
    }

    fclose(in);

    printf("\n");

    return 0;
}
