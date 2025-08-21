#include <stdio.h>

int main() {
    // Dados da primeira cidade
    char estado1[3], codigo1[4], cidade1[50];
    float populacao1, area1, pib1;
    int pontos_turisticos1;
    
    // Dados da segunda cidade
    char estado2[3], codigo2[4], cidade2[50];
    float populacao2, area2, pib2;
    int pontos_turisticos2;
    
    // Leitura dos dados da primeira cidade
    printf("=== CARTA 1 ===\n");
    printf("Estado (2 letras): ");
    scanf("%2s", estado1);
    getchar();
    
    printf("Código (3 caracteres): ");
    scanf("%3s", codigo1);
    getchar();
    
    printf("Nome da Cidade: ");
    scanf("%49[^\n]", cidade1);
    getchar();
    
    printf("População: ");
    scanf("%f", &populacao1);
    getchar();
    
    printf("Área (km²): ");
    scanf("%f", &area1);
    getchar();
    
    printf("PIB (milhões de reais): ");
    scanf("%f", &pib1);
    getchar();
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);
    getchar();
    
    // Cálculos para a primeira cidade
    float densidade1 = populacao1 / area1;
    float pib_per_capita1 = (pib1 * 1000000000) / populacao1; // Convertendo bilhões para reais
    
    // Leitura dos dados da segunda cidade
    printf("\n=== CARTA 2 ===\n");
    printf("Estado (2 letras): ");
    scanf("%2s", estado2);
    getchar();
    
    printf("Código (3 caracteres): ");
    scanf("%3s", codigo2);
    getchar();
    
    printf("Nome da Cidade: ");
    scanf("%49[^\n]", cidade2);
    getchar();
    
    printf("População: ");
    scanf("%f", &populacao2);
    getchar();
    
    printf("Área (km²): ");
    scanf("%f", &area2);
    getchar();
    
    printf("PIB (milhões de reais): ");
    scanf("%f", &pib2);
    getchar();
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);
    getchar();
    
    // Cálculos para a segunda cidade
    float densidade2 = populacao2 / area2;
    float pib_per_capita2 = (pib2 * 1000000000) / populacao2; // Convertendo bilhões para reais
    
    // Exibição dos resultados
    printf("\n=== RESULTADOS ===\n");
    
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %.0f\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %.0f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    
    return 0;
}
