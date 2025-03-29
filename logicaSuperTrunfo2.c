#include <stdio.h>

int main() {
    // Declaração das variáveis
    int resultado1, resultado2;
    int primeiroAtributo, segundoAtributo;
    unsigned long int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2;
    float pib1, area1, pib2, area2;
    char estado1[3], estado2[3];
    char nomeCidade1[20], nomeCidade2[20];
    char codigoCidade1[3], codigoCidade2[3];
    float densidadePopulacional1, pibPerCapita1, densidadePopulacional2, pibPerCapita2;
    float superPoder1, superPoder2;

    // Leitura dos dados da primeira carta
    printf("\nCarta 1:\n");

    printf("Digite o estado: \n");
    scanf("%s", estado1); 
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade1);

    printf("Digite o código da cidade: \n");
    scanf("%s", codigoCidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);
    
    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1); 
    
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 - densidadePopulacional1;

    // Leitura dos dados da segunda carta
    printf("\nCarta 2:\n");

    printf("Digite o estado: \n");
    scanf("%s", estado2); 
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidade2);

    printf("Digite o código da cidade: \n");
    scanf("%s", codigoCidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);
    
    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2); 
    
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 - densidadePopulacional2;

    // Exibição dos dados da primeira carta
    printf("\nCarta 1:\n");       
    printf("Densidade populacional: %f\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Estado: %s\nNome da cidade: %s\nCódigo da cidade: %s\n", estado1, nomeCidade1, codigoCidade1);
    printf("População: %lu\nTotal de pontos turísticos: %d\n", populacao1, pontosTuristicos1);
    printf("PIB: %f\nÁrea: %f\n", pib1, area1);
    printf("Super Poder: %f\n", superPoder1);

    // Exibição dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Densidade populacional: %f\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("Estado: %s\nNome da cidade: %s\nCódigo da cidade: %s\n", estado2, nomeCidade2, codigoCidade2);
    printf("População: %lu\nTotal de pontos turísticos: %d\n", populacao2, pontosTuristicos2);
    printf("PIB: %f\nÁrea: %f\n", pib2, area2);
    printf("Super Poder: %f\n", superPoder2);

    // Início do Jogo 
    printf("Escolha o primeiro atributo:\n");
    printf("1. Densidade populacional\n");
    printf("2. PIB per Capita\n");
    printf("3. População\n");
    printf("4. Pontos turísticos\n");
    printf("5. PIB\n");
    printf("6. Área\n");
    printf("7. Super poder\n");
    
    printf("Escolha a comparação 1:\n");
    scanf("%d", &primeiroAtributo);

    switch (primeiroAtributo) {
        case 1:
            printf("Você escolheu Densidade Populacional!\n");
            resultado1 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0;
            break;
        case 2:
            printf("Você escolheu PIB per Capita!\n");
            resultado1 = pibPerCapita1 > pibPerCapita2 ? 1 : 0;
            break;
        case 3:
            printf("Você escolheu População!\n");
            resultado1 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 4:
            printf("Você escolheu Pontos turísticos!\n");
            resultado1 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
            break;
        case 5:
            printf("Você escolheu PIB!\n");
            resultado1 = pib1 > pib2 ? 1 : 0;
            break;
        case 6:
            printf("Você escolheu Área!\n");
            resultado1 = area1 > area2 ? 1 : 0;
            break;
        case 7:
            printf("Você escolheu Super Poder!\n");
            resultado1 = superPoder1 > superPoder2 ? 1 : 0;
            break;
        default:
            printf("Opção de jogo inválida\n");
    }

    printf("Escolha o segundo atributo:\n");
    printf("1. Densidade populacional\n");
    printf("2. PIB per Capita\n");
    printf("3. População\n");
    printf("4. Pontos turísticos\n");
    printf("5. PIB\n");
    printf("6. Área\n");
    printf("7. Super poder\n");
    
    printf("Escolha a comparação 2:\n");
    scanf("%d", &segundoAtributo); 

    if (primeiroAtributo == segundoAtributo) {
        printf("Você escolheu o mesmo atributo!\n");
    } else {
        switch (segundoAtributo) {
            case 1:
                printf("Você escolheu Densidade Populacional!\n");
                resultado2 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0;
                break;
            case 2:
                printf("Você escolheu PIB per Capita!\n");
                resultado2 = pibPerCapita1 > pibPerCapita2 ? 1 : 0;
                break;
            case 3:
                printf("Você escolheu População!\n");
                resultado2 = populacao1 > populacao2 ? 1 : 0;
                break;
            case 4:
                printf("Você escolheu Pontos turísticos!\n");
                resultado2 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
                break;
            case 5:
                printf("Você escolheu PIB!\n");
                resultado2 = pib1 > pib2 ? 1 : 0;
                break;
            case 6:
                printf("Você escolheu Área!\n");
                resultado2 = area1 > area2 ? 1 : 0;
                break;
            case 7:
                printf("Você escolheu Super Poder!\n");
                resultado2 = superPoder1 > superPoder2 ? 1 : 0;
                break;
            default:
                printf("Opção de jogo inválida\n");
        }

        if (resultado1 && resultado2) {
            printf("Parabéns você venceu!\n");
        } else if (resultado1 != resultado2) { 
            printf("Empatou!\n");
        } else {
            printf("Infelizmente, Você perdeu!\n");
        }
    }

    return 0;
}
