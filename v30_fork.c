#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, const char *argv[]) {

    int pid = fork(); //crea un nuevo proceso que en principio ejecuta el mismo codigo del padre

    if (pid) {
        printf("Luke I am your father. My PID is %d and your PID is %d\n", getpid(), pid);
    }else{
        printf("I an Luke. My PID is %d\n", getpid());
    }

    while (1); // ciclo infinito

    return 0;

}
