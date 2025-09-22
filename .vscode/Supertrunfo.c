#include <stdio.h>

int main() {
    
    float PIB1, area1;
    int populacao1, pontosturisticos1, codigo1;
    char estado1[20];
	int pais;

   
    float PIB2, area2;
    int populacao2, pontosturisticos2, codigo2;
   char estado2[20];

    printf("BEM VINDO AO SUPER TRUNFO! \n");
    
     //CARTA DO JOGADOR 1 //
    printf("\n Carta 1 \n");
    printf("\n == Seu codigo J01== \n");
    printf("1 - Brasil\n");
    printf("2 - Japao\n");
    printf("3 - EUA\n");
    printf("4 - Russia\n");
    printf("Digite sua escolha: ");
    scanf("%d", &pais);

    if (pais == 1) {
        printf("Sua carta sera o Brasil\n");
    } else if (pais == 2) {
        printf("Sua carta sera o Japao\n");
    } else if (pais == 3) {
        printf("Sua carta sera os EUA\n");
    } else if (pais == 4) {
        printf("Sua carta sera a Russia\n");
    } else {
        printf("Digite um numero corretamente, referente aos paises disponiveis\n");
    }

    printf("Digite seu Estado: ");
    scanf("%s", &estado1);
    
    printf("Digite o PIB do estado: ");
    scanf("%f", &PIB1);

    printf("Digite a populacao do estado: ");
    scanf("%d", &populacao1);

    printf("Digite os pontos turisticos do estado: ");
    scanf("%d", &pontosturisticos1);

    printf("Digite a area do estado: ");
    scanf("%f", &area1);
    


    
//CARTA DO JOGADOR 2 //
  
    printf("\n Carta 2 \n");
    printf("\n == Seu codigo e J02 == \n");
    printf("1 - Brasil\n");
    printf("2 - Japao\n");
    printf("3 - EUA\n");
    printf("4 - Russia\n");
    printf("Digite sua escolha: ");
    scanf("%d", &pais);

    if (pais == 1) {
        printf("Sua carta sera o Brasil\n");
    } else if (pais == 2) {
        printf("Sua carta sera o Japao\n");
    } else if (pais == 3) {
        printf("Sua carta sera os EUA\n");
    } else if (pais == 4) {
        printf("Sua carta sera a Russia\n");
    } else {
        printf("Digite um numero corretamente, referente aos paises disponiveis\n");
    }

    printf("Digite seu Estado: ");
    scanf("%s", &estado2);
    
    printf("Digite o PIB do estado: ");
    scanf("%f", &PIB2);

    printf("Digite a populacao do estado: ");
    scanf("%d", &populacao2);

    printf("Digite os pontos turisticos do estado: ");
    scanf("%d", &pontosturisticos2);

    printf("Digite a area do estado: ");
    scanf("%f", &area2);
    
    printf("Digite seu Estado: \n");
    scanf("%c", &estado2);

 
    printf("\n Cartas Cadastradas \n");

    printf("\nCarta 1:\n");
    printf("Seu estado e: %s\n", estado1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", PIB1);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos1);

    printf("\nCarta 2:\n");
    printf("Seu estado e: %s\n", estado2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", PIB2);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos2);

    return 0;