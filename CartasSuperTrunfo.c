#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  char estado[30];
  char codigo[30];
  char nome[30];

  int populacao;
  float area;
  float pib;
  int p_turisticos;

  printf("*** Cadastro de Cartas do Super Trunfo ***\n");

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

  float densidade = populacao / area;
  float pibPerCapita = pib / populacao;

  float SuperPoder = (populacao + area + pib + p_turisticos + pibPerCapita + (1/densidade));

  printf("Carta1 \n");
  printf("Estado: %s\n", estado);
  printf("Codigo: %s\n", codigo);
  printf("Nome da Cidade: %s\n", nome);
  printf("Populacao: %d\n", populacao);
  printf("Area: %.2f km2\n", area);
  printf("PIB: %.2f bilhoes de reais\n", pib);
  printf("Numero de Pontos Turisticos: %d\n", p_turisticos);
  printf("Densidade Populacional: %.2f hab/km2\n", densidade);
  printf("PIB per capita: %.2f reais\n\n", pibPerCapita);
  printf("Super Poder: %.2f\n\n", SuperPoder);

  char estado2[30];
  char codigo2[30];
  char nome2[30];

  int populacao2;
  float area2;
  float pib2;
  int p_turisticos2;
  
  printf("Digite o Estado: \n");
  scanf("%s", estado2);

  printf("Digite o codigo da carta: \n");
  scanf("%s", codigo2);

  printf("Digite o nome da cidade: \n");
  scanf("%s", nome2);

  printf("Digite a populacao: \n");
  scanf("%d", &populacao2);

  printf("Digite a area: \n");
  scanf("%f", &area2);

  printf("Digite o PIB: \n");
  scanf("%f", &pib2);

  printf("Digite os Pontos Turisticos: \n");
  scanf("%d", &p_turisticos2);

  float densidade2 = populacao2 / area2;
  float pibPerCapita2 = pib2 / populacao2;

  float SuperPoder2 = (populacao2 + area2 + pib2 + p_turisticos2 + pibPerCapita2 + (1/densidade2));

  printf("Carta2 \n");
  printf("Estado: %s\n", estado2);
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nome2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f km2\n", area2);
  printf("PIB: %.2f bilhoes de reais\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", p_turisticos2);
  printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
  printf("PIB per capita: %.2f\n reais", pibPerCapita2);
  printf("Super Poder: %.2f\n\n", SuperPoder2);

  printf("***Comparacao entre as cartas***\n\n");
  printf("Populacao: Carta1 venceu %d\n", populacao > populacao2);
  printf("Area: Carta1 venceu %d\n", area > area2);
  printf("PIB: Carta1 venceu %d\n", pib > pib2);
  printf("Pontos Turisticos: Carta1 venceu %d\n", p_turisticos > p_turisticos2);
  printf("PIB per capita: Carta1 venceu %d\n", pibPerCapita > pibPerCapita2);
  printf("Super Poder: Carta1 venceu %d\n", SuperPoder > SuperPoder2);

return 0;
} 
