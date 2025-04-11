#include <stdio.h>          // Biblioteca padrão de entrada e saída

int main() {
    // Declaração de variáveis para armazenar os dados da carta
    char Estado;            // Armazena a letra que representa o estado (de 'A' a 'H')
    char codigo[6];         // Armazena o código da carta (como uma string de até 5 caracteres + '\0')
    char cidade[30];        // Armazena o nome da cidade (até 29 caracteres + '\0')
    int populacao = 0;      // Armazena o número de habitantes da cidade
    float area = 0;         // Armazena a área da cidade em km²
    float pib = 0;          // Armazena o PIB da cidade em bilhões de reais
    int turistico = 0;      // Armazena a quantidade de pontos turísticos da cidade

    // Declaração de variáveis da carta 2
    char Estado2;            // Armazena a letra que representa o estado (de 'A' a 'H')
    char codigo2[6];         // Armazena o código da carta (como uma string de até 5 caracteres + '\0')
    char cidade2[30];        // Armazena o nome da cidade (até 29 caracteres + '\0')
    int populacao2 = 0;      // Armazena o número de habitantes da cidade
    float area2 = 0;         // Armazena a área da cidade em km²
    float pib2 = 0;          // Armazena o PIB da cidade em bilhões de reais
    int turistico2 = 0;      // Armazena a quantidade de pontos turísticos da cidade

// Entrada dos dados da carta 1

    // Solicita ao usuário que digite uma letra de 'A' a 'H' representando o estado
    printf("Digite uma letra de 'A' a 'H' que representa o Estado da carta 1: ");
    scanf("%c", &Estado);   // Lê um caractere e armazena em Estado

    // Solicita ao usuário que digite o código da carta
    printf("Digite um numero de '01 a '04' que representa o codigo da carta 1: ");
    scanf(" %s", codigo);   // Lê uma string e armazena em codigo (espaço antes do %s ignora caracteres em branco)

    getchar();              // Limpa o caractere de nova linha '\n' deixado no buffer pelo scanf anterior

    // Solicita ao usuário o nome da cidade
    printf("Digite o nome da cidade da carta 1: ");
    fgets(cidade, 30, stdin); // Lê uma linha (incluindo espaços) e armazena em cidade

    // Remove o caractere de nova linha '\n' do final da string cidade, se presente
    cidade[strcspn(cidade, "\n")] = 0;

    // Solicita ao usuário o número de habitantes
    printf("Digite número de habitantes da cidade da carta 1: ");
    scanf("%d", &populacao); // Lê um número inteiro e armazena em populacao

    // Solicita ao usuário a área da cidade
    printf("Digite a area da cidade em km² da carta 1: ");
    scanf("%f", &area);      // Lê um número decimal e armazena em area

    // Solicita ao usuário o PIB da cidade
    printf("Digite o Produto Interno Bruto da cidade da cidade da carta 1 (em bilhões de reais): ");
    scanf("%f", &pib);       // Lê um número decimal e armazena em pib

    // Solicita ao usuário o número de pontos turísticos da cidade
    printf("Digite a quantidade de pontos turísticos na cidade da carta 1: ");
    scanf("%d", &turistico); // Lê um número inteiro e armazena em turistico

// ---------- Entrada dos dados da carta 2 ----------

    printf("\nDigite uma letra de 'A' a 'H' que representa o Estado da carta 2: ");
    scanf(" %c", &Estado2);

    printf("Digite um numero de '01 a '04' que representa o codigo da carta 2: ");
    scanf(" %s", codigo2);

getchar();

    printf("Digite o nome da cidade da carta 2: ");
    fgets(cidade2, 30, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Digite número de habitantes da cidade da carta 2: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade em km² da carta 2: ");
    scanf("%f", &area2);

    printf("Digite o Produto Interno Bruto da cidade da carta 2 (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos na cidade da carta 2: ");
    scanf("%d", &turistico2);

    // Exibe todos os dados armazenados da carta 1
    printf("\nCarta 1 \n");
    printf("Estado: %c \n", Estado);             // Mostra a letra do estado
    printf("Código: %c%s\n", Estado, codigo);    // Mostra o código, incluindo o estado como prefixo (opcional, mas aqui está como concatenação)
    printf("Nome da Cidade: %s\n", cidade);      // Mostra o nome da cidade
    printf("População: %d \n", populacao);       // Mostra a população
    printf("Área: %.2f km²\n", area);            // Mostra a área com duas casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib); // Mostra o PIB com duas casas decimais
    printf("Número de Pontos Turísticos: %d\n\n", turistico); // Mostra o número de pontos turísticos

//Exibição dos dados da carta 2

    printf("Carta 2\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %c%s\n", Estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n\n", turistico2);

return 0; // Fim do programa

}