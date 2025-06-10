#include <stdio.h>

int main(void) {
    float n1, n2, total, simbol;
    
    printf("Mini Calculadora escolha dois números e a operação que deseja realizar \n\n");
    printf("Insira o primeiro número: \n");
     scanf("%f", &n1);
    printf("Insira o segundo número: \n");
     scanf("%f", &n2);
     
     printf("Agora escolha a operação: \n 1-Soma\n 2-Subtraçãp\n 3-Multiplicação \n 4-Divisão\n\n");
     scanf("%f", &simbol);
     
     
     if (simbol == 1){
     total = (n1 + n2);
     printf("\nO valor é = %f ", total);
     }
     if (simbol == 2){
     total = (n1 - n2);
     printf("\nO valor é = %f ", total);
     }
     if (simbol == 3){
     total = (n1 * n2);
     printf("\nO valor é = %f ", total);
     }
     if (simbol == 4){
     total = (n1 / n2);
     printf("\nO valor é = %f ", total);
     }
     
    return 0;
}
