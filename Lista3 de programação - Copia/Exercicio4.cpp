#include <stdio.h>

int main(){

    float a, b, total;

    printf("Digite seu primeiro numero: \n");
        scanf("%f", &a);

    do
    {
        printf("Digite seu segundo numero: \n");
        scanf("%f", &b);
    
        if (b==0)
        {
            printf("VALOR INVALIDO: \n");
            scanf("%f", &b);
        }
        
    
    } while (b==0);
    
total = a/b;

    printf("Seu resultado foi %.2f", total);

    return 0;


}