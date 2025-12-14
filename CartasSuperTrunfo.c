#include <stdio.h>
#include <string.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Variáveis da carta 1
  char Carta1_Estado;
  char Carta1_Codigo[5];
  char Carta1_Cidade [30];
  int Carta1_Populacao;
  float Carta1_Area;
  float Carta1_PIB;
  int Carta1_Pontos; 
  // Desafio Aventureiro
  float Carta1_DensidadePopulacional, Carta1_PIBPerCapita;

  // Variáveis da carta 2
  char Carta2_Estado;
  char Carta2_Codigo[5];
  char Carta2_Cidade [30];
  int Carta2_Populacao;
  float Carta2_Area;
  float Carta2_PIB;
  int Carta2_Pontos; 
  //Desafio Aventureiro
  float Carta2_DensidadePopulacional, Carta2_PIBPerCapita;


  // Área para entrada de dados

  // Solicitando dados da carta 1
  printf("--------- CADASTRO DA CARTA 01 --------\n");
  // Estado
  printf("Insira o Estado Carta (Apenas uma letra de 'A' a 'H')\n");
  scanf("%c", &Carta1_Estado);
  // aqui precisei pesquisar uma solução para limpar o enter do buffer para que
  // o proximo fgets não capture o \n impedindo a leitura do usuário
  // getchar limpa o buffer com o \n
  getchar();
  
  //Codigo
  printf("Insira o código da Carta (A letra do estado seguida de um número de 01 a 04)\n");
  fgets(Carta1_Codigo, 5, stdin);
  // retirando o enter do final do código
  Carta1_Codigo[strcspn(Carta1_Codigo, "\n")] = 0;
  

  //Cidade
  printf("Insira o nome da Cidade\n");
  fgets(Carta1_Cidade, 30, stdin);
  // retirando o enter do final da Cidade
  Carta1_Cidade[strcspn(Carta1_Cidade, "\n")] = 0;

  
  //População
  printf("Insira o número de habitantes\n");
  scanf("%d", &Carta1_Populacao);

  //Area
  printf("Insira a área da cidade em quilômetros quadrados\n");
  scanf("%f", &Carta1_Area);
  
  //pib
  printf("Insira o Produto Interno Bruto da cidade\n");
  scanf("%f", &Carta1_PIB);

  //Pontos Turísticos
  printf("Insira a quantidade de Pontos Turísticos\n");
  scanf("%d", &Carta1_Pontos);

  //Desafio Aventureiro 
  //Calculos Carta 1
  Carta1_DensidadePopulacional = (float)  Carta1_Populacao / Carta1_Area;
  //Multiplica o PIB por 1 bilhão, já que a leitura é referente a bilhões
  Carta1_PIBPerCapita = (float) (Carta1_PIB * 1000000000) / Carta1_Populacao;
  


  // Solicitando dados da carta 2
  printf("--------- CADASTRO DA CARTA 02 --------\n");
  // Estado
  printf("Insira o Estado Carta (Apenas uma letra de 'A' a 'H')\n");
  scanf(" %c", &Carta2_Estado);
  // getchar limpa o buffer com o \n
  getchar();
  
  //Codigo
  printf("Insira o código da Carta (A letra do estado seguida de um número de 01 a 04)\n");
  fgets(Carta2_Codigo, 5, stdin);
  // retirando o enter do final do código
  Carta2_Codigo[strcspn(Carta2_Codigo, "\n")] = 0;


  //Cidade
  printf("Insira o nome da Cidade\n");
  fgets(Carta2_Cidade, 30, stdin);
  // retirando o enter do final da Cidade
  Carta2_Cidade[strcspn(Carta2_Cidade, "\n")] = 0;

  
  //População
  printf("Insira o número de habitantes\n");
  scanf("%d", &Carta2_Populacao);

  //Area
  printf("Insira a área da cidade em quilômetros quadrados\n");
  scanf("%f", &Carta2_Area);
  
  //pib
  printf("Insira o Produto Interno Bruto da cidade\n");
  scanf("%f", &Carta2_PIB);

  //Pontos Turísticos
  printf("Insira a quantidade de Pontos Turísticos\n");
  scanf("%d", &Carta2_Pontos);

  //Desafio Aventureiro 
  //Calculos Carta 2
  Carta2_DensidadePopulacional = (float) Carta2_Populacao / Carta2_Area;
  //Multiplica o PIB por 1 bilhão, já que a leitura é referente a bilhões
  Carta2_PIBPerCapita = (float) (Carta2_PIB * 1000000000) / Carta2_Populacao;


  // Área para exibição dos dados da cidade
  // Exibição Carta 1
  printf("\n ------ CARTA 01 -------\n");
  printf("| Estado: %c\n", Carta1_Estado);
  printf("| Código: %s\n", Carta1_Codigo);
  printf("| Cidade: %s\n", Carta1_Cidade);
  printf("| População: %d\n", Carta1_Populacao);
  printf("| Area: %.2f Km2\n", Carta1_Area);
  printf("| PIB: %.2f bilhões\n", Carta1_PIB);
  printf("| Pontos Turísticos: %d\n", Carta1_Pontos);
  printf("| Densidade Populacional: %.2f hab/km2\n", Carta1_DensidadePopulacional);
  printf("| PIB Per Capita: %.2f reais\n", Carta1_PIBPerCapita);
  printf(" ------ ******** -------\n\n");

  // Exibição Carta 2
  printf("\n ------ CARTA 02 -------\n");
  printf("| Estado: %c\n", Carta2_Estado);
  printf("| Código: %s\n", Carta2_Codigo);
  printf("| Cidade: %s\n", Carta2_Cidade);
  printf("| População: %d\n", Carta2_Populacao);
  printf("| Area: %.2f Km2\n", Carta2_Area);
  printf("| PIB: %.2f bilhões\n", Carta2_PIB);
  printf("| Pontos Turísticos: %d\n", Carta2_Pontos);
  printf("| Densidade Populacional: %.2f hab/km2\n", Carta2_DensidadePopulacional);
  printf("| PIB Per Capita: %.2f reais\n", Carta2_PIBPerCapita);
  printf(" ------ ******** -------\n\n");

return 0;
} 
