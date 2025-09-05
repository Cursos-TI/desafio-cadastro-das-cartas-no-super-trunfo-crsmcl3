#include <stdio.h>

int main() {
   
    char estado1, estado2; // Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    char codigo_carta1[3], codigo_carta2[3]; // Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
    char nome_da_cidade1[30], nome_da_cidade2[30]; // Nome da Cidade: O nome da cidade. Tipo: char[] (string)
    unsigned long int populacao1, populacao2; //População: O número de habitantes da cidade. Tipo: int
    float area_em_km1, area_em_km2; // Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
    float pib1, pib2; //PIB: O Produto Interno Bruto da cidade, em bilhões. Tipo: float
    int pturistico1, pturistico2; // Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
    float densidade1, densidade2; // População dividida pela Área
    float ppc1, ppc2; // PIB dividido por População
    float super_poder1, super_poder2; // Soma de todos os atributos numéricos + inverso da densidade populacional
    int escolha1, escolha2; //Armazena o atributo escolhido pra comparação
    int resultado1, resultado2;//Armazena o reultado das comparações

    printf ("SUPER TRUNFO DE CIDADES\n\n");

    //COLETA DE DADOS DA CARTA 1
    printf ("INSIRA AS INFORMAÇÕES DA PRIMEIRA CARTA:\n");
    printf ("Escolha uma letra (de A a H) para representar o estado: ");
    scanf ("%c", &estado1);
    printf ("Agora, digite a letra escolhida, seguida de um número (de 01 a 04): ");
    scanf ("%s", codigo_carta1);
    printf ("Digite o nome da cidade (sem espaços): ");
    scanf ("%s", nome_da_cidade1);
    printf ("Digite o número de habitantes: ");
    scanf ("%lu", &populacao1);
    printf ("Digite a área da cidade (em km²): ");
    scanf ("%f", &area_em_km1);
    printf ("Digite o Produto Interno Bruto (em bilhões): ");
    scanf ("%f", &pib1);
    printf ("Digite o número de pontos turísticos da cidade: ");
    scanf ("%d", &pturistico1);
   
    densidade1 = (float) populacao1 / area_em_km1; //Calculo da densidade 1
    ppc1 = pib1 / populacao1; //Cálculo do Pib per Capita 1
    super_poder1 = (float) populacao1 + area_em_km1 + pib1 + pturistico1 + (area_em_km1 / populacao1) + ppc1; //Cálculo Super Poder 1
   
    //EXIBIÇÃO DOS DADOS DA CARTA 1
    printf ("\nCONFIRA OS DADOS DE SUA PRIMEIRA CARTA:\n");
    printf ("Estado: %c\n", estado1);
    printf ("Código da Carta: %s\n", codigo_carta1);
    printf ("Nome da Cidade: %s\n", nome_da_cidade1);
    printf ("População: %lu habitantes\n", populacao1);
    printf ("Área: %.3f Km²\n", area_em_km1);
    printf ("PIB: R$ %.0f bilhões\n", pib1);
    printf ("Pontos Turísticos: %d\n", pturistico1);
    printf ("Densidade Demográfica: %.2f\n", densidade1);
    printf ("PIB per Capita: %.2f\n", ppc1);
    printf ("SUPER PODER: %f\n", super_poder1);

    //COLETA DE DADOS DA CARTA 2
    printf ("\nInsira as informações da SEGUNDA carta\n");
    printf ("Escolha uma letra (de A a H) para representar o estado: ");
    scanf (" %c", &estado2);
    printf ("Agora, digite a letra escolhida, seguida de um número (de 01 a 04): ");
    scanf (" %s", codigo_carta2);
    printf ("Digite o nome da cidade (sem espaços): ");
    scanf (" %s", nome_da_cidade2);
    printf ("Digite o número de habitantes: ");
    scanf (" %lu", &populacao2);
    printf ("Digite a área da cidade (em km²): ");
    scanf (" %f", &area_em_km2);
    printf ("Digite o Produto Interno Bruto (em bilhões): ");
    scanf (" %f", &pib2);
    printf ("Digite o número de pontos turísticos da cidade: ");
    scanf (" %d", &pturistico2);
    
    densidade2 = (float) populacao2 / area_em_km2; //Calculo da densidade 2
    ppc2 = pib2 / populacao2; //Cálculo do Pib per Capita 2
    super_poder2 = (float) populacao2 + area_em_km2 + pib2 + pturistico2 + (area_em_km2 / populacao2) + ppc2; //Cálculo Super Poder 2

    //EXIBIÇÃO DOS DADOS DA CARTA 2
    printf ("\nCONFIRA OS DADOS DE SUA SEGUNDA CARTA:\n");
    printf ("Estado: %c\n", estado2);
    printf ("Código da Carta: %s\n", codigo_carta2);
    printf ("Nome da Cidade: %s\n", nome_da_cidade2);
    printf ("População: %lu habitantes\n", populacao2);//1
    printf ("Área: %.3f Km²\n", area_em_km2);//2
    printf ("PIB: R$ %.0f bilhões \n", pib2);//3
    printf ("Pontos Turísticos: %d\n", pturistico2);//4
    printf ("Densidade Demográfica: %.2f\n", densidade2);//5 A MENOR VENCE!!!!!
    printf ("PIB per Capita: %.2f\n", ppc2);//6
    printf ("SUPER PODER: %f\n", super_poder2);
   
    
    printf("Escolha o primeiro atributo:\n");
    printf("1. População\n 2. Área\n 3. PIB\n 4. Pontos Turísticos\n 5. Densidade Demográfica\n 6. PIB per Capita\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha1);

    printf("Escolha o segundo atributo:\n");
    printf("1. População\n 2. Área\n 3. PIB\n 4. Pontos Turísticos\n 5. Densidade Demográfica\n 6. PIB per Capita\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha2);

    if (escolha1 == escolha2)
        {printf("Você ecolheu o mesmo atributo!\n");}
    else{
        printf("Resultado da comparação:\n");
        printf("%s X %s \n", nome_da_cidade1, nome_da_cidade2);
        
        switch (escolha1){
        case 1:
            printf("Primeiro atributo: População\n");
            printf("%s - %lu X %lu - %s \n", nome_da_cidade1, populacao1, populacao2, nome_da_cidade2);
            resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;
        
        case 0:
            printf("Primeiro atributo: Área\n");
            printf("%s - %.3f X %.3f - %s \n", nome_da_cidade1, area_em_km1, area_em_km2, nome_da_cidade2);
            resultado1 = area_em_km1 > area_em_km2 ? 1 : 0;
        break;

        case 3:
            printf("Primeiro atributo: PIB\n");
            printf("%s - %f X %f - %s \n", nome_da_cidade1, pib1, pib2, nome_da_cidade2);
            resultado1 = pib1 > pib2 ? 1 : 0;
        break;

        case 4:
            printf("Primeiro atributo: Pontos Turísticos\n");
            printf("%s - %d X %d - %s \n", nome_da_cidade1, pturistico1, pturistico2, nome_da_cidade2);
            resultado1 = pturistico1 > pturistico2 ? 1 : 0;
        break;

        case 5:
            printf("Primeiro atributo: Densidade Demográfica\n");
            printf("%s - %f X %f - %s \n", nome_da_cidade1, densidade1, densidade2, nome_da_cidade2);
            resultado1 = densidade1 < densidade2 ? 1 : 0;
        break;

        case 6:
            printf("Primeiro atributo: PIB per Capita\n");
            printf("%s - %f X %f - %s \n", nome_da_cidade1, ppc1, ppc2, nome_da_cidade2);
            resultado1 = ppc1 > ppc2 ? 1 : 0;
        break;

        default:
            printf("Opção inválida\n");
        break;
        }

        switch (escolha2){
        case 1:
            printf("Segundo atributo: População\n");
            printf("%s - %lu X %lu - %s \n", nome_da_cidade1, populacao1, populacao2, nome_da_cidade2);
            resultado2 = populacao1 > populacao2 ? 1 : 0;
        break;
        
        case 2:
            printf("Segundo atributo: Área\n");
            printf("%s - %.3f X %.3f - %s \n", nome_da_cidade1, area_em_km1, area_em_km2, nome_da_cidade2);
            resultado2 = area_em_km1 > area_em_km2 ? 1 : 0;
        break;

        case 3:
            printf("Segundo atributo: PIB\n");
            printf("%s - %f X %f - %s \n", nome_da_cidade1, pib1, pib2, nome_da_cidade2);
            resultado2 = pib1 > pib2 ? 1 : 0;
        break;

        case 4:
            printf("Segundo atributo: Pontos Turísticos\n");
            printf("%s - %d X %d - %s \n", nome_da_cidade1, pturistico1, pturistico2, nome_da_cidade2);
            resultado2 = pturistico1 > pturistico2 ? 1 : 0;
        break;

        case 5:
            printf("Segundo atributo: Densidade Demográfica\n");
            printf("%s - %f X %f - %s \n", nome_da_cidade1, densidade1, densidade2, nome_da_cidade2);
            resultado2 = densidade1 < densidade2 ? 1 : 0;
        break;

        case 6:
            printf("Segundo atributo: PIB per Capita\n");
            printf("%s - %f X %f - %s \n", nome_da_cidade1, ppc1, ppc2, nome_da_cidade2);
            resultado2 = ppc1 > ppc2 ? 1 : 0;
        break;

        default:
            printf("Opção inválida\n");
        break;
        }
        
        if(resultado1 && resultado2)
            {printf("Carta 1 venceu!\n");}
        else if(resultado1 != resultado2)
            {printf("Carta 1 e Carta 2 empataram!\n");}
        else
            {printf("Carta 2 venceu!");}
        
        }
    
    return 0;
}