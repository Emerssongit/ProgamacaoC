#include <stdio.h>

int main() {
    
    char estado[40];
    char codigo[5];
    char cidade[90];
    int populacao, numero;
    float area;
    float pib;

    printf("Codigo: 1\n");
    printf("Estado: ");
    scanf("%s", estado);

    printf("Codigo da carta: ");
    scanf("%s", codigo);

    printf("Nome da cidade: ");
    scanf("%s", cidade);

    printf("População: ");
    scanf(" %i", &populacao);

    printf("Área: ");
    scanf(" %f", &area);

    printf("PIB: ");
    scanf(" %f", &pib);

    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &numero);

    return 0;
}