#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero inteiro maior que 0: \n");
        scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    return 0;
}