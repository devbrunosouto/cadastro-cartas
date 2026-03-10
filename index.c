#include <stdio.h>

int main() {
    char estado1[20], estado2[20];
    char codigo1[10], codigo2[10];
    char nome1[20], nome2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turismo1, turismo2;

    printf("Digite o nome do estado:\n"); // Primeira parte do código para cartas um.
    scanf("%s", estado1);
    printf("Digite o código do estado:\n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade:\n");
    scanf("%s", nome1);
    printf("Digite a população do estado:\n");
    scanf("%d", &populacao1);
    printf("Digite a área do estado:\n");
    scanf("%f", &area1);
    printf("Digite o PIB do estado:\n");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos do estado:\n");
    scanf("%d", &turismo1);
    printf("Nome do estado: %s\n", estado1);
    printf("Código do estado: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nome1);
    printf("População do estado: %d\n", populacao1);
    printf("Área do estado: %.2f\n", area1);
    printf("PIB do estado: %.2f\n", pib1);
    printf("Número de pontos turísticos do estado: %d\n", turismo1);

    printf("Digite o nome do estado dois:\n"); // Segunda parte do código para cartas dois.
    scanf("%s", estado2);
    printf("Digite o código do estado:\n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", nome2);
    printf("Digite a população do estado:\n");
    scanf("%d", &populacao2);
    printf("Digite a área do estado:\n");
    scanf("%f", &area2);
    printf("Digite o PIB do estado:\n");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos do estado:\n");
    scanf("%d", &turismo2);
    printf("Nome do estado: %s\n", estado2);
    printf("Código do estado: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População do estado: %d\n", populacao2);
    printf("Área do estado: %.2f\n", area2);
    printf("PIB do estado: %.2f\n", pib2);
    printf("Número de pontos turísticos do estado: %d\n", turismo2);
}