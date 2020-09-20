#include<stdio.h>
#include<stdlib.h>

// https://raw.githubusercontent.com/mchojrin/platzi_curso_c_clases/2b66b7e0178c0ae13c9434e3bf9eb08a8aad0434/linked_list.c


typedef struct Node {
    int number;
    struct Node * next;
} NODE;

NODE * createNode( intnumber )
{
    NODE * newNode;

    newNode = malloc( sizeof(NODE) );
    newNode->next = NULL;
    newNode->number = number;

    return newNode;
}

void printList(NODE *start){
    NODE * current = start;
    int point=1;
    current ? printf( "La lista contiene los numeros: \n" ):
    printf( "La lista esta vacia \n" );
    while (current) {
        printf( "%d: %d \n", point++, current->number );
        current = current->next;
    }
    printf("\n");
}

int main( int argc, const char * arg[] )
{
    NODE * start = NULL, * current, *next;
    char goOn;
    int listSize = 0, number;

    do {
        printf( "La lista contiene %d nodos. Ingrese el siguiente numero (0 para finalizar)\n", listSize );
        scanf("%d", &number );
        if ( number ) {
            if ( !start ) {
                start = createNode( number );
                listSize++;
            } else {
                current = start;
                while ( current->next ) {
                    current = current->next;
                }
                current->next = createNode( number );
                listSize++;
            }
            goOn = 1;
        } else {
            goOn = 0;
        }
    } while ( goOn );

    printList(start);
    int count=1;
    do {
        printf( "Ingrese la posicion que desea eliminar, (0 para finalizar) \n" );
        scanf("%d", &number );
        if ( number ) {
            if(start){
                current = start;
                if ( number == 1 ) {
                    start = current->next;
                    free( current );
                } else {
                    count=1;
                    while(current->next){
                        count++;
                        if(number == count){
                            if(current->next->next){
                                next = current->next->next;
                                free(current->next);
                                current->next = next;
                            }else{
                                next =current->next;
                                free(next);
                                current->next = NULL;
                                break;
                            }

                        }
                        current = current->next;

                    }
                    if(number > count){
                        printf("posicion %d no existe \n", number);
                        printf("numero maximo = %d  \n",count);

                    }
                }
                printList(start);
                goOn = 1;
            }else{
                printList(start);
            }

        } else {
            goOn = 0;
        }

    } while ( goOn );

    current = start;
    while (current) {
        next = current->next;
        free( current );
        current = next;
    }

    return 0;
}