#include <stdio.h>
int main() {
    //carta 1 Supertrunfo
    char Estado1;           
    char Cod1[50];          
    char Nome1[50];         
    float Pop1;               
    float Area1;            
    float Pib1;             
    int pontost1;           

    
    printf("Digite a letra do estado: \n");
    scanf(" %c", &Estado1);  

    printf("Digite o código da carta: \n");
    scanf("%s", Cod1);  

    printf("Digite o nome da cidade: \n");
    scanf("%s", Nome1);  

    printf("Digite a quantidade da população: \n");
    scanf("%f", &Pop1);

    printf("Digite a área em km²: \n");
    scanf("%f", &Area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &Pib1);  // Leitura do PIB

    printf("Digite os pontos Turísticos: \n");
    scanf("%d", &pontost1);  // Leitura dos pontos

    // Exibindo os dados
    printf("Informações da Cidade:\n");
    printf("Estado: %c\n", Estado1);
    printf("Código da Carta: %s\n", Cod1);
    printf("Nome da Cidade: %s\n", Nome1);
    printf("População: %.2f\n", Pop1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f\n", Pib1);
    printf("Pontos Turísticos: %d\n", pontost1);

    return 0;
}
