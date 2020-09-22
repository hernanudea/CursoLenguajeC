#include <stdio.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, const char *argv[]) {

    int shared; // la variable, gracxias al SO, tiene un contexto diferente, no se comparte entre procesos
    int pid = fork(); //crea un nuevo proceso que en principio ejecuta el mismo codigo del padre

    if (pid) {
        shared = 1;
        printf("Luke I am your father. My PID is %d and your PID is %d. Shared=%d\n", getpid(), pid, shared);
        wait(NULL); //espera que los hijos terminen
        printf("I am your father again. Shared=%d\n", shared);
    } else {
        shared = 0;
        printf("I an Luke. My PID is %d. Shared=%d\n", getpid(), shared);
        sleep(2);
    }

    return 0;

}
