#include <stdio.h>

int main() {
 float comprimento, largura, area;
  
  printf("Descobrir tamanho de uma area \n\n");
  printf("Digite o comprimento desejado: \t");
   scanf("%f", &comprimento);
  
  printf("Digite a largura desejada: \t");
   scanf("%f", &largura);
  
  area = (comprimento * largura);
  
  printf("O tomanho da sua area e de:%.2f\t", area);
   return 0;
}
