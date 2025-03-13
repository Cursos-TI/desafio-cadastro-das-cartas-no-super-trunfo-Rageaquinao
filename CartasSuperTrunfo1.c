#include <stdio.h>

int main() {
    // Carta 1
    char Estado1;
    char Cod1[50];
    char Nome1[50];
    float Pop1;
    float Area1;
    float Pib1;
    int pontost1;
    float DensidP1;
    float PpC1;
    float Superpoder1;

    // Carta 2
    char Estado2;
    char Cod2[50];
    char Nome2[50];
    float Pop2;
    float Area2;
    float Pib2;
    int pontost2;
    float DensidP2;
    float PpC2;
    float Superpoder2;

    // Comparativos de cartas
    float resultadopopulcao1, resultadopopulcao2;
    float resultadoarea1, resultadoarea2;
    float resultadopib1, resultadopib2;
    float resultadopontos1, resultadopontos2;
    float resultadodensidade1, resultadodensidade2;
    float resultadopibpC1, resultadopibpC2;
    float resultadoSuperPoder1, resultadoSuperPoder2;

    // Cadastro Carta1
    printf("-------------------Carta 1------------------------\n");
    printf("Digite a letra do estado: \n");
    scanf(" %c", &Estado1);  // Corrigido com espaço antes de %c
    printf("Digite o código da carta: \n");
    scanf("%s", Cod1);
    printf("Digite o nome da cidade sem espaço: \n");
    scanf("%s", Nome1);
    printf("Digite a quantidade da população: \n");
    scanf("%f", &Pop1);
    printf("Digite a área em km²: \n");
    scanf("%f", &Area1);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &Pib1);
    printf("Digite os pontos turísticos: \n");
    scanf("%d", &pontost1);

    // Cadastro Carta2
    printf("--------------------Carta 2-----------------------\n");
    printf("Digite a letra do estado: \n");
    scanf(" %c", &Estado2);  // Corrigido com espaço antes de %c
    printf("Digite o código da carta: \n");
    scanf("%s", Cod2);
    printf("Digite o nome da cidade sem espaço: \n");
    scanf("%s", Nome2);
    printf("Digite a quantidade da população: \n");
    scanf("%f", &Pop2);
    printf("Digite a área em km²: \n");
    scanf("%f", &Area2);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &Pib2);
    printf("Digite os pontos turísticos: \n");
    scanf("%d", &pontost2);

    // Cálculos
    DensidP1 = Pop1 / Area1;  // Densidade Populacional
    PpC1 = Pib1 / Pop1;       // PIB per Capita
    Superpoder1 = Pib1 + Area1 + DensidP1 + PpC1;  // Cálculo do Super Poder

    DensidP2 = Pop2 / Area2;  // Densidade Populacional
    PpC2 = Pib2 / Pop2;       // PIB per Capita
    Superpoder2 = Pib2 + Area2 + DensidP2 + PpC2;  // Cálculo do Super Poder

    // Exibindo os dados
    printf("Carta 1\n");
    printf("Informações da Cidade:\n");
    printf("Estado: %c\n", Estado1);
    printf("Código da Carta: %s\n", Cod1);
    printf("Nome da Cidade: %s\n", Nome1);
    printf("População: %.2f\n", Pop1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f\n", Pib1);
    printf("Pontos Turísticos: %d\n", pontost1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", DensidP1);
    printf("Pib per Capita: %.2f\n", PpC1);
    printf("Super Poder: %.2f\n", Superpoder1);

    printf("Carta 2\n");
    printf("Informações da Cidade:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código da Carta: %s\n", Cod2);
    printf("Nome da Cidade: %s\n", Nome2);
    printf("População: %.2f\n", Pop2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f\n", Pib2);
    printf("Pontos Turísticos: %d\n", pontost2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", DensidP2);
    printf("Pib per Capita: %.2f\n", PpC2);
    printf("Super Poder: %.2f\n", Superpoder2);

    // Comparações
    resultadopopulcao1 = Pop1;
    resultadopopulcao2 = Pop2;

    if (resultadopopulcao1 > resultadopopulcao2)
        printf("A população da Carta 1 (%.2f) é maior que a da Carta 2 (%.2f)\n", resultadopopulcao1, resultadopopulcao2);

    resultadoarea1 = Area1;
    resultadoarea2 = Area2;
    if (resultadoarea1 > resultadoarea2)
        printf("A área da Carta 1 (%.2f) é maior que a da Carta 2 (%.2f)\n", resultadoarea1, resultadoarea2);

    resultadopib1 = Pib1;
    resultadopib2 = Pib2;
    if (resultadopib1 > resultadopib2)
        printf("O PIB da Carta 1 (%.2f) é maior que o da Carta 2 (%.2f)\n", resultadopib1, resultadopib2);

    resultadopontos1 = pontost1;
    resultadopontos2 = pontost2;
    if (resultadopontos1 > resultadopontos2)
        printf("Os pontos turísticos da Carta 1 (%d) são maiores que os da Carta 2 (%d)\n", resultadopontos1, resultadopontos2);

    resultadodensidade1 = DensidP1;
    resultadodensidade2 = DensidP2;
    if (resultadodensidade1 > resultadodensidade2)
        printf("A densidade populacional da Carta 1 (%.2f) é maior que a da Carta 2 (%.2f)\n", resultadodensidade1, resultadodensidade2);

    resultadopibpC1 = PpC1;
    resultadopibpC2 = PpC2;
    if (resultadopibpC1 > resultadopibpC2)
        printf("O PIB per capita da Carta 1 (%.2f) é maior que o da Carta 2 (%.2f)\n", resultadopibpC1, resultadopibpC2);

    resultadoSuperPoder1 = Superpoder1;
    resultadoSuperPoder2 = Superpoder2;
    if (resultadoSuperPoder1 > resultadoSuperPoder2)
        printf("O Super Poder da Carta 1 (%.2f) é maior que o da Carta 2 (%.2f)\n", resultadoSuperPoder1, resultadoSuperPoder2);

    return 0;
}