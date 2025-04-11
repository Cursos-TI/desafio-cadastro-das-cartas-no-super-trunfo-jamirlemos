#include <stdio.h>

int main() {
    char Estado;
    char codigo[6];
    char cidade[30];
    int populacao = 0;
    float area = 0;
    float pib = 0;
    int turistico = 0;

    printf("Digite uma letra de 'A' a 'H' que representa o Estado da carta 1: ");
    scanf("%c", &Estado);
    
    printf("Digite um numero de '01 a '04' que representa o codigo da carta 1: ");
    scanf(" %s", codigo);

    getchar();

    printf("Digite o nome da cidade da carta 1: ");
    fgets(cidade, 30, stdin);
    //scanf(" %s", cidade);
    
    cidade[strcspn(cidade, "\n")] = 0;

    printf("Digite número de habitantes da cidade da carta 1: ");
    scanf("%d", &populacao);

    printf("Digite a area da cidade em km² da carta 1: ");
    scanf("%f", &area);

    printf("Digite o Produto Interno Bruto da cidade da cidade em bilhões de reais da carta 1: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos na cidade da carta 1: ");
    scanf("%d", &turistico);

    printf("\nCarta 1 \n");
    printf("Estado: %c \n", Estado);
    printf("Código: %c", Estado);
    printf("%s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n\n", turistico);
 
    return 0;
}