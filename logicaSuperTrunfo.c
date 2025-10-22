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
    printf("Carta 1:\n");
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
    printf("\nCarta 2:\n");
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

    float densidadeinvers1 = 1 / densidade1;
    float densidadeinvers2 = 1 / densidade2;

    //Primeiro menu
    int opcao1, opcao2;
    float valor1c1 = 0, valor1c2 = 0;
    float valor2c1 = 0, valor2c2 = 0;
    float soma1, soma2;

    printf("\nMenu Principal\n");
    printf("Escolha o primeiro atributo que deseja comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB Per Capita\n");
    printf("Escolha: ");
    scanf("%d", &opcao1);

    //Segundo menu (Sem repetir o primeiro)
    printf("\nEscolha o segundo atributo que deseja comparar (Sem repetir o primeiro):\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB Per Capita\n");
    printf("Escolha: ");
    scanf("%d", &opcao2);

    //Impede de escolher o mesmo
    if (opcao1 == opcao2) {
        printf("\nVocê não pode escolher o mesmo atributo para comparar");
        return 0;
    }

    //Switch para a primeira comparação
    printf("\nPrimeira Comparação\n");
    switch (opcao1) {
        case 1:
            printf("\nComparação de cartas (Atributo: População)\n");
            printf("Carta 1 - %s (%s): %ld\n", nome1, estado1, populacao1);
            printf("Carta 2 - %s (%s): %ld\n", nome2, estado2, populacao2);
            valor1c1 = populacao1;
            valor1c2 = populacao2;
            (valor1c1 > valor1c2) ? printf ("Carta 1 venceu (População): %ld\n", populacao1) :
            (valor1c1 < valor1c2) ? printf ("Carta 2 venceu (População): %ld\n", populacao2) :
            printf("Atributo empatado\n");
            break;
        case 2:
            printf("\nComparação de cartas (Atributo: Área)\n");
            printf("Carta 1 - %s (%s): %.2f\n", nome1, estado1, area1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, estado2, area2);
            valor1c1 = area1;
            valor1c2 = area2;
            (valor1c1 > valor1c2) ? printf ("Carta 1 venceu (Área): %.2f\n", area1) :
            (valor1c1 < valor1c2) ? printf ("Carta 2 venceu (Área): %.2f\n", area2) :
            printf("Atributo empatado\n");
            break;
        case 3:
            printf("\nComparação das cartas (Atributo: PIB)\n");
            printf("Carta 1 - %s (%s): %.2f\n", nome1, estado1, pib1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, estado2, pib2);
            valor1c1 = pib1;
            valor1c2 = pib2;
            (valor1c1 > valor1c2) ? printf ("Carta 1 venceu (PIB): %.2f\n", pib1) :
            (valor1c1 < valor1c2) ? printf ("Carta 2 venceu (PIB): %.2f\n", pib2) :
            printf("Atributo empatado\n");
            break;
        case 4:
            printf("\nComparação de cartas (Atributo: Pontos Turísticos)\n");
            printf("Carta 1 - %s (%s): %d\n", nome1, estado1, ponto1);
            printf("Carta 2 - %s (%s): %d\n", nome2, estado2, ponto2);
            valor1c1 = ponto1;
            valor1c2 = ponto2;
            (valor1c1 > valor1c2) ? printf ("Carta 1 venceu (Pontos Turísticos): %d\n", ponto1) :
            (valor1c1 < valor1c2) ? printf ("Carta 2 venceu (Pontos Turísticos): %d\n", ponto2) :
            printf("Atributo empatado\n");
            break;
        case 5:
            printf("\nComparação de cartas (Atributo: Densidade Populacional)\n");
            printf("Carta 1 - %s (%s): %.2f\n", nome1, estado1, densidade1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, estado2, densidade2);
            valor1c1 = densidadeinvers1;
            valor1c2 = densidadeinvers2;
            (densidade1 < densidade2) ? printf("Carta 1 venceu (Densidade Menor): %.2f\n", densidade1) :
            (densidade1 > densidade2) ? printf("Carta 2 venceu (Densidade Menor): %.2f\n", densidade2) :
            printf("Atributo empatado\n");
            break;
        case 6:
            printf("\nComparação de cartas (Atributo: PIB per Capita)\n");
            printf("Carta 1 - %s (%s): %.2f\n", nome1, estado1, pibpercapita1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, estado2, pibpercapita2);
            valor1c1 = pibpercapita1;
            valor1c2 = pibpercapita2;
            (valor1c1 > valor1c2) ? printf ("Carta 1 venceu (PIB per Capita): %.2f\n", pibpercapita1) :
            (valor1c1 < valor1c2) ? printf ("Carta 2 venceu (PIB per Capita): %.2f\n", pibpercapita2) :
            printf("Atributo empatado\n");
            break;
        default:
            printf("Opção inválida\n");
            return 0;

            
    }
    
    //Switch para a segunda comparação
    printf("\nSegunda Comparação\n");
    switch (opcao2) {
        case 1:
            printf("\nComparação de cartas (Atributo: População)\n");
            printf("Carta 1 - %s (%s): %ld\n", nome1, estado1, populacao1);
            printf("Carta 2 - %s (%s): %ld\n", nome2, estado2, populacao2);
            valor2c1 = populacao1;
            valor2c2 = populacao2;
            (valor2c1 > valor2c2) ? printf ("Carta 1 venceu (População): %ld\n", populacao1) :
            (valor2c1 < valor2c2) ? printf ("Carta 2 venceu (População): %ld\n", populacao2) :
            printf("Atributo empatado\n");
            break;
        case 2:
            printf("\nComparação de cartas (Atributo: Área)\n");
            printf("Carta 1 - %s (%s): %.2f\n", nome1, estado1, area1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, estado2, area2);
            valor2c1 = area1;
            valor2c2 = area2;
            (valor2c1 > valor2c2) ? printf ("Carta 1 venceu (Área): %.2f\n", area1) :
            (valor2c1 < valor2c2) ? printf ("Carta 2 venceu (Área): %.2f\n", area2) :
            printf("Atributo empatado\n");
            break;
        case 3:
            printf("\nComparação das cartas (Atributo: PIB)\n");
            printf("Carta 1 - %s (%s): %.2f\n", nome1, estado1, pib1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, estado2, pib2);
            valor2c1 = pib1;
            valor2c2 = pib2;
            (valor2c1 > valor2c2) ? printf ("Carta 1 venceu (PIB): %.2f\n", pib1) :
            (valor2c1 < valor2c2) ? printf ("Carta 2 venceu (PIB): %.2f\n", pib2) :
            printf("Atributo empatado\n");
            break;
        case 4:
            printf("\nComparação de cartas (Atributo: Pontos Turísticos)\n");
            printf("Carta 1 - %s (%s): %d\n", nome1, estado1, ponto1);
            printf("Carta 2 - %s (%s): %d\n", nome2, estado2, ponto2);
            valor2c1 = ponto1;
            valor2c2 = ponto2;
            (valor2c1 > valor2c2) ? printf ("Carta 1 venceu (Pontos Turísticos): %d\n", ponto1) :
            (valor2c1 < valor2c2) ? printf ("Carta 2 venceu (Pontos Turísticos): %d\n", ponto2) :
            printf("Atributo empatado\n");
            break;
        case 5:
            printf("\nComparação de cartas (Atributo: Densidade Populacional)\n");
            printf("Carta 1 - %s (%s): %.2f\n", nome1, estado1, densidade1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, estado2, densidade2);
            valor2c1 = densidadeinvers1;
            valor2c2 = densidadeinvers2;
            (densidade1 < densidade2) ? printf("Carta 1 venceu (Densidade Menor): %.2f\n", densidade1) :
            (densidade1 > densidade2) ? printf("Carta 2 venceu (Densidade Menor): %.2f\n", densidade2) :
            printf("Atributo empatado\n");
            break;
        case 6:
            printf("\nComparação de cartas (Atributo: PIB per Capita)\n");
            printf("Carta 1 - %s (%s): %.2f\n", nome1, estado1, pibpercapita1);
            printf("Carta 2 - %s (%s): %.2f\n", nome2, estado2, pibpercapita2);
            valor2c1 = pibpercapita1;
            valor2c2 = pibpercapita2;
            (valor2c1 > valor2c2) ? printf ("Carta 1 venceu (PIB per Capita): %.2f\n", pibpercapita1) :
            (valor2c1 < valor2c2) ? printf ("Carta 2 venceu (PIB per Capita): %.2f\n", pibpercapita2) :
            printf("Atributo empatado\n");
            break;
        default:
            printf("Opção inválida\n");
            return 0;
            
    }
    
    //Soma e resultado final
    soma1 = valor1c1 + valor2c1;
    soma2 = valor1c2 + valor2c2;

    printf("\nResultado Final\n");
    printf("Carta 1 %s (%s) Soma = %.6f\n", nome1, estado1, soma1);
    printf("Carta 2 %s (%s) Soma = %.6f\n", nome2, estado2, soma2);

    (soma1 > soma2) ? printf("Carta 1 (%s) Venceu!\n", nome1) :
    (soma1 < soma2) ? printf("Carta 2 (%s) Venceu!\n", nome2) :
    printf("As cartas empataram!\n");

    return 0;
}
