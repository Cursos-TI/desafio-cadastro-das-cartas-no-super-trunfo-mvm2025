#include <stdio.h>

int main() {

    //carta 1
    char estado;    // A
    char cod[25];   //A1
    char cidade[25];  //SAO PAULO
    float populacao;  //12325000
    float area; //1521.11
    float pib; //699.28
    int pturistico; // 50

    
    printf("QUAL É O ESTADO:\n");
    scanf("%c", &estado);

    printf("QUAL O CODIGO DA CARTA:\n");
    scanf("%s",cod); 
    
    printf("QUAL A CIDADE:\n");
    scanf("%s", cidade);

    printf("QUAL É A POPULAÇÃO:\n");
    scanf("%f", &populacao);

    printf("QUAL É A AREA:\n");
    scanf("%f", &area);

    printf("QUAL É O PIB:\n");
    scanf("%f", &pib);

    printf("QUANTIDADE PONTOS TURISTICOS:\n");
    scanf("%d", &pturistico);
    
    printf("\nCARTA:1\n");
    printf("ESTADO:%c\n", estado);
    printf("COD:%s\n", cod);
    printf("CIDADE:%s\n", cidade);
    printf("POPULAÇAO:%.0f\n",populacao);
    printf("ARÉA:%.2fM2\n", area);
    printf("PIB:%.2f\n", pib);
    printf("PONTOS TURISTICOS:%d\n", pturistico);




    return 0;
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

}
