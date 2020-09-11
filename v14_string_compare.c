#include <stdio.h>
#include <string.h>

int main(){
    char * name = "Hernán Velásquez";
    char * otherName = "Hernán Velásquez";

    //string compare
    // Retorna 0 si son iguales
    // - 1 si la primera es mejor
    // 1 si la segunda es mejor
    printf("Los nombres son %s\n", strcmp(name, otherName) == 0 ? "Iguales" : "Diferentes");

    return 0;
}