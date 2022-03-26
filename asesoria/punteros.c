#include <stdio.h>

int myVar = 3;
float myFloat = 3.1416;

int main () {
    printf("%d\n", myVar);
    // operadores de memoria (&[name: appers_and, español: 'la direcion de'], *[name: asterisco, español: el valor de la direcion de]  )
    printf("%p \n", &myVar);
    printf("%p \n", &myFloat);
    
    // type (*): int* intPtr,  float* floatPtr -- Crear un puntero 
    int* myVarAddress;
    myVarAddress = &myVar;

    printf("....  %p \n", myVarAddress);

    return 0;
}