//Elabore um programa que pergunte um valor em graus Fahrenheit e imprima
//no vídeo o correspondente em graus Celsius usando as fórmulas que seguem.

  #include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (5.0 / 9.0) * (fahrenheit - 32);

    printf("A temperatura em Celsius é: %.2f\n", celsius);

    return 0;
}
