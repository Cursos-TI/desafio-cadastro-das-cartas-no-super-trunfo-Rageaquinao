#include <stdio.h>

int main() {
  //Carta 1
    char Estado1;           
    char Cod1[50];          
    char Nome1[50];         
    float Pop1;               
    float Area1;            
    float Pib1;             
    int pontost1; 
    float DensidP1;
    float PpC1;

    //Carta 2

    char Estado2;           
    char Cod2[50];          
    char Nome2[50];         
    float Pop2;               
    float Area2;            
    float Pib2;             
    int pontost2; 
    float DensidP2;
    float PpC2;
              

    //Cadrastro Carta1
    printf("Digite a letra do estado: \n"); // letra que defina um País entre A e H
    scanf("%c", &Estado1);  

    printf("Digite o código da carta: \n"); // Cód numérico entre 01 e 04 identificando a cidade do País
    scanf("%s", Cod1);  

    printf("Digite o nome da cidade s/ espaço: \n"); // Nome da cidade
    scanf("%s", Nome1);  

    printf("Digite a quantidade da população: \n"); // Populção da cidade
    scanf("%f", &Pop1);

    printf("Digite a área em km²: \n"); // tamanho do espaço da cidade
    scanf("%f", &Area1);

    printf("Digite o PIB da cidade: \n"); //Pib
    scanf("%f", &Pib1); 

    printf("Digite os pontos do Turísticos: \n"); // quanidade de pontos turísticos
    scanf("%d", &pontost1);  

    //Cadrastro Carta2
    printf("Digite a letra do estado: \n"); // letra que defina um País entre A e H
    scanf("%c", &Estado2);  

    printf("Digite o código da carta: \n"); // Cód numérico entre 01 e 04 identificando a cidade do País
    scanf("%s", Cod2);  

    printf("Digite o nome da cidade s/ espaço: \n"); // Nome da cidade
    scanf("%s", Nome2);  

    printf("Digite a quantidade da população: \n"); // Populção da cidade
    scanf("%f", &Pop2);

    printf("Digite a área em km²: \n"); // tamanho do espaço da cidade
    scanf("%f", &Area2);

    printf("Digite o PIB da cidade: \n"); //Pib
    scanf("%f", &Pib2); 

    printf("Digite os pontos do Turísticos: \n"); // quanidade de pontos turísticos
    scanf("%d", &pontost2);  




      // Cálculos
      DensidP1 = Pop1 / Area1;  // Densidade Populacional
      PpC1 = Pib1 / Pop1;       // PIB per Capita
  
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
      printf("Pib per Capita: %.2f\n", PpC1);  // Exibindo o PIB per Capita com 2 casas decimais

      // Cálculos
      DensidP2 = Pop2 / Area2;  // Densidade Populacional
      PpC2 = Pib2 / Pop2;       // PIB per Capita
  
      // Exibindo os dados
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
      printf("Pib per Capita: %.2f\n", PpC2);  // Exibindo o PIB per Capita com 2 casas decimais
    
    return 0;
}