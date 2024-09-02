#include <stdio.h>

int main() {
    int n;

    
    do {
        printf("Digite um valor inteiro maior que 0: ");
            scanf("%d", &n);

        if (n <= 0) {
            printf("Valor invalido! O valor deve ser maior que 0.\n");
        }
    } while (n <= 0);

    
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
