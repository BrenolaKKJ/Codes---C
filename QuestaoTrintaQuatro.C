#include <stdio.h>
#include <string.h>

 int main(){
     char nome[50], endereco[100], telefone[20];
     int idade;
     
     printf("Digite seu nome: \t");
      fgets(nome, sizeof(nome), stdin);
      nome[strcspn(nome, "\n")] = '\0';
      
     printf("Digite seu endereço: \t");
      fgets(endereco, sizeof(endereco), stdin);
       endereco[strcspn(endereco, "\n")] = '\0';
      
     printf("Digite seu telefone: \t");
      fgets(telefone, sizeof(telefone), stdin);
       telefone[strcspn(telefone, "\n")] = '\0';
      
     printf ("Por fim digite sua idade: \t");
      scanf("%d", &idade);
     
     printf("\n\n Seu nome é %s, voce mora em %s, seu número de telefone é %s, sua idade é %d.", nome, endereco, telefone, idade);

    return 0;
}
