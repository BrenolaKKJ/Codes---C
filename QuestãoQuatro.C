Crie um programa que calcule a média seis números inteiros digitados pelo
usuário.

#include <stdio.h>

int main() {
    float num1, num2, num3, num4, num5, num6, soma = 0.0;
printf("Insira o primeiro número: \n");
    scanf("%f", &num1);
printf("Insira o segundo número: \n");
    scanf("%f", &num2);
printf("Insira o terceiro número: \n");
    scanf("%f", &num3);
printf("Insira o quarto número: \n");
    scanf("%f", &num4);
printf("Insira o quinto número: \n");
    scanf("%f", &num5);
printf("Insira o sexto número: \n");
    scanf("%f", &num6);
    {
soma = ((num1 + num2 + num3 + num4 + num5 + num6)/6);
printf("Sua média é: %f", soma);
}

}
