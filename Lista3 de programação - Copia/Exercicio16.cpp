#include <stdio.h>

int main() {
    int mercadoria;
    float mercadoria$, soma, media;

    soma = 0.0;
    
    printf("Digite o número total de mercadorias no estoque: ");
        scanf("%d", &mercadoria);

    
    if (mercadoria <= 0) {
        printf("Número invalido de mercadorias. Deve ser maior que 0.\n");
        return 1; 
    }

    
    for (int i = 1; i <= mercadoria; i++) {
        printf("Digite o valor da mercadoria %d: ", i);
        scanf("%f", &mercadoria$);
        soma += mercadoria$; 
    }

    
    media = soma / mercadoria;

    
    printf("O valor total em estoque é: %.2f\n", soma);
    printf("A média de valor das mercadorias é: %.2f\n", media);

    return 0;
}
