#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
   
    char estado1, estado2; // Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    char codigo_carta1[3], codigo_carta2[3]; // Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
    char nome_da_cidade1[30], nome_da_cidade2[30]; // Nome da Cidade: O nome da cidade. Tipo: char[] (string)
    int populacao1, populacao2; //População: O número de habitantes da cidade. Tipo: int
    float area_em_km1, area_em_km2; // Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
    float pib1, pib2; //PIB: O Produto Interno Bruto da cidade. Tipo: float
    int pturistico1, pturistico2; // Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int

    printf ("CADASTRO DE CARTAS SUPER TRUNFO DE CIDADES\n");
    
    printf ("Insira as informações da PRIMEIRA carta\n");

    printf ("Escolha uma letra (de A a H) para representar o estado: ");
    scanf ("%c", &estado1);
    printf ("Agora, digite a letra escolhida, seguida de um número (de 01 a 04): ");
    scanf ("%s", &codigo_carta1);
    printf ("Digite o nome da cidade (sem espaços): ");
    scanf ("%s", &nome_da_cidade1);
    printf ("Digite o número de habitantes: ");
    scanf ("%d", &populacao1);
    printf ("Digite a área da cidade (em km²): ");
    scanf ("%f", &area_em_km1);
    printf ("Digite o Produto Interno Bruto (PIB), em bilhões: ");
    scanf ("%f", &pib1);
    printf ("Digite o número de pontos turísticos da cidade: ");
    scanf ("%d", &pturistico1);

    printf ("\n");

    printf ("CONFIRA OS DADOS DE SUA PRIMEIRA CARTA:\n");
    printf ("Estado: %c\n", estado1);
    printf ("Código da Carta: %s\n", codigo_carta1);
    printf ("Nome da Cidade: %s\n", nome_da_cidade1);
    printf ("População: %d habitantes\n", populacao1);
    printf ("Área: %.3f Km²\n", area_em_km1);
    printf ("PIB: R$ %.3f bilhões\n", pib1);
    printf ("Pontos Turísticos: %d\n", pturistico1);

    printf ("\n");

    printf ("Insira as informações da SEGUNDA carta\n");

    printf ("Escolha uma letra (de A a H) para representar o estado: ");
    scanf ("%c", &estado2);
    printf ("Agora, digite a letra escolhida, seguida de um número (de 01 a 04): ");
    scanf ("%s", &codigo_carta2);
    printf ("Digite o nome da cidade (sem espaços): ");
    scanf ("%s", &nome_da_cidade2);
    printf ("Digite o número de habitantes: ");
    scanf ("%d", &populacao2);
    printf ("Digite a área da cidade (em km²): ");
    scanf ("%f", &area_em_km2);
    printf ("Digite o Produto Interno Bruto (PIB), em bilhões: ");
    scanf ("%f", &pib2);
    printf ("Digite o número de pontos turísticos da cidade: ");
    scanf ("%d", &pturistico2);

    printf ("\n");

    printf ("CONFIRA OS DADOS DE SUA SEGUNDA CARTA:\n");
    printf ("Estado: %c\n", estado2);
    printf ("Código da Carta: %s\n", codigo_carta2);
    printf ("Nome da Cidade: %s\n", nome_da_cidade2);
    printf ("População: %d habitantes\n", populacao2);
    printf ("Área: %.3f Km²\n", area_em_km2);
    printf ("PIB: R$ %.3f bilhões\n", pib2);
    printf ("Pontos Turísticos: %d\n", pturistico2);





    return 0;
}
