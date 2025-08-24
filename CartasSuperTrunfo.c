#include <stdio.h>

int main()
{
    int populacao;
    float area;
    float PIB;
    int p_turisticos;
    int populacao2;
    float area2;
    float PIB2;
    int p_turisticos2;


    printf("Digite a populacao: ");
    scanf("%d", &populacao);

    printf("Digite a area (em km2): ");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &PIB);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &p_turisticos);

  printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &p_turisticos2);
   
    printf("\n===== Carta1 =====\n");
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f bilhoes\n", PIB);
    printf("Pontos Turisticos: %d\n", p_turisticos);
    
      printf("\n===== Carta2 =====\n");
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", PIB2);
    printf("Pontos Turisticos: %d\n", p_turisticos2);


    return 0;
}
