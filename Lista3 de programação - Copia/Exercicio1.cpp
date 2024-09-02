#include <stdio.h>

int main(){

    float a, b, total;

    printf("Digite seu primeiro numero: \n");
        scanf("%f", &a);

    printf("Digite seu segundo numero: \n");
        scanf("%f", &b);


    while (b == 0)
    {
        printf("Numero invalido, digite novamente: \n");
            scanf("%f", &b);
    }
    
    total = a/b;

    printf("Seu resultado foi %.2f", total);

    return 0;


}