#include <stdio.h>

int main() {

  char estado_a[25],estado_b[25],codigo_a[25],codigo_b[25],cidade_a[25],cidade_b[25];
  
  float area_cidade_a,area_cidade_b,// Variavel que Armazena a Area Digitados.
  pib_cidade_a,pib_cidade_b, // Variavel que Armazena o PIB.
  densidade_populacional_cidade_a,densidade_populacional_cidade_b, // Variavel que Armazena a Densidade Populacional.
  pib_per_capta_cidade_a,pib_per_capta_cidade_b, // Variavel que Armazena PIB Per Capta.
  super_poder_carta_a,super_poder_carta_b; // Variavel que Armazena o Super Poder.
  
  int pontos_turisticos_a,pontos_turisticos_b; // Variavel que Armazena o Numero de Pontos Turiscos.
  
  unsigned long int populacao_cidade_a,populacao_cidade_b; // Variavel que Armazena a População em unsigned long int.
  
  int populacao_cidade_a_covertido,populacao_cidade_b_covertido; // Variavel que Armazena a Variavel acima em valores INT Convertidos .
  
  populacao_cidade_a_covertido = (int)populacao_cidade_a; // Função Para Converter Carta A.
  
  populacao_cidade_b_covertido = (int)populacao_cidade_b; // Função Para Converter Carta B.
  
  printf("\n-----------  Super Trunfo - Mestre  -----------");
  
  printf("\n\n-----------  Carta A: -----------");
  
  printf("\n\nDigite o Estado da Carta A (A à H): "); 
  fgets(estado_a, sizeof(estado_a), stdin);
  
  printf("\nDigite o Codigo da Carta A: "); 
  fgets(codigo_a, sizeof(codigo_a), stdin);
  
  printf("\nDigite o Nome da Cidade da Carta A: "); 
  fgets(cidade_a, sizeof(cidade_a), stdin);
  
  printf("\nPopulação da Cidade da Carta A: ");
  scanf("%lu", &populacao_cidade_a);
  
  printf("\nDigite à Área da Cidade da Carta A: ");
  scanf("%f", &area_cidade_a);
  
  printf("\nDigite o PIB da Cidade da Carta A: ");
  scanf("%f", &pib_cidade_a);
  
  printf("\nDigite o Número de Pontos Turísticos da Cidade da Carta A: ");
  scanf("%d", &pontos_turisticos_a);getchar();
  
  printf("\n-----------  Carta B: -----------");
  
  printf("\n\nDigite o Estado da Carta B (A à H): "); 
  fgets(estado_b, sizeof(estado_b), stdin);
  
  printf("\nDigite o Codigo da Carta B: "); 
  fgets(codigo_b, sizeof(codigo_b), stdin);
  
  printf("\nDigite o Nome da Cidade da Carta B: "); 
  fgets(cidade_b, sizeof(cidade_b), stdin);
  
  printf("\nPopulação da Cidade da Carta B: ");
  scanf("%lu", &populacao_cidade_b);
  
  printf("\nDigite à Área da Cidade da Carta B: ");
  scanf("%f", &area_cidade_b);
   
  printf("\nDigite o PIB da Cidade da Carta B: ");
  scanf("%f", &pib_cidade_b);
  
  printf("\nDigite o Número de Pontos Turísticos da Cidade da Carta B: ");
  scanf("%d", &pontos_turisticos_b);
  
  densidade_populacional_cidade_a = populacao_cidade_a / area_cidade_a;
  densidade_populacional_cidade_b = populacao_cidade_b / area_cidade_b;
  pib_per_capta_cidade_a = pib_cidade_a / populacao_cidade_a;
  pib_per_capta_cidade_b = pib_cidade_b / populacao_cidade_b;
  
  printf("\n-----------  Resultado  -----------\n");
  
  printf("\n\n-----------  Carta A:  -----------\n");
  
  printf("\nEstado : %s" , estado_a);
  printf("Codigo : %s", codigo_a);
  printf("Nome da Cidade: %s", cidade_a);
  printf("População : %d Habitantes.\n", populacao_cidade_a);
  printf("Área : %.2f Km².\n", area_cidade_a);
  printf("PIB : %.2f.\n", pib_cidade_a);
  printf("Número de Pontos Turísticos : %d.\n", pontos_turisticos_a);
  printf("Densidade Populacional : %.2f hab/km².\n", densidade_populacional_cidade_a);
  printf("PIB per Capita : %.2f Reais.\n", pib_per_capta_cidade_a);
  
  printf("\n-----------  Carta B:  -----------\n");
  printf("\nEstado : %s" , estado_b);
  printf("Codigo : %s", codigo_b);
  printf("Nome da Cidade : %s", cidade_b);
  printf("População : %d Habitantes.\n", populacao_cidade_b);
  printf("Área : %.2f Km².\n", area_cidade_b);
  printf("PIB : %.2f.\n", pib_cidade_b);
  printf("Número de Pontos Turísticos : %d.\n", pontos_turisticos_b);
  printf("Densidade Populacional : %.2f hab/km².\n", densidade_populacional_cidade_b);
  printf("PIB per Capita : %.2f Reais.\n\n\n", pib_per_capta_cidade_b);
  
  printf("-----------  Comparação de Cartas:  -----------\n\n");
  
  if (populacao_cidade_a > populacao_cidade_b) {
  printf("População: Carta A Venceu (1).\n");
  }
  
  if (populacao_cidade_b > populacao_cidade_a) {
  printf("População: Carta B Venceu (0).\n");
  }
  
  if (populacao_cidade_a == populacao_cidade_b || populacao_cidade_b == populacao_cidade_a) {
  printf("População: Empatados.\n");
  }
 
  if (area_cidade_a > area_cidade_b) {
  printf("Área: Carta A Venceu (1).\n");
  } 
  
  if (area_cidade_b > area_cidade_a) {
  printf("Área: Carta B Venceu (0).\n");
  }
  
  if (area_cidade_a == area_cidade_b || area_cidade_b == area_cidade_a) {
  printf("Área: Empatados.\n");
  } 
  
  if (pib_cidade_a > pib_cidade_b) {
  printf("PIB: Carta A Venceu (1).\n");
  }
  
  if (pib_cidade_b > pib_cidade_a) {
  printf("PIB: Carta B Venceu (0).\n");
  }
  
  if (pib_cidade_a == pib_cidade_b || pib_cidade_b == pib_cidade_a) {
  printf("PIB: Empatados.\n");
  }
  
  if (pontos_turisticos_a > pontos_turisticos_b) {
  printf("Pontos Turísticos: Carta A Venceu (1).\n");
  }
  
  if (pontos_turisticos_b > pontos_turisticos_a) {
  printf("Pontos Turísticos: Carta B Venceu (0).\n");
  }
  
  if (pontos_turisticos_a == pontos_turisticos_b || pontos_turisticos_b == pontos_turisticos_a) {
  printf("Pontos Turísticos: Empatados.\n");
  }
  
  if (densidade_populacional_cidade_a < densidade_populacional_cidade_b) {
  printf("Densidade Populacional: Carta A Venceu (1).\n");
  }

  if (densidade_populacional_cidade_a > densidade_populacional_cidade_b) {
  printf("Densidade Populacional: Carta B Venceu (0).\n");
  }
  
  if (densidade_populacional_cidade_a == densidade_populacional_cidade_b || densidade_populacional_cidade_b == densidade_populacional_cidade_a) {
  printf("Densidade Populacional: Empatados.\n");
  }
  
  if (pib_per_capta_cidade_a > pib_per_capta_cidade_b) {
  printf("PIB Per Capita: Carta A Venceu (1).\n");
  }
  
  if (pib_per_capta_cidade_b > pib_per_capta_cidade_a) {
  printf("PIB Per Capita: Carta B Venceu (0).\n");
  }
  
  if (pib_per_capta_cidade_a == pib_per_capta_cidade_b || pib_per_capta_cidade_b == pib_per_capta_cidade_a) {
  printf("PIB Per Capta : Empatados.\n");
  }
  
  super_poder_carta_a = 1 / densidade_populacional_cidade_a + area_cidade_a + pib_cidade_a + populacao_cidade_a + pontos_turisticos_a + pib_per_capta_cidade_a;
  super_poder_carta_b = 1 / densidade_populacional_cidade_b + area_cidade_b + pib_cidade_b + populacao_cidade_b + pontos_turisticos_b + pib_per_capta_cidade_b;
  
  printf("\n-----------  Resultado Super Poder:  -----------\n");
  printf("\nCarta A: %.2f Pontos.\n",super_poder_carta_a);
  printf("Carta B: %.2f Pontos.\n",super_poder_carta_b);
  
  if (super_poder_carta_a > super_poder_carta_b) {
  printf("\nResultado Final Super Poder : Carta A Venceu (1).\n");
  }
  
  if (super_poder_carta_b > super_poder_carta_a) {
  printf("\n\nResultado Final Super Poder : Carta B Venceu (0).\n");
  }
  
  if (super_poder_carta_a == super_poder_carta_b || super_poder_carta_b == super_poder_carta_a) {
  printf("\n\nResultado Final Super Poder : Empatados.\n");
  }
  
  printf("\n----------- © Criado Por: Kauan Gomes.  |  Github: ( https://github.com/KauanGomes-Lab ) © -----------\n");
  	
  return 0;
}
