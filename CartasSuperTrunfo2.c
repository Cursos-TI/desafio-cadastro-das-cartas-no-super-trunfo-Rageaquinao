#include <stdio.h>

int main() {
    char Estado2;           
    char Cod2[50];          
    char Nome2[50];         
    float Pop2;               
    float Area2;            
    float Pib2;             
    int pontost2;
    float DensidP2;
    float PpC2;           

    
    printf("Digite a letra do estado: \n");
    scanf(" %c", &Estado2);  

    printf("Digite o código da carta: \n");
    scanf("%s", Cod2);  

    printf("Digite o nome da cidade s/ espaço: \n");
    scanf("%s", Nome2);  

    printf("Digite a quantidade da população: \n");
    scanf("%f", &Pop2);

    printf("Digite a área em km²: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &Pib2);  // Leitura do PIB

    printf("Digite os pontos do Turísticos: \n");
    scanf("%d", &pontost2);  // Leitura dos pontos
 // Cálculos
    DensidP2 = Pop2 / Area2;  // Densidade Populacional
    PpC2 = Pib2 / Pop2;       // PIB per Capita

 // Exibindo os dados
 printf("Informações da Cidade:\n");
 printf("Estado: %c\n", Estado2);
 printf("Código da Carta: %s\n", Cod2);
 printf("Nome da Cidade: %s\n", Nome2);
 printf("População: %.2f\n", Pop2);
 printf("Área: %.2f km²\n", Area2);
 printf("PIB: %.2f\n", Pib2);
 printf("Pontos Turísticos: %d\n", pontost2);
 printf("Densidade Populacional: %.2f habitantes/km²\n", DensidP2);
 printf("Pib per Capita: %.2f\n", PpC2);  // Exibindo o PIB per Capita com 2 casas decimais
 
return 0;

}