#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int resultado1, resultado2;
    char primeiroAtributo, segundoAtributo;
       // Declaração das variáveis para a carta 1
    char estado[45];
    char codigo_carta[45];
    char nome_cidade[45];
    long int populaçao;
    float area;
    float PIB;
    int pontos_turisticos;
    float densidade_populacional;
    float PIB_per_capita;

    // Declaração das variáveis para a carta 2 usando a função rand() para gerar valores aleatórios
    srand (time(0));
    char estado_2[45] = "São Paulo";
    char codigo_carta_2[45] = "SP";
    char nome_cidade_2[45] = "São Paulo";
    long int populaçao_2 = rand() % 1000000000; // Gerar um número aleatório para a população
    float area_2 = rand() % 1000000; // Gerar um número aleatório para a área
    float PIB_2 = rand() % 1000000; // Gerar um número aleatório para o PIB
    int pontos_turisticos_2 = rand() % 100; // Gerar um número aleatório para os pontos turísticos
    float densidade_populacional_2 = (float)populaçao_2 / area_2; // Calcular a densidade populacional
    float PIB_per_capita_2 = PIB_2 / populaçao_2; // Calcular o PIB per capita

    //Solicitar ao usuário que insira os dados para a carta 1
    printf("***Vamos entrar com os dados para comparar com a carta adversária!!!***\n");
    
    printf("Digite o estado para a sua carta : ");
    scanf("%s", estado);
    
    printf("Digite o código da sua carta : ");
    scanf("%s", codigo_carta);
    
    printf("Digite o nome da cidade para a sua carta : ");
    scanf("%s", nome_cidade);
   
    printf("Digite a população para a sua carta : ");
    scanf(" %ld", &populaçao);
    
    printf("Digite a área para a sua carta : ");
    scanf(" %f", &area);
   
    printf("Digite o PIB para a sua carta : ");
    scanf(" %f", &PIB);
    
    printf("Digite o número de pontos turísticos para a sua carta: ");
    scanf(" %d", &pontos_turisticos);


    // Menu interativo para o usuário escolher os atributos para comparar as cartas
    printf("Escolha o atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");

   
    printf("Escolha a comparação para a sua carta:\n");
    scanf(" %c", &primeiroAtributo);

    switch (primeiroAtributo) {
        case '1':
            resultado1 = populaçao > populaçao_2 ? 1 : 0; // Atribui 1 se a população da carta 1 for maior, caso contrário, atribui 0
            break;
        case '2':
            resultado1 = area > area_2 ? 1 : 0; // Atribui 1 se a área da carta 1 for maior, caso contrário, atribui 0
            break;
        case '3':
            resultado1 = PIB > PIB_2 ? 1 : 0; // Atribui 1 se o PIB da carta 1 for maior, caso contrário, atribui 0
            break;
        case '4':
            resultado1 = pontos_turisticos > pontos_turisticos_2 ? 1 : 0; // Atribui 1 se os pontos turísticos da carta 1 forem maiores, caso contrário, atribui 0
            break;
        case '5':
            resultado1 = densidade_populacional < densidade_populacional_2 ? 1 : 0; // Atribui 1 se a densidade populacional da carta 1 for maior, caso contrário, atribui 0
            break;
        case '6':
            resultado1 = PIB_per_capita > PIB_per_capita_2 ? 1 : 0; // Atribui 1 se o PIB per capita da carta 1 for maior, caso contrário, atribui 0
            break;
        default:
            printf("Opção inválida para a carta 1.\n");
            break; // Encerrar o programa
    }

    printf("Escolha a segunda comparação para a sua carta:\n");
    scanf(" %c", &segundoAtributo);

    if (segundoAtributo == primeiroAtributo) {
        printf("Escolha um atributo diferente da sua carta.\n");
        
    } else {
        switch (segundoAtributo) {
        case '1':
            resultado2 = populaçao > populaçao_2 ? 1 : 0; // Atribui 1 se a população da carta 2 for maior, caso contrário, atribui 0
            break;
        case '2':
            resultado2 = area > area_2 ? 1 : 0; // Atribui 1 se a área da carta 2 for maior, caso contrário, atribui 0
            break;
        case '3':
            resultado2 = PIB > PIB_2 ? 1 : 0; // Atribui 1 se o PIB da carta 2 for maior, caso contrário, atribui 0
            break;
        case '4':
            resultado2 = pontos_turisticos > pontos_turisticos_2 ? 1 : 0; // Atribui 1 se os pontos turísticos da carta 2 forem maiores, caso contrário, atribui 0
            break;
        case '5':
            resultado2 = densidade_populacional < densidade_populacional_2 ? 1 : 0; // Atribui 1 se a densidade populacional da carta 2 for maior, caso contrário, atribui 0
            break;
        case '6':
            resultado2 = PIB_per_capita > PIB_per_capita_2 ? 1 : 0; // Atribui 1 se o PIB per capita da carta 2 for maior, caso contrário, atribui 0
            break;
    default:
        printf("Opção inválida para a carta 2.\n");
        break; // Encerrar o programa
    }
    
    // Exibir os resultados da comparação
    printf("Resultado da primeira comparação para a carta 1: %s\n", resultado1 ? "Venceu" : "Perdeu");
    printf("Resultado da segunda comparação para a carta 1: %s\n", resultado2 ? "Venceu" : "Perdeu");
    
    if (resultado1 && resultado2) {
        printf("Parabéns! Você venceu o jogo!\n");
    } else if (resultado1 != resultado2) {
        printf("Empate!\n");
    } else {
        printf("Que pena! Você perdeu o jogo!\n");
    }
    // Exibir os dados das cartas para o usuário
    printf("\nDados da Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código da Carta: %s\n", codigo_carta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %ld\n", populaçao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f\n", densidade_populacional);
    printf("PIB per Capita: %.2f\n", PIB_per_capita);
    printf("\nDados da Carta 2:\n");
    printf("Estado: %s\n", estado_2);
    printf("Código da Carta: %s\n", codigo_carta_2);
    printf("Nome da Cidade: %s\n", nome_cidade_2);
    printf("População: %ld\n", populaçao_2);
    printf("Área: %.2f\n", area_2);
    printf("PIB: %.2f\n", PIB_2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos_2);
    printf("Densidade Populacional: %.2f\n", densidade_populacional_2);
    printf("PIB per Capita: %.2f\n", PIB_per_capita_2);
}

return 0;
}
