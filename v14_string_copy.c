#include <stdio.h>
#include <string.h>

int main(){
    char * src = "Hernán Velásquez";
    char dst[] = "Nunca veras esto";

    strcpy(dst, src);
    printf("dst = %s\n", dst);

    return 0;
}