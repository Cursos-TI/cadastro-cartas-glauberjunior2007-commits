#include <stdio.h>

int main() 
{

  int populacao, populacao2;
  float area, pib, area2, pib2;
  char estado, estado2;
  char codigo[5], codigo2[5];
  char nome[50], nome2[50];

  printf("\n-----JOGADOR 1-----\n");

  printf("escolha uma letra de A-H para representar a sua cidade: ");
  scanf(" %c", &estado);

  printf("Escolha um Número de 01-04 para representar seu Código: ");
  scanf("%s", codigo);

  printf("digite o nome da sua cidade: ");
  scanf("%s", nome);

  printf("digite a população da sua cidade: " );
  scanf("%d", &populacao);

  printf("digite a area da sua cidade: ");
  scanf("%f", &area);

  printf("digite o pib da sua cidade: ");
  scanf("%f", &pib);

  printf("\n-----PRÓXIMO JOGADOR-----\n");

  printf("\n-----JOGADOR 2-----\n");

  printf("escolha uma letra de A-H para representar a sua cidade: ");
  scanf(" %c", &estado2);

  printf("Escolha um Número de 01-04 para representar o seu Código: ");
  scanf("%s", codigo2);

  printf("digite o nome da sua cidade: ");
  scanf("%s", nome2);

  printf("digite a população da sua cidade: ");
  scanf("%d", &populacao2);

  printf("digite a área da sua cidade: ");
  scanf("%f", &area2);

  printf("digite o pib da sua cidade: ");
  scanf("%f", &pib2);

  printf("\nCARTA 1: \n");
  printf("\nEstado: %c", estado);
  printf("\nCódigo: %s", codigo);
  printf("\nNome Da Cidade: %s", nome);
  printf("\nPopulação: %d", populacao);
  printf("\nÁrea: %.2f", area);
  printf("\nPIB: %.2f\n", pib);

  printf("\n CARTA 2: \n");
  printf("\nEstado: %c", estado2);
  printf("\nCódigo: %s", codigo2);
  printf("\nNome Da Cidade: %s", nome2);
  printf("\nPopulação: %d", populacao2);
  printf("\nÁrea: %.2f", area2);
  printf("\nPIB: %.2f", pib2);

  return 0;
}