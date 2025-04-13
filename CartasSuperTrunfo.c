#include <stdio.h>  // Biblioteca padrão de entrada e saída
#include <string.h>

int main() {
  // Declaração de variáveis para armazenar os dados da carta 1
  char Estado;                      // Armazena a letra que representa o estado (de 'A' a 'H')
  char codigo[6];                   // Armazena o código da carta (como uma string de até 5 caracteres + '\0')
  char cidade[30];                  // Armazena o nome da cidade (até 29 caracteres + '\0')
  unsigned long int populacao = 0;  // Armazena o número de habitantes da cidade
  double area = 0;                  // Armazena a área da cidade em km²
  double pib = 0;                   // Armazena o PIB da cidade em bilhões de reais
  int turistico = 0;                // Armazena a quantidade de pontos turísticos da cidade
  double densidade = 0;             // Armazena a densidade da população pela areá da cidade
  double pibPerCapita = 0;          // Armazena o PIB per capita da cidade
  double superPoder = 0;            // Super Poder da carta

  // Declaração de variáveis da carta 2
  char Estado2;                      // Armazena a letra que representa o estado (de 'A' a 'H')
  char codigo2[6];                   // Armazena o código da carta (como uma string de até 5 caracteres + '\0')
  char cidade2[30];                  // Armazena o nome da cidade (até 29 caracteres + '\0')
  unsigned long int populacao2 = 0;  // Armazena o número de habitantes da cidade 2
  double area2 = 0;                  // Armazena a área da cidade em km²
  double pib2 = 0;                   // Armazena o PIB da cidade em bilhões de reais
  int turistico2 = 0;                // Armazena a quantidade de pontos turísticos da cidade 2
  double densidade2 = 0;             // Armazena a densidade da população pela areá da cidade 2
  double pibPerCapita2 = 0;          // Armazena o PIB per capita da cidade 2
  double superPoder2 = 0;            // Super Poder da carta 2


  // Entrada dos dados da carta 1

  // Solicita ao usuário que digite uma letra de 'A' a 'H' representando o estado
  printf("Digite uma letra de 'A' a 'H' que representa o Estado da carta 1: ");
  scanf("%c", &Estado);  // Lê um caractere e armazena em Estado

  // Solicita ao usuário que digite o código da carta
  printf("Digite um numero de '01' a '04' que representa o codigo da carta 1: ");
  scanf(" %s", codigo);  // Lê uma string e armazena em codigo (espaço antes do %s ignora caracteres em branco)

  getchar();  // Limpa o caractere de nova linha '\n' deixado no buffer pelo scanf anterior

  // Solicita ao usuário o nome da cidade
  printf("Digite o nome da cidade da carta 1: ");
  fgets(cidade, 30, stdin);  // Lê uma linha (incluindo espaços) e armazena em cidade

  // Remove o caractere de nova linha '\n' do final da string cidade, se presente
  cidade[strcspn(cidade, "\n")] = 0;

  // Solicita ao usuário o número de habitantes
  printf("Digite número de habitantes da cidade da carta 1: ");
  scanf("%lu", &populacao);  // Lê um número inteiro e armazena em populacao

  // Solicita ao usuário a área da cidade
  printf("Digite a area da cidade em km² da carta 1: ");
  scanf("%lf", &area);  // Lê um número decimal e armazena em area

  // Solicita ao usuário o PIB da cidade
  printf("Digite o Produto Interno Bruto da cidade da cidade da carta 1 (em bilhões de reais): ");
  scanf("%lf", &pib);  // Lê um número decimal e armazena em pib

  // Solicita ao usuário o número de pontos turísticos da cidade
  printf("Digite a quantidade de pontos turísticos na cidade da carta 1: ");
  scanf("%d", &turistico);  // Lê um número inteiro e armazena em turistico

  // Cálculos carta 1

  //Calculo da densidade da cidade 2
  densidade = populacao / area;
  //O valor do PIB está em bilhões, então para calcular o PIB per capita real, devmos multiplicar o valor por 1.000.000.000 antes da divisão
  pibPerCapita = (pib * 1000000000) / populacao;
  superPoder = populacao + area + (pib * 1000000000) + turistico + pibPerCapita + (1.0 / densidade);  // Calcula o Super Poder

  //Entrada dos dados da carta 2

  // Solicita ao usuário que digite uma letra de 'A' a 'H' representando o estado
  printf("\nDigite uma letra de 'A' a 'H' que representa o Estado da carta 2: ");
  scanf(" %c", &Estado2);

  // Solicita ao usuário que digite o código da carta
  printf("Digite um numero de '01' a '04' que representa o codigo da carta 2: ");
  scanf(" %s", codigo2);

  getchar();  // Limpa o caractere de nova linha '\n' deixado no buffer pelo scanf anterior

  // Solicita ao usuário o nome da cidade
  printf("Digite o nome da cidade da carta 2: ");
  fgets(cidade2, 30, stdin);  // Lê uma linha (incluindo espaços) e armazena em cidade2

  // Remove o caractere de nova linha '\n' do final da string cidade2, se presente
  cidade2[strcspn(cidade2, "\n")] = 0;

  // Solicita ao usuário o número de habitantes
  printf("Digite número de habitantes da cidade da carta 2: ");
  scanf("%lu", &populacao2);  // Lê um número inteiro e armazena em populacao2

  // Solicita ao usuário a área da cidade
  printf("Digite a area da cidade em km² da carta 2: ");
  scanf("%lf", &area2);  // Lê um número decimal e armazena em area2

  // Solicita ao usuário o PIB da cidade
  printf("Digite o Produto Interno Bruto da cidade da carta 2 (em bilhões de reais): ");
  scanf("%lf", &pib2);  // Lê um número decimal e armazena em pib2

  // Solicita ao usuário o número de pontos turísticos da cidade
  printf("Digite a quantidade de pontos turísticos na cidade da carta 2: ");
  scanf("%d", &turistico2);  // Lê um número inteiro e armazena em turistico2

  // Cálculos carta 2

  //Calculo da densidade da cidade 2
  densidade2 = populacao2 / area2;

  //O valor do PIB está em bilhões, então para calcular o PIB per capita real, devemos multiplicar o valor por 1.000.000.000 antes da divisão.
  pibPerCapita2 = (pib2 * 1000000000) / populacao2;

  superPoder2 = populacao2 + area2 + (pib2 * 1000000000) + turistico2 + pibPerCapita2 + (1.0 / densidade2);  // Calcula o Super Poder da cidade 2


  // Exibe todos os dados armazenados da carta 1
  printf("\nCarta 1 \n");
  printf("Estado: %c \n", Estado);                               // Mostra a letra do estado
  printf("Código: %c%s\n", Estado, codigo);                      // Mostra o código
  printf("Nome da Cidade: %s\n", cidade);                        // Mostra o nome da cidade
  printf("População: %lu \n", populacao);                        // Mostra a população
  printf("Área: %.2lf km²\n", area);                             // Mostra a área com duas casas decimais
  printf("PIB: %.2lf bilhões de reais\n", pib);                  // Mostra o PIB com duas casas decimais
  printf("Número de Pontos Turísticos: %d\n", turistico);        // Mostra o número de pontos turísticos
  printf("Densidade Populacional: %.2lf hab/km²\n", densidade);  // Mostra a densidade populacional da cidade
  printf("PIB per Capita: R$ %.2lf\n", pibPerCapita);            // Mostra o PIB per capita da cidade
  printf("Super Poder: %.2lf\n\n", superPoder);                  // Mostra o Super Poder da cidade

  //Exibição dos dados da carta 2

  printf("Carta 2\n");
  printf("Estado: %c\n", Estado2);                                // Mostra a letra do estado2
  printf("Código: %c%s\n", Estado2, codigo2);                     // Mostra o código2
  printf("Nome da Cidade: %s\n", cidade2);                        // Mostra o nome da cidade2
  printf("População: %lu\n", populacao2);                         // Mostra a população2
  printf("Área: %.2lf km²\n", area2);                             // Mostra a área2 com duas casas decimais
  printf("PIB: %.2lf bilhões de reais\n", pib2);                  // Mostra o PIB2 com duas casas decimais
  printf("Número de Pontos Turísticos: %d\n", turistico2);        // Mostra o número de pontos turísticos
  printf("Densidade Populacional: %.2lf hab/km²\n", densidade2);  // Mostra a densidade populacional da cidade2
  printf("PIB per Capita: R$ %.2lf\n", pibPerCapita2);            // Mostra o PIB per capita da cidade2
  printf("Super Poder: %.2lf\n\n", superPoder2);                  // Mostra o Super Poder da cidade 2

  char *resultado[] = { "Carta 2 venceu", "Carta 1 venceu" };  // Array com os textos das comparações

  // Comparações entre as cartas (1 = carta 1 venceu, 0 = carta 2 venceu)
  printf("Comparações (1 = Carta 1 venceu, 0 = Carta 2 venceu):\n\n");

  printf("Comparação de Cartas:\n");
  printf("População: %s (%d)\n", resultado[populacao > populacao2], populacao > populacao2);                   // Compara população das cidades
  printf("Área: %s (%d)\n", resultado[area > area2], area > area2);                                            // Compara área das cidades
  printf("PIB: %s (%d)\n", resultado[pib > pib2], pib > pib2);                                                 // Compara PIB das cidades
  printf("Pontos Turísticos: %s (%d)\n", resultado[turistico > turistico2], turistico > turistico2);           // Compara pontos turísticos das cidades
  printf("Densidade Populacional: %s (%d)\n", resultado[densidade < densidade2], densidade < densidade2);      // Compara densidade das cidades
  printf("PIB per Capita: %s (%d)\n", resultado[pibPerCapita > pibPerCapita2], pibPerCapita > pibPerCapita2);  // Compara PIB per capita das cidades
  printf("Super Poder: %s (%d)\n", resultado[superPoder > superPoder2], superPoder > superPoder2);             // Compara Super Poder das cidades

  return 0;  // Fim do programa
}