#include <stdio.h>

int main()
{
// declaração da variavel das cartas
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    float percapita1, percapita2;
    float superPoder1, superPoder2;

// leitura da carta 1
    printf("Insira os dados da carta 1 \n");
    printf("Estado (A-H): ");
    scanf("%c", &estado1);

    printf("Insira um código da carta: ");
    scanf("%s", codigo1);

    printf("Insira o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Insira a população: ");
    scanf("%d", &populacao1);

    printf("Insira a Área (km²): ");
    scanf("%f", &area1);

    printf("Insira o PIB (bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Insira os Pontos Turísticos: ");
    scanf("%d", &pontos1);

// calculando densidade, super poder e pib per capita da carta 1
    densidade1 = populacao1 / area1;

    percapita1 = (pib1 * 1000000000) / populacao1;

    superPoder1 = populacao1 + area1 + pib1 + pontos1 + percapita1 + (1 / densidade1);

// leitura dos dados da carta 2
    printf("\nInsira os dados da carta 2\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Insira um código da carta: ");
    scanf("%s", codigo2);

    printf("Insira o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Insira a população: ");
    scanf("%d", &populacao2);

    printf("Insira a Área (km²): ");
    scanf("%f", &area2);

    printf("Insira o PIB (bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Insira os Pontos Turísticos: ");
    scanf("%d", &pontos2);

// calculando densidade, super poder e pib per capita da carta 2
    densidade2 = populacao2 / area2;

    percapita2 = (pib2 * 1000000000) / populacao2;

    superPoder2 = populacao2 + area2 + pib2 + pontos2 + percapita2 + (1 / densidade2);

// exibição da carta 1
    printf("\n***Carta 1***\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", percapita1);
    printf("Super Poder: %.2f\n", superPoder1);

// exibição da carta 2
    printf("\n***Carta 2***\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População; %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", percapita2);
    printf("Super Poder: %.2f\n", superPoder2);

//menu interativo da carta 1
    int opcao1, opcao2;
    float soma1 = 0.0, soma2 = 0.0;

    printf("\n### Escolha 2 atributos para comparar ###\n");
    printf("Escolha o primeiro atributo para comparar\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Pupulacional\n");
    printf("6. PIB Per Capita\n");
    printf("7. Super Poder\n");

    scanf("%d", &opcao1);

    switch (opcao1)
    {
    case 1:
        printf("\nVocê escolheu o atributo População!\n");
        soma1 += populacao1;
        soma2 += populacao2;
        break;
    case 2:
        printf("\nVocê escolheu o atributo Área!\n");
        soma1 += area1;
        soma2 += area2;
        break;
    case 3:
        printf("\nVocê escolheu o atributo PIB!\n");
        soma1 += pib1;
        soma2 += pib2;
        break;
    case 4:
        printf("\nVocê escolheu o atributo Pontos Turísticos!\n");
        soma1 += pib1;
        soma2 += pib2;
        break;
    case 5:
        printf("\nVocê escolheu o atributo Densidade Populacional!\n");
        soma1 += densidade1;
        soma2 += densidade2;
        break;
    case 6:
        printf("\nVocê escolheu o atributo PIB Per Capita!\n");
        soma1 += percapita1;
        soma2 += percapita2;
        break;
    case 7:
        printf("\nVocê escolheu o atributo SUPER PODER!!!\n");
        soma1 += superPoder1;
        soma2 += superPoder2;
        break;
    default:
        printf("\nOpção Invílida!!\n");
    }
    
//menu interativo da carta 2
    printf("\n### Escolha o segundo atributo para comparar ###\n");
    printf("Atenção: Você deve escolher um atributo diferente do primeiro\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Pupulacional\n");
    printf("6. PIB Per Capita\n");
    printf("7. Super Poder\n");

    printf("Escolha o segundo atributo\n");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2)
    {
        printf("Você escolheu o mesmo atributo!!\n");
    } else {
        switch (opcao2)
        {
        case 1:
            printf("\nVocê escolheu o atributo População!\n");
            soma1 += populacao1;
            soma2 += populacao2; 
            break;
        case 2:
            printf("\nVocê escolheu o atributo Área!\n");
            soma1 += area1;
            soma2 += area2;
            break;
        case 3:
            printf("\nVocê escolheu o atributo PIB!\n");
            soma1 += pib1;
            soma2 += pib2;
            break;
        case 4:
            printf("\nVocê escolheu o atributo Pontos Turísticos!\n");
            soma1 += pontos1;
            soma2 += pontos2;
            break;
        case 5:
            printf("\nVocê escolheu o atributo Densidade Populacional!\n");
            soma1 += densidade1;
            soma2 += densidade2;
            break;
        case 6:
            printf("\nVocê escolheu o atributo PIB Per Capita!\n");
            soma1 += percapita1;
            soma2 += percapita2;
            break;
        case 7:
            printf("\nVocê escolheu o atributo SUPER PODER!\n");
            soma1 += superPoder1;
            soma2 += superPoder2;
            break;
        default:
            printf("\nOpção Inválida\n");
            break;
        }
    }
//Exibição das soma dos Atributos
    printf("Soma dos Atributos escolhidos:\n"); 
    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n", cidade2, soma2);       
    
//Resultado da carta vencedora    
    (soma1 > soma2) ? printf("\n%s venceu!\n", cidade1) : 
    (soma2 > soma1) ? printf("\n%s venceu!\n", cidade2) : 
                      printf("\nEmpate!\n");
    return 0;
}