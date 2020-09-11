#include <stdio.h>

int main(){
    int number; // defino la variable
    int * pointerToNumber = &number; // defino el puntero y le asigno la dirección de la variable

    printf("%p, %d\n", pointerToNumber, *pointerToNumber);

}
