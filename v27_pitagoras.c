#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, const char *argv[]) {
    int a, b;
    a = atoi(argv[1]);
    b = atoi(argv[2]);

    double h = sqrt(pow(a, 2) + pow(b, 2));

    printf("La hipotenusa mide: %.2f.\n", h);

    return 0;
}
