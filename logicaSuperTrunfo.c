#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    
    // Variáveis carta 1:
    char estado1[10];
    char codigo1[10];
    char nome1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int ponto1;
    float densidade1;
    float pibpercapita1;
    
    // Variáveis carta 2:
    char estado2[10];
    char codigo2[10];
    char nome2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int ponto2;
    float densidade2;
    float pibpercapita2;

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    
    // Cadastro Carta 1:
    printf("Carta1:\n");
    printf("Digite o Estado (Sigla): ");
    scanf("%s", estado1);
    printf("Digite o Código da Carta (01-04): ");
    scanf("%s", codigo1);
    printf("Digite o Nome da Cidade (Sem Espaço): ");
    scanf("%s", nome1);
    printf("Digite a População: ");
    scanf("%ld", &populacao1);
    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &ponto1);

    // Cadastro Carta 2:
    printf("Carta2:\n");
    printf("Digite o Estado (Sigla): ");
    scanf("%s", estado2);
    printf("Digite o Código da Carta (01-04): ");
    scanf("%s", codigo2);
    printf("Digite o Nome da Cidade (Sem Espaço): ");
    scanf("%s", nome2);
    printf("Digite a População: ");
    scanf("%ld", &populacao2);
    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &ponto2);

    // Calculo de densidade e PIB per capita da carta 1
    densidade1 = (float) populacao1 / area1;
    pibpercapita1 = (float) (pib1 * 1000000000) / populacao1;


    // Calculo de densidade e PIB per capita da carta 2
    densidade2 = (float) populacao2 / area2;
    pibpercapita2 = (float) (pib2 * 1000000000) / populacao2;

    //Menu do jogo
    int opcao;
    printf("Menu Principal\n");
    printf("Escolha o atributo que deseja comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB Per Capita\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    //Switch para a comparação de atributos de acordo com a escolha do jogador
    switch (opcao) {
        case 1:
            printf("\nComparação de cartas (Atributo: População)\n");
            printf("Carta 1 - %s (%s): %ld\n", nome1, estado1, populacao1);
            printf("Carta 2 - %s (%s): %ld\n", nome2, estado2, populacao2);
    
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) Venceu!\n", nome1);
            } else if (populacao1 < populacao2) {
                printf("Resultado: Carta 2 (%s) Venceu!\n", nome2);
            } else {
                printf("Atributo Empatado!\n"); 
            }
            break;
        case 2:
            printf("\nComparação de cartas (Atributo: Área)\n");
            printf("Carta 1 - %s (%s): %.2f\n", nome1, estado1, area1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, estado2, area2);

            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) Venceu!\n", nome1);
            } else if (area1 < area2) {
                printf("Resultado: Carta 2 (%s) Venceu!\n", nome2);
            } else {
                printf("Atributo Empatado!");
            }
            break;
        case 3:
            printf("\nComparação das cartas (Atributo: PIB)\n");
            printf("Carta 1 - %s (%s): %.2f\n", nome1, estado1, pib1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, estado2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) Venceu!\n", nome1);
            } else if (pib1 < pib2) {
                printf("Resultado: Carta 2 (%s) Venceu!\n", nome2);
            } else {
                printf("Atributo Empatado!\n");
            }
            break;
        case 4:
            printf("\nComparação de cartas (Atributo: Pontos Turísticos)\n");
            printf("Carta 1 - %s (%s): %d\n", nome1, estado1, ponto1);
            printf("Carta 2 - %s (%s): %d\n", nome2, estado2, ponto2);

            if (ponto1 > ponto2) {
                printf("Resultado: Carta 1 (%s) Venceu!\n", nome1);
            } else if (ponto1 < ponto2) {
                printf("Resultado: Carta 2 (%s) Venceu!\n", nome2);
            } else {
                printf("Atributo Empatado!");
            }
            break;
        case 5:
            printf("\nComparação de cartas (Atributo: Densidade Populacional)\n");
            printf("Carta 1 - %s (%s): %.2f\n", nome1, estado1, densidade1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, estado2, densidade2);

            if (densidade1 < densidade2) {
                printf("Resultado: Carta 1 (%s) Venceu!\n", nome1);
            } else if (densidade1 > densidade2) {
                printf("Resultado: Carta 2 (%s) Venceu!\n", nome2);
            } else {
                printf("Atributo Empatado!");
            }
            break;
        case 6:
            printf("\nComparação de cartas (Atributo: PIB per Capita)\n");
            printf("Carta 1 - %s (%s): %.2f\n", nome1, estado1, pibpercapita1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, estado2, pibpercapita2);

            if (pibpercapita1 > pibpercapita2) {
                printf("Resultado: Carta 1 (%s) Venceu!\n", nome1);
            } else if (pibpercapita1 < pibpercapita2) {
                printf("Resultado: Carta 2 (%s) Venceu!\n", nome2);
            } else {
                printf("Atributo Empatado!");
            }
            break;
        default:
            printf("Opção inválida");
            
    }
    
    
    return 0;
}
