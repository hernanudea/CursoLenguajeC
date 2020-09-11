#include <stdio.h>
#include <string.h>

int main(){
    char * name = "Samu y Mati, son dos bebes";
    printf("Nombre = %s, %p\n", name, name);
    // el segundo name imprime la dirección de memoria del primer caracter
    int i;
    for (i=0; i < strlen(name); i++){
        printf("name[%d](%p) = %c\n", i, name + i, *(name+i));
        // * desreferenciado
    }

    int j;
    for (j=0; j < strlen(name); j++){
        printf("name[%d](%p) = %c\n", j, name + j, name[j]);
    }
    return 0;
}