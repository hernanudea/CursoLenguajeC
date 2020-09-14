#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100


int main(int argc, char *argv[]){
    printf("\nCantidad de argumentos = %d.\n", argc);

    struct {
        char name[N];
        int age;
    } person;

    if (argc != 3){
        printf("Por favor indique nombre y edad\n\n");
        return 1;
    }

    if (strlen(argv[1]) < N ) {
        strcpy(person.name, argv[1]);
        person.age = atoi(argv[2]);
    }
    printf("La Persona es:\n\tNombre: %s\n\tEdad:   %d\n", person.name, person.age);
    printf("Fin del programa.\n\n");
    return 0;
}

