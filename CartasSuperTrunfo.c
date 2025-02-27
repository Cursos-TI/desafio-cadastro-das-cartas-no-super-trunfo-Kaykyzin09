#include <stdio.h>
int main(){
    //declaração da variável da carta 1
        char estado1;
        char codigo1[4];
        char cidade1[50];
        int populacao1;
        float area1;
        float pib1;
        int pontos1;
        
    //declaração da variável da carta 2
        char estado2;
        char codigo2[4];
        char cidade2[50];
        int populacao2;
        float area2;
        float pib2;
        int pontos2;
        
     //leitura dos dados da carta 1
         printf("Insira os dados da carta 1 \n");
         printf("Estado (A-H): ");
         scanf("%c", &estado1);
         
         printf("Insira um código da carta: ");
         scanf("%s", codigo1);
         
         printf("Insira o nome da cidade: ");
         scanf("%s", cidade1);
         
         printf("Insira a população: ");
         scanf("%d", &populacao1);
         
         printf("Insira a área (km²): ");
         scanf("%f", &area1);
         
         printf("Insira o PIB (bilhões de reais): ");
         scanf("%f", &pib1);
         
         printf("Insira os Pontos Turisticos: ");
         scanf("%d", &pontos1);
         
     //leitura dos dados da carta 2
         printf("\nInsira os dados da carta 2\n");
         printf("Estado (A-H): ");
         scanf(" %c", &estado2);
         
         printf("Insira um código da carta: ");
         scanf("%s", codigo2);
         
         printf("Insira o nome da cidade: ");
         scanf("%s", cidade2);
         
         printf("Insira a população: ");
         scanf("%d", &populacao2);
         
         printf("Insira a área (km²): ");
         scanf("%f", &area2);
         
         printf("Insira o PIB (bilhões de reais): ");
         scanf("%f", &pib2);
         
         printf("Insira os Pontos Turisticos: ");
         scanf("%d", &pontos2);
         
     //exibição da carta 1   
         printf("\nCarta 1\n");
         printf("Estado: %c\n", estado1);
         printf("Código: %s\n", codigo1);
         printf("Cidade: %s\n", cidade1);
         printf("População: %d\n", populacao1);
         printf("Área: %.2f km²\n", area1);
         printf("PIB: %.2f bilhões de reais\n", pib1);
         printf("Pontos Turisticos: %d\n", pontos1);
         
     //exibição da carta 2
        printf("\nCarta 2\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Cidade: %s\n", cidade2);
        printf("População; %d\n", populacao2);
        printf("Área: %.2f km²\n",area2);
        printf("PIB: %.2f bilhões de reais\n",pib2);
        printf("Pontos Turisticos: %d\n", pontos2);

        
        
    }