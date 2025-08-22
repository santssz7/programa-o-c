#include <stdio.h>

int main() {
    // Dados da primeira cidade
    char estado1[3], codigo1[4], cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos_turisticos1;
    
    // Dados da segunda cidade
    char estado2[3], codigo2[4], cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
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
    scanf("%lu", &populacao1);
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
    float densidade1 = (float)populacao1 / area1;
    float pib_per_capita1 = (pib1 * 1000000) / populacao1; // Convertendo milhões para reais
    float inverso_densidade1 = 1.0 / densidade1; // Quanto menor a densidade, maior este valor
    float super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + 
                        pib_per_capita1 + inverso_densidade1;
    
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
    scanf("%lu", &populacao2);
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
    float densidade2 = (float)populacao2 / area2;
    float pib_per_capita2 = (pib2 * 1000000) / populacao2; // Convertendo milhões para reais
    float inverso_densidade2 = 1.0 / densidade2; // Quanto menor a densidade, maior este valor
    float super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + 
                        pib_per_capita2 + inverso_densidade2;
    
    // Exibição dos resultados
    printf("\n=== RESULTADOS ===\n");
    
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f milhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);
    
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);
    
    // Comparação das cartas
    printf("\n=== COMPARAÇÃO DE CARTAS ===\n");
    
    // População (maior vence)
    int pop_vencedor = populacao1 > populacao2;
    printf("População: Carta %d venceu (%d)\n", pop_vencedor ? 1 : 2, pop_vencedor);
    
    // Área (maior vence)
    int area_vencedor = area1 > area2;
    printf("Área: Carta %d venceu (%d)\n", area_vencedor ? 1 : 2, area_vencedor);
    
    // PIB (maior vence)
    int pib_vencedor = pib1 > pib2;
    printf("PIB: Carta %d venceu (%d)\n", pib_vencedor ? 1 : 2, pib_vencedor);
    
    // Pontos Turísticos (maior vence)
    int pontos_vencedor = pontos_turisticos1 > pontos_turisticos2;
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontos_vencedor ? 1 : 2, pontos_vencedor);
    
    // Densidade Populacional (menor vence)
    int densidade_vencedor = densidade1 < densidade2;
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidade_vencedor ? 1 : 2, densidade_vencedor);
    
    // PIB per Capita (maior vence)
    int pib_capita_vencedor = pib_per_capita1 > pib_per_capita2;
    printf("PIB per Capita: Carta %d venceu (%d)\n", pib_capita_vencedor ? 1 : 2, pib_capita_vencedor);
    
    // Super Poder (maior vence)
    int super_poder_vencedor = super_poder1 > super_poder2;
    printf("Super Poder: Carta %d venceu (%d)\n", super_poder_vencedor ? 1 : 2, super_poder_vencedor);
    
    return 0;
}
