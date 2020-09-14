#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100
typedef char NAME[N];
typedef int AGE;

struct PERSON {
    NAME name;
    AGE age;
};
void fillPersonData(struct PERSON *person, const char *name, int age);


void fillPersonData(struct PERSON *person, const char *name, int age){
    if (strlen(name) < N ) {
        // strcpy((*person).name, name); //otra forma de hacerlo
        strcpy(person->name, name); //aqui con arrow
        person->age = age;
    }
}


int main(int argc, char *argv[]){
    printf("\nCantidad de argumentos = %d.\n", argc);

    struct PERSON person;

    if (argc != 3){
        printf("Por favor indique nombre y edad\n\n");
        return 1;
    }

    fillPersonData(&person, argv[1], atoi(argv[2]));

    printf("La Persona es:\n\tNombre: %s\n\tEdad:   %d\n", person.name, person.age);
    printf("Fin del programa.\n\n");
    return 0;
}

