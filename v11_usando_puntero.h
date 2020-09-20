#include <stdio.h>

void duplicar(int * a){ // se convierte a en un puntero, creo un puntero
     *a *=2; // lo que está apundado por a se multiplica por 2
}

int main(){
    int a = 5; // se podria llamar de otra manera
    printf("Antes de duplicar a = %d\n", a);
    duplicar(&a); // enviamos la direccón de a
    printf("Despues de duplicar a = %d\n", a);
}