//Fazer um programa que solicita o total gasto pelo cliente de uma loja,
//imprime as opções de pagamento, solicita a opção desejada e imprime o valor
//total das prestações (se houverem).
//a) Opção: a vista com 10% de desconto;
//b) Opção: em duas vezes (preço da etiqueta);
//c) Opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras
//acima de R$100,00).

#include <stdio.h>

int main() {
    float total, final, parcela;
    int opcao, vezes;

    printf("Total gasto: ");
    scanf("%f", &total);

    printf("1 - À vista (10%% de desconto)\n");
    printf("2 - 2x sem juros\n");
    printf("3 - 3 a 10x com 3%% de juros (só se total > 100)\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        final = total * 0.9;
        printf("Total: R$ %.2f\n", final);
    } else if (opcao == 2) {
        parcela = total / 2;
        printf("2x de R$ %.2f\n", parcela);
    } else if (opcao == 3 && total > 100) {
        printf("Quantas parcelas (3 a 10): ");
        scanf("%d", &vezes);
        if (vezes >= 3 && vezes <= 10) {
            final = total * (1 + 0.03 * vezes);
            parcela = final / vezes;
            printf("%dx de R$ %.2f (Total: R$ %.2f)\n", vezes, parcela, final);
        } else {
            printf("Parcelas inválidas.\n");
        }
    } else {
        printf("Opção inválida.\n");
    }

    return 0;
}
