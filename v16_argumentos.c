#include <stdio.h>

int main(int argc, char *argv[]){
    printf("\nCantidad de argumentos = %d.\n", argc);
    for (int i=0; i < argc; i++){
        printf("Argumento indice [%d] = [%s].\n", i, argv[i]);
    }
    printf("Fin del programa.\n\n");
    return 0;
}

