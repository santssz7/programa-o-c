#include <stdio.h>
int main() {
    
    char Cidade1[50];
    char Estado1[50];
    char Codigo1[4];
    float Populacao1;
    float Area1;
    float PIB1;

    printf("Digite o nome da cidade: ");
    scanf("%49[^\n]", Cidade1);
    getchar(); // Limpa o buffer do teclado

    printf("Digite o nome do estado: ");
    scanf("%49[^\n]", Estado1);
    getchar(); // Limpa o buffer do teclado

    printf("Digite o codigo da cidade: ");
    scanf("%3s", Codigo1);
    getchar(); // Limpa o buffer do teclado

    printf("Digite a populacao da cidade: ");
    scanf("%f", &Populacao1);
    getchar(); // Limpa o buffer do teclado

    printf("Digite a area da cidade: ");
    scanf("%f", &Area1);
    getchar(); // Limpa o buffer do teclado

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB1);
    getchar(); // Limpa o buffer do teclado

    printf("\nCidade: %s\n", Cidade1);
    printf("Estado: %s\n", Estado1);
    printf("Codigo: %s\n", Codigo1);
    printf("Populacao: %.2f\n", Populacao1);
    printf("Area: %.2f\n", Area1);
    printf("PIB: %.2f\n", PIB1);
    
    char Cidade2[50];
    char Estado2[50];
    char Codigo2[4];
    float Populacao2;
    float Area2;
    float PIB2;

    printf("\nDigite o nome da Cidade2: ");
    scanf("%49[^\n]", Cidade2);
    getchar(); // Limpa o buffer do teclado

    printf("Digite o nome do Estado2: ");
    scanf("%49[^\n]", Estado2);
    getchar(); // Limpa o buffer do teclado
    
    printf("Digite o codigo da Cidade2: ");
    scanf("%3s", Codigo2);
    getchar(); // Limpa o buffer do teclado

    printf("Digite a populacao da Cidade2: ");
    scanf("%f", &Populacao2);
    getchar(); // Limpa o buffer do teclado

    printf("Digite a area da Cidade2: ");
    scanf("%f", &Area2);
    getchar(); // Limpa o buffer do teclado

    printf("Digite o PIB da Cidade2: ");
    scanf("%f", &PIB2);
    getchar(); // Limpa o buffer do teclado

    printf("\nCidade2: %s\n", Cidade2);
    
    printf("Estado2: %s\n", Estado2);
    
    printf("Codigo2: %s\n", Codigo2);
    
    printf("Populacao2: %.2f\n", Populacao2);
    
    printf("Area2: %.2f\n", Area2);

    printf("PIB2: %.2f\n", PIB2);
    
    return 0;
}
