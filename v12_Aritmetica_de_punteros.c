#include <stdio.h>

int main(){
    int n = 5;
    int * pn = &n;
    char c = 'A';
    char * pc = &c;
    printf("Antes del ingremento pn = %p y pc = %p.\n", pn, pc);

    // cada posición copada por pn ocupa 4 bits, que es el tamaño de un entero
    pn++;

    // cada posición copada por pc ocupa 1 bit, que es el tamaño de un caracter
    pc++;

    printf("Despues del ingremento pn = %p y pc = %p.\n", pn, pc);
}