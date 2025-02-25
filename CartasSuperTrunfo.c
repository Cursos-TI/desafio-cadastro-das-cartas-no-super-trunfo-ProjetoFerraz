#include <stdio.h>

 int main() {
    
    char nome[50] = "Pernambuco"; // NOME DO ESTADO
    char codigo_carta[] = "A01"; // CÓDIGO DA CARTA SUPER TRUNFO
    char cidade[50] = "Recife"; // CIDADE USADA
    int populacao = 9058155; //POPULAÇÃO DO ESTADO
    float area  = 98311.616; // ÁREA DO ESTADO EM Km²
    float pib = 178.2; // NÚMERO EM BILHÕES
    int pontos_turisticos = 50 ; // TOTAIS DE PONTOS TURÍSTICOS DA CIDADE

    // EXIBINDO OS DADOS DO PROGRAMA, TESTE CAYO

    printf("Estado: %s\n", nome);
    printf("Código da carta é: %s\n", codigo_carta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f Bilhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    return 0;




 }

