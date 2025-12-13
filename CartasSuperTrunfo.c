#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Variáveis da carta 1
  char Carta1_Estado;
  char Carta1_Codigo[4];
  char Carta1_Cidade [30];
  int Carta1_Popoulacao;
  float Carta1_Area;
  float Carta1_PIB;
  int Carta1_Pontos; 

  // Variáveis da carta 2
  char Carta2_Estado;
  char Carta2_Codigo[4];
  char Carta2_Cidade [30];
  int Carta2_Popoulacao;
  float Carta2_Area;
  float Carta2_PIB;
  int Carta2_Pontos; 

  // Área para entrada de dados

  // Solicitando dados da carta 1
  printf("--------- CADASTRO DA CARTA 01 --------\n");
  // Estado
  printf("Insira o Estado Carta (Apenas uma letra de 'A' a 'H')\n");
  scanf("%c", &Carta1_Estado);
  // aqui precisei pesquisar uma solução para limpar o enter do buffer para que
  // o proximo fgets não capture o \n impedindo a leitura do usuário
  // fpurge limpa o buffer com o \n
  __fpurge(stdin);
  
  //Codigo
  printf("Insira o código da Carta (A letra do estado seguida de um número de 01 a 04)\n");
  fgets(Carta1_Codigo, 4, stdin);
  // retirando o enter do final do código
  Carta1_Codigo[strcspn(Carta1_Codigo, "\n")] = 0;
  // limpa o buffer
  __fpurge(stdin);

  //Cidade
  printf("Isira o nome da Cidade)\n");
  fgets(Carta1_Cidade, 30, stdin);
  // retirando o enter do final da Cidade
  Carta1_Cidade[strcspn(Carta1_Cidade, "\n")] = 0;
  // limpa o buffer
  __fpurge(stdin);
  
  //População
  printf("Insira o número de habitantes\n");
  scanf("%d", &Carta1_Popoulacao);

  //Area
  printf("Insira a área da cidade em quilômetros quadrados\n");
  scanf("%f", &Carta1_Area);
  
  //pib
  printf("Insira o Produto Interno Bruto da cidade\n");
  scanf("%f", &Carta1_PIB);

  //Pontos Turísticos
  printf("Insira a quantidade de Pontos Turísticos\n");
  scanf("%d", &Carta1_Pontos);


  // Solicitando dados da carta 2
  printf("--------- CADASTRO DA CARTA 02 --------\n");
  // Estado
  printf("Insira o Estado Carta (Apenas uma letra de 'A' a 'H')\n");
  scanf(" %c", &Carta2_Estado);
  // fpurge limpa o buffer com o \n
  __fpurge(stdin);
  
  //Codigo
  printf("Insira o código da Carta (A letra do estado seguida de um número de 01 a 04)\n");
  fgets(Carta2_Codigo, 4, stdin);
  // retirando o enter do final do código
  Carta2_Codigo[strcspn(Carta2_Codigo, "\n")] = 0;
  // limpa o buffer
  __fpurge(stdin);

  //Cidade
  printf("Insira o nome da Cidade)\n");
  fgets(Carta2_Cidade, 30, stdin);
  // retirando o enter do final da Cidade
  Carta2_Cidade[strcspn(Carta2_Cidade, "\n")] = 0;
  // limpa o buffer
  __fpurge(stdin);
  
  //População
  printf("Insira o número de habitantes\n");
  scanf("%d", &Carta2_Popoulacao);

  //Area
  printf("Insira a área da cidade em quilômetros quadrados\n");
  scanf("%f", &Carta2_Area);
  
  //pib
  printf("Insira o Produto Interno Bruto da cidade\n");
  scanf("%f", &Carta2_PIB);

  //Pontos Turísticos
  printf("Insira a quantidade de Pontos Turísticos\n");
  scanf("%d", &Carta2_Pontos);


  // Área para exibição dos dados da cidade
  // Exibição Carta 1
  printf("\n ------ CARTA 01 -------\n");
  printf("| Estado: %c\n", Carta1_Estado);
  printf("| Código: %s\n", Carta1_Codigo);
  printf("| Cidade: %s\n", Carta1_Cidade);
  printf("| População: %d\n", Carta1_Popoulacao);
  printf("| Area: %f\n", Carta1_Area);
  printf("| PIB: %f\n", Carta1_PIB);
  printf("| Pontos Turísticos: %d\n", Carta1_Pontos);
  printf(" ------ ******** -------\n\n");

  // Exibição Carta 2
  printf("\n ------ CARTA 02 -------\n");
  printf("| Estado: %c\n", Carta2_Estado);
  printf("| Código: %s\n", Carta2_Codigo);
  printf("| Cidade: %s\n", Carta2_Cidade);
  printf("| População: %d\n", Carta2_Popoulacao);
  printf("| Area: %f\n", Carta2_Area);
  printf("| PIB: %f\n", Carta2_PIB);
  printf("| Pontos Turísticos: %d\n", Carta2_Pontos);
  printf(" ------ ******** -------\n\n");

return 0;
} 
