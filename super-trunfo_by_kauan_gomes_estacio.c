// OBS: AO Professor: Fui Obrigado a usar a função 'fgets' pois a função 'scanf' não atendia a meus requisitos como pegar o caractere de espaço em palavras das cidades como " São Paulo. " Por Exemplo - Peço Desculpas Desde já.
#include <stdio.h>

int main() {
  char estado_a[25],estado_b[25],codigo_a[25],codigo_b[25],cidade_a[25],cidade_b[25];
  float area_cidade_a,area_cidade_b,pib_cidade_a,pib_cidade_b;
  int populacao_cidade_a,populacao_cidade_b,pontos_turisticos_a,pontos_turisticos_b;
  
  printf("\n-----------  Super Trunfo - Iniciante -----------\n");

  printf("\n-----------  Carta A: -----------");
  printf("\n\nDigite o Estado da Carta A (A à H): "); 
  fgets(estado_a, sizeof(estado_a), stdin);
  
  printf("\nDigite o Codigo da Carta A: "); 
  fgets(codigo_a, sizeof(codigo_a), stdin);
  
  printf("\nDigite o Nome da Cidade da Carta A: "); 
  fgets(cidade_a, sizeof(cidade_a), stdin);
  
  printf("\nPopulação da Cidade da Carta A: ");
  scanf("%d", &populacao_cidade_a);
  
  printf("\nDigite à Área da Cidade da Carta A: ");
  scanf("%f", &area_cidade_a);
  
  printf("\nDigite o PIB da Cidade da Carta A: ");
  scanf("%f", &pib_cidade_a);
  
  printf("\nDigite o Número de Pontos Turísticos da Cidade da Carta A: ");
  scanf("%d", &pontos_turisticos_a);getchar();
  
  printf("\n-----------  Carta B: -----------\n");
  
  printf("\nDigite o Estado da Carta B (A à H): "); 
  fgets(estado_b, sizeof(estado_b), stdin);
  
  printf("\nDigite o Codigo da Carta B: "); 
  fgets(codigo_b, sizeof(codigo_b), stdin);
  
  printf("\nDigite o Nome da Cidade da Carta B: "); 
  fgets(cidade_b, sizeof(cidade_b), stdin);
  
  printf("\nPopulação da Cidade da Carta B: ");
  scanf("%d", &populacao_cidade_b);
  
  printf("\nDigite à Área da Cidade da Carta B: ");
  scanf("%f", &area_cidade_b);
   
  printf("\nDigite o PIB da Cidade da Carta B: ");
  scanf("%f", &pib_cidade_b);
  
  printf("\nDigite o Número de Pontos Turísticos da Cidade da Carta B: ");
  scanf("%d", &pontos_turisticos_b);
  
  printf("\n-----------  Resultado  -----------\n");
  
  printf("\n\n-----------  Carta A:  -----------\n");
  printf("\nEstado : %s" , estado_a);
  printf("Codigo : %s", codigo_a);
  printf("Nome da Cidade: %s", cidade_a);
  printf("População : %d Habitantes\n", populacao_cidade_a);
  printf("Área : %.2f Km².\n", area_cidade_a);
  printf("PIB : %.2f Reais.\n", pib_cidade_a);
  printf("Número de Pontos Turísticos : %d\n", pontos_turisticos_a);
  
  printf("\n-----------  Carta B:  -----------\n");
  printf("\nEstado : %s" , estado_b);
  printf("Codigo : %s", codigo_b);
  printf("Nome da Cidade : %s", cidade_b);
  printf("População : %d Habitantes.\n", populacao_cidade_b);
  printf("Área : %.2f Km².\n", area_cidade_b);
  printf("PIB : %.2f Reais.\n", pib_cidade_b);
  printf("Número de Pontos Turísticos : %d\n", pontos_turisticos_b);
  
  printf("\n----------- © Criado Por: Kauan Gomes.  |  Github: ( https://github.com/KauanGomes-Lab ) © -----------\n");
  
  return 0;
}
