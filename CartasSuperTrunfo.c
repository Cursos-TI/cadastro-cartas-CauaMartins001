#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[30];
  char codigo[30];
  char nome[30];

  int populacao;
  float area;
  float pib;
  int p_turisticos;
  // Área para entrada de dados
  printf("Digite o Estado: \n");
  scanf("%s", estado);

  printf("Digite o codigo da carta: \n");
  scanf("%s", codigo);

  printf("Digite o nome da cidade: \n");
  scanf("%s", nome);

  printf("Digite a populacao: \n");
  scanf("%d", &populacao);

  printf("Digite a area: \n");
  scanf("%f", &area);

  printf("Digite o PIB: \n");
  scanf("%f", &pib);

  printf("Digite os Pontos Turisticos: \n");
  scanf("%d", &p_turisticos);

  // Área para exibição dos dados da cidade
  printf("Carta1: \n");
  printf("Estado: %s\n", estado);
  printf("Codigo: %s\n", codigo);
  printf("Nome da Cidade: %s\n", nome);
  printf("Populacao: %d\n", populacao);
  printf("Area: %f\n", area);
  printf("PIB: %f\n", pib);
  printf("Numero de Pontos Turisticos: %d", p_turisticos);

return 0;
} 
