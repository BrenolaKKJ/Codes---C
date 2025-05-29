//Fazer um programa que lê o preço de um produto e inflaciona esse preço em
//10% se ele for menor que 100 e em 20% se ele for maior ou igual a 100.

#include <stdio.h>

int main() {
    float preco;

    printf("Digite o preço do produto: ");
    scanf("%f", &preco);

    if (preco < 100) {
        preco = preco * 1.10;
    } else {
        preco = preco * 1.20; 
    }
    printf("O novo preço com inflação é: %.2f\n", preco);
    return 0;
}
