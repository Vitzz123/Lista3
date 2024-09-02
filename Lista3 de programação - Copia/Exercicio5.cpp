#include <stdio.h>

int main(){

    float N1, N2, Media;

   do {
        printf("Insira a nota da sua N1 (0 a 10): ");
            scanf("%f", &N1);

        if (N1 < 0 || N1 > 10) {
            printf("Nota invalida! A nota deve estar entre 0 e 10. \n");
        }
    } while (N1 < 0 || N1 > 10);

    do {
        printf("Insira a nota da sua N2 (0 a 10): ");
            scanf("%f", &N2);

        if (N2 < 0 || N2 > 10) {
            printf("Nota invalida! A nota deve estar entre 0 e 10. \n");
        }
    } while (N2 < 0 || N2 > 10);
    
    
    Media = (N1 + N2) / 2;

    printf("A média das notas e: %.2f\n", Media);
    


    
    
    return 0;


}