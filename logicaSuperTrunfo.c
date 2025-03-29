#include <stdio.h>

int main(){
    char estado1, estado2, codigo1[4], codigo2[4], cidade1[50], cidade2[50];
    int populacao1, populacao2, ponto1, ponto2;
    float area1, area2, pib1, pib2;
    float densidade1, capita1, densidade2, capita2;
    float superPoder1, superPoder2;
    
    //Cadastro da carta 1
    printf("Cadastro da carta 1:\n");
    
    printf("Estado: \n");
    scanf(" %c", &estado1);
    
    printf("Código da Carta: \n");
    scanf("%s", codigo1);
    
    printf("Nome da Cidade: \n");
    scanf("%s", cidade1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);
    
    printf("Número de pontos turisticos:\n");
    scanf("%d", &ponto1);

    printf("\n");
    printf("\n");

    //cadastro da carta 2
    printf("Cadastro da carta 2:\n");
    
    printf("Estado: \n");
    scanf(" %c", &estado2);
    
    printf("Código da Carta: \n");
    scanf("%s", codigo2);
    
    printf("Nome da Cidade: \n");
    scanf("%s", cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);
    
    printf("Número de pontos turisticos:\n");
    scanf("%d", &ponto2);

    printf("\n");
    printf("\n");

    // Incremento de variáveis para serem calculadas
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;
    capita1 = (long double) ( pib1 * 1000000) / populacao1;
    capita2 = (long double) ( pib2 * 1000000) / populacao2;
    superPoder1 = (long double) (populacao1 + area1 + pib1 + ponto1 + capita1 + (1/densidade1));
    superPoder2 = (long double) (populacao2 + area2 + pib2 + ponto2 + capita2 + (1/densidade2));
    
    // Informações da carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turisticos: %d\n", ponto1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per capita: %.2lf reais\n", capita1);
    printf("Super Poder : %.2lf\n", superPoder1);

    printf("\n");
    printf("\n");

    // Informações da carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turisticos: %d\n", ponto2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per capita: %.2lf reais\n", capita2);
    printf("Super Poder : %.2lf\n", superPoder2);
    
    printf("\n");
    printf("\n");


    // seleção de atributo para comparação
    int atributo1, atributo2;
   printf("##Agora você vai escolher dois atributos para comparação##\n");
    printf("Nome da Cidade: %s\n", cidade1);
    printf("1. População: %d\n", populacao1);
    printf("2. Área: %.2f km2\n", area1);
    printf("3. PIB: %.2f bilhões de reais\n", pib1);
    printf("4. Número de pontos turisticos: %d\n", ponto1);
    printf("5. Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("Escolha seu Primeiro atributo:");
    scanf("%d", &atributo1);

    printf("\n");

    if(atributo1 == 1)
    { 
    printf("Nome da Cidade: %s\n", cidade1);
    printf("2. Área: %.2f km2\n", area1);
    printf("3. PIB: %.2f bilhões de reais\n", pib1);
    printf("4. Número de pontos turisticos: %d\n", ponto1);
    printf("5. Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("Escolha seu Segundo atributo :");
    scanf("%d", &atributo2);
    }else 
    
    if (atributo1 == 2)
    {
    printf("Nome da Cidade: %s\n", cidade1);    
    printf("1. População: %d\n", populacao1);
    printf("3. PIB: %.2f bilhões de reais\n", pib1);
    printf("4. Número de pontos turisticos: %d\n", ponto1);
    printf("5. Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("Escolha seu Segundo atributo:");
    scanf("%d", &atributo2);
    }else 
    
    if (atributo1 == 3)
    {
    printf("Nome da Cidade: %s\n", cidade1);    
    printf("1. População: %d\n", populacao1);
    printf("2. Área: %.2f km2\n", area1);
    printf("4. Número de pontos turisticos: %d\n", ponto1);
    printf("5. Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("Escolha seu Segundo atributo:");
    scanf("%d", &atributo2);
    }else 
    
    if(atributo1 == 4)
    {
        printf("Nome da Cidade: %s\n", cidade1);
        printf("1. População: %d\n", populacao1);
        printf("2. Área: %.2f km2\n", area2);
        printf("3. PIB: %.2f bilhões de reais\n", pib1);
        printf("5. Densidade Populacional: %.2f hab/km2\n", densidade1);
        printf("Escolha seu Segundo atributo:");
        scanf("%d", &atributo2);
    }else 
    
    if(atributo1 == 5)
    {
    printf("Nome da Cidade: %s\n", cidade1);    
    printf("1. População: %d\n", populacao1);
    printf("2. Área: %.2f km2\n", area1);
    printf("3. PIB: %.2f bilhões de reais\n", pib1);
    printf("4. Número de pontos turisticos: %d\n", ponto1);
    printf("Escolha seu Segundo atributo:");
    scanf("%d", &atributo2);
    } else
    
    {
        printf("Opção invalida\n");
    }

    printf("\n");

    switch (atributo1)
    {
    case 1:
        printf("População %s: %d - População %s: %d\n", cidade1, populacao1, cidade2, populacao2);
        if(populacao1 == populacao2)
        {
            printf("Atributos empatados\n");
        } else{
        populacao1 > populacao2 ? printf("%s tem maior atributo\n", cidade1) :  printf("%s tem maior atributo\n", cidade2);
    }
        break;

    case 2:
        printf("Área %s: %.2f km2 - Área %s: %.2f km2\n", cidade1, area1, cidade2, area2);
        if(area1 == area2)
        {
            printf("Atributos empatados\n");
        } else{
        area1 > area2 ? printf("%s tem maior atributo\n", cidade1) :  printf("%s tem maior atributo\n", cidade2);
    }
        break;
    
    case 3:
        printf("Pib %s: %.2f bilhões de reais - Pib %s: %.2f bilhões de reais\n", cidade1, pib1, cidade2, pib2);
        if(pib1 == pib2)
        {
            printf("Atributos empatados\n");
        } else{
        pib1 > pib2 ? printf("%s tem maior atributo\n", cidade1) :  printf("%s tem maior atributo\n", cidade2);
    }
        break;
        
    case 4:
        printf("Número de pontos turísticos %s: %d - Número de pontos turísticos %s: %d\n", cidade1, ponto1, cidade2, ponto2);
        if(ponto1 == ponto2)
        {
            printf("Atributos empatados\n");
        } else{
        ponto1 > ponto2 ? printf("%s tem maior atributo\n", cidade1) :  printf("%s tem maior atributo\n", cidade2);
    }
        break;
    
    case 5:
        printf("Densidade demográfica %s : %.2f - Densidade demográfica %s : %.2f\n", cidade1, densidade1, cidade2, densidade2);
        if(densidade1 == densidade2)
        {
            printf("Atributos empatados\n");
        } else{
        densidade1 < densidade2 ? printf("%s tem melhor atributo\n", cidade1) :  printf("%s tem melhor atributo\n", cidade2);
    }
        break; 
        
        
    default:
        printf("Opção invalida\n");
        break;
    }


    switch (atributo2)
    {
    case 1:
        printf("População %s: %d - População %s: %d\n", cidade1, populacao1, cidade2, populacao2);
        if(populacao1 == populacao2)
        {
            printf("Atributos empatados\n");
        } else{
        populacao1 > populacao2 ? printf("%s tem maior atributo\n", cidade1) :  printf("%s tem maior atributo\n", cidade2);
    }
        break;

    case 2:
        printf("Área %s: %.2f km2 - Área %s: %.2f km2\n", cidade1, area1, cidade2, area2);
        if(area1 == area2)
        {
            printf("Atributos empatados\n");
        } else{
        area1 > area2 ? printf("%s tem maior atributo\n", cidade1) :  printf("%s tem maior atributo\n", cidade2);
    }
        break;
    
    case 3:
        printf("Pib %s: %.2f bilhões de reais - Pib %s: %.2f bilhões de reais\n", cidade1, pib1, cidade2, pib2);
        if(pib1 == pib2)
        {
            printf("Atributos empatados\n");
        } else{
        pib1 > pib2 ? printf("%s tem maior atributo\n", cidade1) :  printf("%s tem maior atributo\n", cidade2);
    }
        break;
        
    case 4:
        printf("Número de pontos turísticos %s: %d - Número de pontos turísticos %s: %d\n", cidade1, ponto1, cidade2, ponto2);
        if(ponto1 == ponto2)
        {
            printf("Atributos empatados\n");
        } else{
        ponto1  > ponto2 ? printf("%s tem maior atributo\n", cidade1) :  printf("%s tem maior atributo\n", cidade2);
    }
        break;
    
    case 5:
        printf("Densidade demográfica %s : %.2f - Densidade demográfica %s : %.2f\n", cidade1, densidade1, cidade2, densidade2);
        if(densidade1 == densidade2)
        {
            printf("Atributos empatados\n");
        } else{
        densidade1 < densidade2 ? printf("%s tem melhor atributo\n", cidade1) :  printf("%s tem melhor atributo\n", cidade2);
    }
        break; 
        
        
    default:
        printf("Opção invalida\n");
        break;
    }
    
    int ataque1 = atributo1, ataque2 = atributo2;
    float poder1, poder2;

if(ataque1 == 1 && ataque2 == 2)
{
    poder1 = populacao1 + area1;
    poder2 = populacao2 + area2;
}else if(ataque1 == 1 && ataque2 == 3)
{
    poder1 = populacao1 + pib1;
    poder2 = populacao2 + pib2;
} else if(ataque1 == 1 && ataque2 == 4)
{
    poder1 = populacao1 + ponto1;
    poder2 = populacao2 + ponto2;
} else if(ataque1 == 1 && ataque2 == 5 )
{
    poder1 = populacao1 + densidade1;
    poder2 = populacao2 + densidade2;
} else if (ataque1 == 2 && ataque2 == 3)
{
    poder1 = area1 + pib1;
    poder2 = area2 + pib2;
} else if(ataque1 == 2 && ataque2 == 4)
{
    poder1 = area1 + ponto1;
    poder2 = area2 + ponto2;
} else if(ataque1 == 2 && ataque2 == 5)
{
    poder1 = area1 + densidade1;
    poder2 = area2 + densidade2;
}else if(ataque1 == 3 && ataque2 == 4)
{
    poder1 = pib1 + ponto1;
    poder2 = pib2 + ponto2;
}else if (ataque1 == 3 && ataque2 ==5)
{
    poder1 = pib1 + densidade1;
    poder2 = pib2 + densidade2;
} else if (ataque1 == 4 && ataque2 == 5)
{
    poder1 = ponto1 + densidade1;
    poder2 = ponto2 + densidade2;
}
    printf("\n");

    printf("Poder %s: %.2f- Poder %s: %.2f\n", cidade1, poder1, cidade2, poder2);
    if (poder1 > poder2)
    {
        printf("##Carta 1: %s venceu!!##\n", cidade1);
    }else if(poder1 < poder2)
    {
        printf("##Carta 2: %s venceu!!##\n", cidade2);
    }else if (poder1 == poder2)
    {
        printf("##Rodada empatada!\n");
    }
    
    
    return 0;
    

}
