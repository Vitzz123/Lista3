#include <stdio.h>

int main() {
    float mercadoria, media, soma;
    int contador = 0;
    char sim;

    soma = 0.0;

    
    do {
        printf("Digite o valor da mercadoria: ");
            scanf("%f", &mercadoria);

        soma += mercadoria;
        contador++;

        printf("MAIS MERCADORIAS (S/N)? ");
            scanf(" %c", &sim);

    } while (sim == 'S' || sim == 's');


    if (contador > 0) {
        media = (float)soma / contador;

        printf("O valor total em estoque é: %.2f\n", (float)soma);
        
        printf("A media de valor das mercadorias é: %.2f\n", media);
    
    
    } else {
        printf("Nenhuma mercadoria foi inserida.\n");
    }



    return 0;
}
