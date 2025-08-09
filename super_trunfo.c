#include<stdio.h>
#include<string.h>

//Programa responsável por cadastrar e imprimir duas cartas de um jogo chamado "Super Trunfo"

int main(){
    char estado1, estado2;
    char codigo1[4], codigo2[4], cidade1[20], cidade2[20];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2, num_carta = 1;
    float area1, area2, pib1, pib2;
    
    //Cadastro da primeira carta
    printf("Cadastrando Carta %d\n", num_carta);
    printf("Digite o caracter do Estado: ");
    scanf(" %c", &estado1);
    getchar(); //Limpando o buffer pra receber a próxima string.
    printf("Digite o codigo da Carta: ");
    fgets(codigo1, 4, stdin);
    printf("Digite o nome da Cidade: ");
    fgets(cidade1, 20, stdin);
    printf("Digite o numero total de habitantes: ");
    scanf("%d", &populacao1);
    printf("Digite a area da Cidade em quilometros quadrados: ");
    scanf("%f", &area1);
    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    num_carta++;

    //Cadastro da segunda carta
    printf("\n\nCadastrando Carta %d\n", num_carta);
    printf("Digite o caracter do Estado: ");
    scanf(" %c", &estado2);
    getchar(); //Limpando o buffer pra receber a próxima string.
    printf("Digite o codigo da Carta: ");
    fgets(codigo2, 4, stdin);
    printf("Digite o nome da Cidade: ");
    fgets(cidade2, 20, stdin);
    printf("Digite o numero total de habitantes: ");
    scanf("%d", &populacao2);
    printf("Digite a area da Cidade em quilometros quadrados: ");
    scanf("%f", &area2);
    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    //Bloco de código responsável por remover o \n no fim da string.
    codigo1[strcspn(codigo1,"\n")] = 0;
    codigo2[strcspn(codigo2,"\n")] = 0;
    cidade1[strcspn(cidade1,"\n")] = 0;
    cidade2[strcspn(cidade2,"\n")] = 0;

    //Exibição de cartas:
    num_carta = 1;

    printf("\n\nCarta %d\n", num_carta);
    printf("Estado: %c\n", estado1);
    printf("Codigo: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de pontos turisticos: %d\n\n\n", pontos_turisticos1);
    num_carta++;

    printf("\n\nCarta %d\n", num_carta);
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos2);

    return 0;
}