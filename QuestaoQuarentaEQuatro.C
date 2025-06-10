#include <stdio.h>

int main() {
    float num1, num2, num3, maior, menor, interm;
    
printf("Insira qualquer valor (não inteiro): \n");
 scanf("%f", &num1);
 
printf("Insira outro valor qualquer: \n");
 scanf("%f", &num2);
 
printf("Por fim insira um ultimo número: \n");
 scanf("%f", &num3);
 
  if (num1 >= num2 && num1 >= num3) {
        maior = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        maior = num2;
    } else {
        maior = num3;
    }

 if (num1 <= num2 && num1 <= num3) {
        menor = num1;
    } else if (num2 <= num1 && num2 <= num3) {
        menor = num2;
    } else {
        menor = num3;
    }
    
if ((num1 > menor && num1 < maior) || (num1 < maior && num1 > menor)) {
        interm = num1;
    } else if ((num2 > menor && num2 < maior) || (num2 < maior && num2 > menor)) {
        interm = num2;
    } else {
        interm = num3;
    }
 
 printf("O maior número é: %f\n", maior);
    printf("O menor número é: %f\n", menor);
    printf("O número intermediário é: %f\n", interm); 
 

    return 0;
}
