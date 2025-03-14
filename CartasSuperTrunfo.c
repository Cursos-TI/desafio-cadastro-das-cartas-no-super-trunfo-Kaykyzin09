#include <stdio.h>

int main(){
//declaração da variável da carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float percapita1;
    float superPoder1;

//declaração da variável da carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float percapita2;
    float superPoder2;

//leitura dos dados da carta 1
    printf("Insira os dados da carta 1 \n");
    printf("Estado (A-H): ");
    scanf("%c", &estado1);
        
    printf("Insira um código da carta: ");
    scanf("%s", codigo1);
        
    printf("Insira o nome da cidade: ");
    scanf("%s", cidade1);
         
    printf("Insira a população: ");
    scanf("%lu", &populacao1);
         
    printf("Insira a área (km²): ");
    scanf("%f", &area1);
         
    printf("Insira o PIB (bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Insira os Pontos Turisticos: ");
    scanf("%d", &pontos1);
    
//calculando densidade, super poder e pib per capita da carta 1
    densidade1 = populacao1 / area1;

    percapita1 = (pib1 * 1000000000) / populacao1;
    
    superPoder1 = populacao1 + area1 + pib1 + pontos1 + percapita1 + (1 / densidade1);
           
//leitura dos dados da carta 2
    printf("\nInsira os dados da carta 2\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
         
    printf("Insira um código da carta: ");
    scanf("%s", codigo2);

    printf("Insira o nome da cidade: ");
    scanf("%s", cidade2);
         
    printf("Insira a população: ");
    scanf("%lu", &populacao2);
         
    printf("Insira a área (km²): ");
    scanf("%f", &area2);
         
    printf("Insira o PIB (bilhões de reais): ");
    scanf("%f", &pib2);

         
    printf("Insira os Pontos Turisticos: ");
    scanf("%d", &pontos2);
    
//calculando densidade, super poder e pib per capita da carta 2
    densidade2 = populacao2 / area2;

    percapita2 = (pib2 * 1000000000) / populacao2;
    
    superPoder2 = populacao2 + area2 + pib2 + pontos2 + percapita2 + (1 / densidade2);
         
//exibição da carta 1
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
         
//exibição da carta 2
    printf("\n***Carta 2***\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População; %lu\n", populacao2);
    printf("Área: %.2f km²\n",area2);
    printf("PIB: %.2f bilhões de reais\n",pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n",percapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    
//estrutura de decisão do Atributo ( População )
    printf("Comparações de atributos\n Atributo: população\n");
    printf("Carta 1: (%s): %lu\nCarta 2: (%s): %lu\n", cidade1, populacao1, cidade2, populacao2);
    if(populacao1 > populacao2) {
        printf("Resultado: Carta 1 venceu: %s: %lu\n", cidade1, populacao1);
} else {
        printf("Resultado: Carta 2 venceu: %s: %lu\n", cidade2, populacao2);
}

//estrutura de decisão do Atributo ( Área )    
    printf("\nAtributo: Área\n");
    printf("Carta 1: (%s): %.2f km²\nCarta 2: (%s): %.2f km²\n", cidade1, area1, cidade2, area2);
    if(area1 > area2) {
        printf("Resultado: Carta 1 venceu: (%d): %.2f km²\n", cidade1, area1);
} else {
        printf("Resultado: Carta 2 venceu: (%s): %.2f km²\n", cidade2, area2);
}

//estrutura de decisão do Atributo ( PIB )
    printf("\nAtributo: PIB\n");
    printf("Carta 1: (%s): %.2f bilhões de reais\nCarta 2: (%s): %.2f bilhões de reais\n", cidade1, pib1, cidade2, pib2);
    if(pib1 > pib2) {
        printf("Resultado: Carta 1 venceu: (%s): %.2f bilhões de reais\n ", cidade1, pib1);
} else {
        printf("Resultado: Carta 2 venceu: (%s): %.2f bilhões de reais\n", cidade2, pib2);    
}

// Estrutura de decisão do Atributo ( Pontos Turisticos )
    printf("\nAtributo: Pontos Turisticos:\n");
    printf("Carta 1: (%s): %d\nCarta 2: (%s): %d\n", cidade1, pontos1, cidade2, pontos2);
    if(pontos1 > pontos2) {
        printf("Resultado: Carta 1 venceu: (%s): %d\n", cidade1, pontos1);
} else {
        printf("Resultado: Carta 2 venceu: (%s): %d\n", cidade2, pontos2);
}

//Estrutura de decisão Atributo ( Densidade Populacional )
    printf("\nAtributo: Densidade Populacional:\n");
    printf("Carta 1: (%s): %.2f hab/km²\nCarta 2: (%s): %.2fhab/km²\n", cidade1, densidade1, cidade2, densidade2);
    if(densidade1 < densidade2) {
        printf("Resultado: Carta 1 venceu: (%s): %.2f hab/km²\n", cidade1, densidade1);
} else {
        printf("Resultado: Carta 2 venceu: (%s): %.2f hab/km²\n", cidade2, densidade2);
}

// Estrutura de decisão Atributo ( PIB per capita )
    printf("\nAtributo: PIB per capita:\n"); 
    printf("Carta 1: (%s): %.2f reais\nCarta 2: (%s): %.2f reais\n", cidade1, percapita1, cidade2, percapita2);
    if(percapita1 > percapita2){
        printf("Resultado: Carta 1 venceu: (%s): %.2f reais\n", cidade1, percapita2);
} else {
        printf("Resultado: Carta 2 venceu: (%s): %.2f reais\n", cidade2, percapita2);
}

//Estrutura de decisão atributo ( SUPER PODER )
    printf("\nAtributo: Super Poder:\n"); 
    printf("Carta 1: (%s): %.2f\nCarta 2: (%s): %.2f\n", cidade1, superPoder1, cidade2, superPoder2);
    if(superPoder1 > superPoder2){
        printf("Resultado: Carta 1 venceu: (%s): %.2f\n", cidade1, superPoder1);
} else {
        printf("Resultado: Carta 2 venceu: (%s): %.2f\n", cidade2, superPoder2);
}

return 0;
}