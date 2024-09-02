#include <stdio.h>

int main() {
    int valor;

  
    do {
        printf("Digite um valor entre 1 e 10: ");
            scanf("%d", &valor);

        if (valor < 1 || valor > 10) {
            printf("Valor invalido! O valor deve estar entre 1 e 10.\n");
        }
    } while (valor < 1 || valor > 10);

   
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", valor, i, valor * i);
    }

    return 0;
}