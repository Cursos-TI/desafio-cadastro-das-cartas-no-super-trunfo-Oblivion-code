#include <stdio.h>

int main() {
    char estado;
    char codigo_da_carta[4];
    char nome_da_cidade[15];
    int populacao;
    float area_em_km2;
    float PIB;
    int numero_de_pontos_turisticos;

    //Recebimento das Informações da Primeira Carta ultilizando o (Scanf)

    printf ("Insira as Informações da Primeira Carta \n");

    printf ("\nQual o Estado?: (utilize apenas a inicial)\n");
    scanf (" %c", &estado);
    
    printf ("\nQual o Código da Carta?:(Inicial do estado e dois numeros de 01 a 04)\n");
    scanf ("%s", codigo_da_carta);

    printf ("\nQual a Cidade?:\n");
    scanf ("%s", nome_da_cidade);

    printf ("\nQual a População Cidade?: \n");
    scanf ("%d", &populacao);

    printf ("\nQual a Área (em km²)?: \n ");
    scanf ("%f", &area_em_km2);

    printf ("\nQual o PIB da Cidade?: \n");
    scanf ("%f", &PIB);

    printf("\nQual o número de Pontos Turístico?: \n");
    scanf ("%d", &numero_de_pontos_turisticos);

    // Exibindo as informações coletadas da Primeira Carta Utilizando o (Printf)

    printf("Carta 1:\n");

    printf ("Estado: %c \n", estado);
    printf ("Código: %s \n", codigo_da_carta);
    printf ("Nome da Cidade: %s \n", nome_da_cidade);
    printf ("População: %d \n", populacao);
    printf ("Área: %.2f km² \n", area_em_km2);
    printf ("PIB: %.2f Bilhões de Reais \n", PIB);
    printf ("Número de Pontos Turísticos: %d \n", numero_de_pontos_turisticos);

    //Recebimento das Informações da Segunda Carta ultilizando o (Scanf)

    printf ("\nInsira as Informações da Segunda Carta \n");

    printf ("\nQual o Estado?: (utilize apenas a inicial)\n");
    scanf (" %c", &estado);
    
    printf ("\nQual o Código da Carta?:(Inicial do estado e dois numeros de 01 a 04)\n");
    scanf ("%s", codigo_da_carta);

    printf ("\nQual a Cidade?:\n");
    scanf ("%s", nome_da_cidade);

    printf ("\nQual a População Cidade?: \n");
    scanf ("%d", &populacao);

    printf ("\nQual a Área (em km²)?: \n ");
    scanf ("%f", &area_em_km2);

    printf ("\nQual o PIB da Cidade?: \n");
    scanf ("%f", &PIB);

    printf("\nQual o número de Pontos Turístico?: \n");
    scanf ("%d", &numero_de_pontos_turisticos);

// Exibindo as informações coletadas da Segunda Carta Utilizando o (Printf)

printf("\nCarta 2:\n");

printf ("Estado: %c \n", estado);
printf ("Código: %s \n", codigo_da_carta);
printf ("Nome da Cidade: %s \n", nome_da_cidade);
printf ("População: %d \n", populacao);
printf ("Área: %f km² \n", area_em_km2);
printf ("PIB: %f \n", PIB);
printf ("Número de Pontos Turísticos: %d \n", numero_de_pontos_turisticos);

return 0;

}