#include <stdio.h>

int main() {

    int *punt, num;

    num = 10;

    punt = &num;

    printf("1)- El contenido del puntero : %d ",*punt);

    printf("\n2)- La direccion de memoria almacenada por el puntero : %d ",punt);

    printf("\n3)- La direccion de memoria de la variable : %d ",&num);

    printf("\n4)- La direccion de memoria del puntero : %d ",&punt);

    int valor = sizeof(num);

    printf("\n5)- El tamaño de memoria utilizado por esa variable usando la funcion sizeof() : %d ",valor);

    return 0;
}
