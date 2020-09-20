#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100

typedef char NAME[N];
typedef char EMAIL[N];

typedef struct {
    NAME name;
    EMAIL email;
} CONTACT;


int main(int argc, char *argv[]) {
    CONTACT *list = NULL;
    char buffer[N];
    int listSize = 0;

    do {
        printf("Ingresa el nombre del nuevo contacto (o cero (0) para salir):\n");
        scanf("%99s", buffer);
        if (!strcmp("0", buffer) == 0) {
            if (!list) {
                list = malloc(sizeof(CONTACT)); // guarda la memoria para un dato nuevo si la lista está vacia
            } else {
                list = realloc(list, sizeof(CONTACT) * (listSize + 1)); // guarda memoria para un elemento mas en la lista
            }
            strcpy(list[listSize].name, buffer);
            printf("Ingrese el E-mail de %s:\n", buffer);
            scanf("%99s", buffer);
            strcpy(list[listSize].email, buffer);
            listSize++;
        }
    } while (strcmp("0", buffer));

    printf("\nEsta es tu lista de contactos:\n");
    printf("Nombre\t\tEmail\n");

    for (int i = 0; i < listSize; i++) {
        printf("%s\t\t%s\n", list[i].name, list[i].email);
    }
    free(list); // liberamos la memoria
    return 0;
}