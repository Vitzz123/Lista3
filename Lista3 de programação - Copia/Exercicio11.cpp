#include <stdio.h>

int main() {
    int n;
 
        do {
            printf("Digite um numero inteiro maior que 0: \n");
                scanf("%d", &n);

            if (n <= 0) {
                printf("Numero invalido! N deve ser maior que ZERO.\n");
            }
        } while (n <= 0);

    
    for (int i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    return 0;
}