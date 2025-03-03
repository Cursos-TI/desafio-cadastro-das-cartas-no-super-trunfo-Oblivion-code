#include <stdio.h>

int main() {
    // Declaração de variáveis para armazenar os dados das duas cartas
    char estado1, estado2;
    char codigo_da_carta1[4], codigo_da_carta2 [4];
    char nome_da_cidade1[15], nome_da_cidade2[15];
    int populacao1, populacao2;
    float area_em_km21, area_em_km22;
    float PIB1, PIB2;
    int numero_de_pontos_turisticos1, numero_de_pontos_turisticos2;

    // Recebimento das Informações da Primeira Carta utilizando o scanf
   
    printf ("Insira as Informações da Primeira Carta \n"); // O printf exibe uma mensagem pedindo a informação ao usuário

    printf ("\nQual o Estado?: (utilize apenas a inicial)\n"); // O scanf recebe um caractere e armazena na variável estado1
    scanf (" %c", &estado1);
    
    printf ("\nQual o Código da Carta?:(Inicial do estado e dois numeros de 01 a 04)\n"); // O scanf recebe uma string e armazena na variável codigo_da_carta1
    scanf ("%s", codigo_da_carta1);

    printf ("\nQual a Cidade?:\n"); // O scanf recebe uma string (nome da cidade) e armazena em nome_da_cidade1
    scanf ("%s", nome_da_cidade1);

    printf ("\nQual a População da Cidade?: \n");  // O scanf recebe um número inteiro e armazena em populacao1
    scanf ("%d", &populacao1);

    printf ("\nQual a Área (em km²)?: \n "); // O scanf recebe um número decimal (float) e armazena em area_em_km21
    scanf ("%f", &area_em_km21);

    printf ("\nQual o PIB da Cidade?: \n");  // O scanf recebe um número decimal (float) e armazena em PIB1
    scanf ("%f", &PIB1);

    printf("\nQual o número de Pontos Turístico?: \n"); // O scanf recebe um número inteiro e armazena em numero_de_pontos_turisticos1
    scanf ("%d", &numero_de_pontos_turisticos1);

    printf ("\n--------------------------------------------------------------\n");
   
    // Recebimento das Informações da Segunda Carta utilizando o scanf
    printf ("\nInsira as Informações da Segunda Carta \n");

    printf ("\nQual o Estado?: (utilize apenas a inicial)\n");
    scanf (" %c", &estado2);
    
    printf ("\nQual o Código da Carta?:(Inicial do estado e dois numeros de 01 a 04)\n");
    scanf ("%s", codigo_da_carta2);

    printf ("\nQual a Cidade?:\n");
    scanf ("%s", nome_da_cidade2);

    printf ("\nQual a População da Cidade?: \n");
    scanf ("%d", &populacao2);

    printf ("\nQual a Área (em km²)?: \n ");
    scanf ("%f", &area_em_km22);

    printf ("\nQual o PIB da Cidade?: \n");
    scanf ("%f", &PIB2);

    printf("\nQual o número de Pontos Turístico?: \n");
    scanf ("%d", &numero_de_pontos_turisticos2);

    printf ("\n--------------------------------------------------------------\n");
    
    // Exibindo as informações coletadas da Primeira Carta utilizando printf

    // O printf exibe os valores armazenados nas variáveis formatados corretamente
    printf("Carta 1:\n");
    printf ("Estado: %c \n", estado1);
    printf ("Código: %s \n", codigo_da_carta1);
    printf ("Nome da Cidade: %s \n", nome_da_cidade1);
    printf ("População: %d \n", populacao1);
    printf ("Área: %.2f km² \n", area_em_km21);
    printf ("PIB: %.2f Bilhões de reais\n", PIB1);
    printf ("Número de Pontos Turísticos: %d \n", numero_de_pontos_turisticos1);

    printf ("\n--------------------------------------------------------------\n");
 
    // Exibindo as informações coletadas da Segunda Carta utilizando printf 
    printf("\nCarta 2:\n");
    printf ("Estado: %c \n", estado2);
    printf ("Código: %s \n", codigo_da_carta2);
    printf ("Nome da Cidade: %s \n", nome_da_cidade2);
    printf ("População: %d \n", populacao2);
    printf ("Área: %.2f km² \n", area_em_km22);
    printf ("PIB: %.2f Bilhões de reais \n", PIB2);
    printf ("Número de Pontos Turísticos: %d \n", numero_de_pontos_turisticos2);

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
