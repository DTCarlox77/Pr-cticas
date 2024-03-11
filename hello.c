# include <stdio.h>

int suma(int a, int b) {
    return a + b;
}

int main() {
    int a, b;
    printf("Ingresa tu valor de A: \n");
    scanf("%d", &a);
    printf("Ingresa tu valor de B: \n");
    scanf("%d", &b);

    int respuesta = suma(a, b);
    printf("La respuesta es: %d\n", respuesta);

    int arreglo[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) {
        printf("%d\n", arreglo[i]);
    }

    return 0;
}