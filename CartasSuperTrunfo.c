#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    //coletando informações

char estado[50], nomecidade[50], codigocarta[50];
int populacao, pontotur;
float area, pib, pibpercapt, densidade;





printf(" *** CARTA 1 *** \n");
printf("\n");

// Nome do estado
printf("insira o estado: \n");
scanf("%s", &estado);
// Codigo da carta
printf("Insira o codigo da carta: \n");
scanf("%s", &codigocarta);
// Nome da Cidade
printf("Insira o nome da cidade: \n");
scanf("%s", &nomecidade);
// Numero de habitantes
printf("Insira o numero de habitantes: \n");
scanf("%d", &populacao);
// Area total do estado
printf("Insira a área do estado (em Km2): \n");
scanf("%f", &area);
// PIB do estado
printf("insira o PIB do estado: \n");
scanf("%f", &pib);
// Numero de pontos turisticos
printf("Insira o numero de pontos turisticos: \n");
scanf("%d", &pontotur);



// Nível Aventureiro
//Cálculos

densidade = (float) populacao / area;
pibpercapt =  pib / (float) populacao;




    printf("\n");
    printf(" *** CARTA 1 *** \n");
    printf("\n");
// Imprimir informações da carta 1 na na tela
    printf("Estado: %s\n"
        "Código: %s\n"
        "Nome da cidade: %s\n"
        "População: %d\n"
        "Área: %.2f\n"
        "PIB %.2f\n"
        "Pontos Turitiscos %d\n"
        "Densidade populacional %.2f\n"
        "Pib Per Capita %.2f\n"
        ,estado, codigocarta, 
        nomecidade, populacao, area, pib, pontotur, densidade, pibpercapt );





    
    





        return 0;



}
