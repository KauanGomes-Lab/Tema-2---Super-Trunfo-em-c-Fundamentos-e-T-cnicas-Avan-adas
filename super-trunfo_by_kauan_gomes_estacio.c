// OBS: AO Professor: Fui Obrigado a usar a função 'fgets' pois a função 'scanf' não atendia a meus requisitos como pegar o caractere de espaço em palavras das cidades como " São Paulo. " Por Exemplo - Peço Desculpas Desde já.

// Usei a função getchar na linha 48 para pegar o valor da variavel e retornalo como int.

#include <stdio.h>

int main () {

  char estado_a[50], // As Variavel Tem o Valor 50 Pois Podem Armazenar Até 49 Caracteres.
  estado_b[50], // As Variavel Tem o Valor 50 Pois Podem Armazenar Até 49 Caracteres.
  codigo_a[50], // As Variavel Tem o Valor 50 Pois Podem Armazenar Até 49 Caracteres.
  codigo_b[50], // As Variavel Tem o Valor 50 Pois Podem Armazenar Até 49 Caracteres.
  cidade_a[50], // As Variavel Tem o Valor 50 Pois Podem Armazenar Até 49 Caracteres.
  cidade_b[50]; // As Variavel Tem o Valor 50 Pois Podem Armazenar Até 49 Caracteres.
  
  float area_cidade_a, // Variavel que Armazena a Area Digitados A.
  area_cidade_b, // Variavel que Armazena a Area Digitados B.
  pib_cidade_a, // Variavel que Armazena o PIB A.
  pib_cidade_b, // Variavel que Armazena o PIB B.
  densidade_populacional_cidade_a, // Variavel que Armazena a Densidade Populacional A.
  densidade_populacional_cidade_b, // Variavel que Armazena a Densidade Populacional B.
  pib_per_capta_cidade_a, // Variavel que Armazena PIB Per Capta A.
  pib_per_capta_cidade_b, // Variavel que Armazena PIB Per Capta B.
  super_poder_carta_a, // Variavel que Armazena o Super Poder A.
  super_poder_carta_b; // Variavel que Armazena o Super Poder B.
  
  int pontos_turisticos_a, // Variavel que Armazena o Numero de Pontos Turiscos A.
  pontos_turisticos_b; // Variavel que Armazena o Numero de Pontos Turiscos B.
  
  unsigned long int populacao_cidade_a, // Variavel que Armazena a População em unsigned long int A.
  populacao_cidade_b; // Variavel que Armazena a População em unsigned long int B.
  
  int populacao_cidade_a_covertido, // Variavel que Armazena a Variavel acima em valores INT Convertidos A.
  populacao_cidade_b_covertido; // Variavel que Armazena a Variavel acima em valores INT Convertidos B.
  
  populacao_cidade_a_covertido = (int)populacao_cidade_a; // Função Para Converter o Valor da População da Carta A.
  populacao_cidade_b_covertido = (int)populacao_cidade_b; // Função Para Converter o Valor da População da Carta B.
  
  printf("\n-----------  Super Trunfo - Mestre -----------"); // Versão Mestre Tema 2 - Super Trunfo.
  
  printf("\n\n-----------  Carta A: -----------"); // Entrada Dos Dados Carta A:
  
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
  scanf("%d", &pontos_turisticos_a);getchar(); // Explicação do Porque Usei a Função "getchar" na Linha 3.
  
  printf("\n-----------  Carta B: -----------"); // Entrada Dos Dados Carta B:
  
  printf("\n\nDigite o Estado da Carta B (A à H): "); 
  fgets(estado_b, sizeof(estado_b), stdin); // Explicação do Porque Usei a Função "fgets" inves da Função "scanf" na Linha 1.
  
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
  
  // Formula do Calculo de Desnsidade Populacional de Ambas as Cartas:
  densidade_populacional_cidade_a = populacao_cidade_a / area_cidade_a;
  densidade_populacional_cidade_b = populacao_cidade_b / area_cidade_b;
  
  // Formula do Calculo de PIB Per Capta das Cartas:
  pib_per_capta_cidade_a = pib_cidade_a / populacao_cidade_a;
  pib_per_capta_cidade_b = pib_cidade_b / populacao_cidade_b;
  
  printf("\n-----------  Resultado  -----------\n");
  
  printf("\n\n-----------  Carta A:  -----------\n"); // Impressão dos dados Carta A:
  
  printf("\nEstado : %s" , estado_a);
  printf("Codigo : %s", codigo_a);
  printf("Nome da Cidade: %s", cidade_a);
  printf("População : %d Habitantes.\n", populacao_cidade_a);
  printf("Área : %.2f Km².\n", area_cidade_a);
  printf("PIB : %.2f.\n", pib_cidade_a);
  printf("Número de Pontos Turísticos : %d.\n", pontos_turisticos_a);
  printf("Densidade Populacional : %.2f hab/km².\n", densidade_populacional_cidade_a);
  printf("PIB per Capita : %.2f Reais.\n", pib_per_capta_cidade_a);
  
  printf("\n-----------  Carta B:  -----------\n"); // Impressão dos dados Carta B:
  
  printf("\nEstado : %s" , estado_b);
  printf("Codigo : %s", codigo_b);
  printf("Nome da Cidade : %s", cidade_b);
  printf("População : %d Habitantes.\n", populacao_cidade_b);
  printf("Área : %.2f Km².\n", area_cidade_b);
  printf("PIB : %.2f.\n", pib_cidade_b);
  printf("Número de Pontos Turísticos : %d.\n", pontos_turisticos_b);
  printf("Densidade Populacional : %.2f hab/km².\n", densidade_populacional_cidade_b);
  printf("PIB per Capita : %.2f Reais.\n\n\n", pib_per_capta_cidade_b);
  
  printf("-----------  Comparação de Cartas:  -----------\n\n"); // Condiçoes para comparação das Cartas:
  
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
  
  // Definição da Formula do calculo de Super Poder.
  super_poder_carta_a = 1 / densidade_populacional_cidade_a + area_cidade_a + pib_cidade_a + populacao_cidade_a + pontos_turisticos_a + pib_per_capta_cidade_a;
  
  // Definição da Formula do calculo de Super Poder.
  super_poder_carta_b = 1 / densidade_populacional_cidade_b + area_cidade_b + pib_cidade_b + populacao_cidade_b + pontos_turisticos_b + pib_per_capta_cidade_b;
  
  printf("\n-----------  Resultado Super Poder:  -----------\n");
  
  // Pontos do Super Poder das Cartas: 
  printf("\nCarta A: %.2f Pontos.\n",super_poder_carta_a);
  printf("Carta B: %.2f Pontos.\n",super_poder_carta_b);
  
  // Condição Final do Super Poder.
  if (super_poder_carta_a > super_poder_carta_b) {  
  printf("\nResultado Final Super Poder : Carta A Venceu (1).\n");
  }
  
  if (super_poder_carta_b > super_poder_carta_a) {
  printf("\n\nResultado Final Super Poder : Carta B Venceu (0).\n");
  }
  
  if (super_poder_carta_a == super_poder_carta_b || super_poder_carta_b == super_poder_carta_a) {
  printf("\n\nResultado Final Super Poder : Empatados.\n");
  }
  
  // Contato.
  printf("\n----------- © Criado Por: Kauan Gomes.  |  Github: ( https://github.com/KauanGomes-Lab ) © -----------\n"); 
  	
return 0;

}
