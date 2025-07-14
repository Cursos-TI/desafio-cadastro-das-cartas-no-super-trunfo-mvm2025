#include <stdio.h>

int main() {

    //carta 1 , carta 2
    char estado1[3], estado2[3];    // A , B
    char cod1[25], cod2[25];   //A1 , B2
    char cidade1[25],cidade2[25];  //SAOPAULO , RIO DE JANEIRO
    float populacao1, populacao2;  //12325000 , 6748000
    float area1, area2; //1521.11 , 1200.25
    float pib1, pib2; //699.28 , 300.50
    int pturistico1, pturistico2;  // 50 , 30
    float denspop1, denspop2;
    float pibper1, pibper2;

    printf("**carta 1 ** \n");
    
    printf("QUAL É O ESTADO:\n");
    scanf("%s", estado1);

    printf("QUAL O CODIGO DA CARTA:\n");
    scanf("%s",cod1); 
    
    printf("QUAL A CIDADE:\n");
    scanf("%s", cidade1);

    printf("QUAL É A POPULAÇÃO:\n");
    scanf("%f", &populacao1);

    printf("QUAL É A AREA:\n");
    scanf("%f", &area1);

    printf("QUAL É O PIB:\n");
    scanf("%f", &pib1);

    printf("QUANTIDADE PONTOS TURISTICOS:\n");
    scanf("%d", &pturistico1);
    
    printf("***carta 2 *** \n");

    printf("QUAL E O ESTADO:\n");
    scanf("%s", estado2);
    
    printf("QUAL O CODIGO DA CARTA:\n");
    scanf("%s",cod2); 
    
    printf("QUAL A CIDADE:\n");
    scanf("%s", cidade2);

    printf("QUAL É A POPULAÇÃO:\n");
    scanf("%f", &populacao2);

    printf("QUAL É A AREA:\n");
    scanf("%f", &area2);

    printf("QUAL É O PIB:\n");
    scanf("%f", &pib2);

    printf("QUANTIDADE PONTOS TURISTICOS:\n");
    scanf("%d", &pturistico2);

    denspop1 = (populacao1 / area1);
    denspop2 = (populacao2 / area2);
    pibper1 = (float)(pib1 / populacao1);
    pibper2 = (float)(pib2 / populacao2); 

    printf("CARTA:1\n");
    printf("ESTADO:%s\n", estado1);
    printf("COD:%s\n", cod1);
    printf("CIDADE:%s\n", cidade1);
    printf("POPULAÇAO:%.2f\n", populacao1);
    printf("ARÉA:%.2fKM2\n", area1);
    printf("PIB:%.2f BILHOES DE REAIS\n", pib1);
    printf("PONTOS TURISTICOS:%d\n", pturistico1);
    printf("DENSIDADE POPULACIONAL:%.2f hab/km2\n", denspop1);
    printf("PIB PER CAPITA:%.2f reais\n", pibper1);
    
    printf("CARTA:2\n");
    printf("ESTADO:%s\n", estado2);
    printf("COD:%s\n", cod2);
    printf("CIDADE:%s\n", cidade2);
    printf("POPULAÇAO:%.2f\n", populacao2);
    printf("ARÉA:%.2fKM2\n", area2);
    printf("PIB:%.2f BILHOES DE REAIS\n", pib2);
    printf("PONTOS TURISTICOS:%d\n", pturistico2);
    printf("DENSIDADE POPULACIONAL:%.2f hab/km2\n", denspop2);
    printf("PIB PER CAPITA:%.2f reais\n", pibper2);

    if(populacao1 > populacao2){
        printf("populaçao sao paulo e maior que a rio de janeiro\n");
    } else {   
        printf ("a populaçao do rio de janeiro e maior que de sao paulo");
    }
    

    return 0;
    
}
