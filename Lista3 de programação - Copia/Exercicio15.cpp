#include <stdio.h>

int main() {
    int soma = 0;
    int count = 0;
    float media;

    
    for (int i = 15; i <= 100; i++) {
        soma += i;
        count++;
    }

   
    media = (float)soma / count;

    
    printf("A media aritmética dos numeros entre 15 e 100 e: %.2f\n", media);

    return 0;
}
