#include <stdio.h>

int main() {
    char estado1, estado2;//estados
    char codigodacarta1[20], codigodacarta2[20];//codigo
    char nomedacidade1[50], nomedacidade2[50];// nome das cidades a serem cadastradas
    int populacao1, populacao2;//numero de habitantes
    float area1, area2;// area das cidades
    float pib1, pib2;// pib das cidades
    int pontosturisticos1, pontosturisticos2;// numero de pontos turisticos
    float densidadepopulacional1, densidadepopulacional2; //densidade populacional
    float pibpercapita1, pibpercapita2; //pib per capita
    int opcao; //opcao de escolha no menu




    //Cadastrando os dados da primeira carta
    printf("Digite os dados da primeira carta\n\n");
    printf("Digite o estado:\n");
    scanf(" %c", &estado1); 
    printf("Digite o código da carta:\n");
    scanf("%s", codigodacarta1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nomedacidade1);

    printf("Digite a população:\n");
    scanf("%d", &populacao1);

    printf("Digite a área:\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosturisticos1);

    printf("Primeira carta:\n"); //informacoes da primeira carta ja cadastrada
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigodacarta1);
    printf("Cidade: %s\n", nomedacidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n\n", pontosturisticos1);

    


    printf("Digite os dados da segunda carta\n\n");

    printf("Digite o estado:\n");
    scanf(" %c", &estado2); 
    
    printf("Digite o código da carta:\n");
    scanf("%s", codigodacarta2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nomedacidade2);

    printf("Digite a população:\n");
    scanf("%d", &populacao2);

    printf("Digite a área:\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos:\n");
    scanf("%d", &pontosturisticos2);

    

    printf("Segunda carta:\n"); // informacoes da segunda carta ja cadastrada
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigodacarta2);
    printf("Cidade: %s\n", nomedacidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);

    densidadepopulacional1 = populacao1 / area1; //calculo da densidade populacional
    densidadepopulacional2 = populacao2 / area2;

    printf("#*# Escolha um atributo para comparar #*#\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demografica\n");
    scanf("%d", &opcao);
    switch (opcao) { // opcao de escolha do usuario
        case 1:
            if (populacao1 > populacao2) {
                printf(" carta: %c \n populacäo: %d \n", estado1, populacao1);
                printf(" carta: %c \n populacäo: %d \n", estado2, populacao2);
                printf("carta %c #*# venceu #*# \n", estado1);
            } else if (populacao1 == populacao2){
                printf ("carta: %c \n populacäo: %d \n", estado1, populacao1); 
                printf ("carta: %c \n populacäo: %d \n", estado2, populacao2);
                printf("#*# empate #*# \n");
            } else {
                printf(" carta: %c \n populacäo: %d \n", estado1, populacao1);
                printf(" carta: %c \n populacäo: %d \n", estado2, populacao2);
                printf("carta %c #*# venceu #*# \n", estado2);
            }
            break;
        case 2:
            if (area1 > area2) {
                printf(" carta: %c \n area: %f \n", estado1, area1);
                printf(" carta: %c \n area: %f \n", estado2, area2);
                printf("carta %c #*# venceu #*# \n", estado1);
            } else if (area1 == area2){
                printf ("carta: %c \n area: %f \n", estado1, area1); 
                printf ("carta: %c \n area: %f \n", estado2, area2);
                printf("#*# empate #*# \n");
            } else {
                printf(" carta: %c \n area: %f \n", estado1, area1);
                printf(" carta: %c \n area: %f \n", estado2, area2);
                printf("carta %c #*# venceu #*# \n", estado2);
            }       
            break;
        case 3:
            if (pib1 > pib2) {
                printf(" carta: %c \n PIB: %f \n", estado1, pib1);
                printf(" carta: %c \n PIB: %f \n", estado2, pib2);
                printf("carta %c #*# venceu #*#\n", estado1);
            } else if (pib1 == pib2){
                printf ("carta: %c \n PIB: %f \n", estado1, pib1); 
                printf ("carta: %c \n PIB: %f \n", estado2, pib2);
                printf("#*# empate #*# \n");
            } else {
                printf(" carta: %c \n PIB: %f \n", estado1, pib1);
                printf(" carta: %c \n PIB: %f \n", estado2, pib2);
                printf("carta %c #*# venceu #*# \n", estado2);
            }
            break;
        case 4:
            if (pontosturisticos1 > pontosturisticos2) {
                printf(" carta: %c \n populacäo: %d \n", estado1, pontosturisticos1);
                printf(" carta: %c \n populacäo: %d \n", estado2, pontosturisticos2);
                printf("carta %c #*# venceu #*# \n", estado1);
            } else if (pontosturisticos1 == pontosturisticos2){
                printf ("carta: %c \n populacäo: %d \n", estado1, pontosturisticos1); 
                printf ("carta: %c \n populacäo: %d \n", estado2, pontosturisticos2);
                printf("#*# empate #*# \n");
            } else {
                printf(" carta: %c \n populacäo: %d \n", estado1, pontosturisticos1);
                printf(" carta: %c \n populacäo: %d \n", estado2, pontosturisticos2);
                printf("carta %c #*# venceu #*# \n", estado2);
            }
                 break;
        case 5:
            if (densidadepopulacional1 < densidadepopulacional2) {      
                printf(" carta: %c \n densidade populacional: %f \n", estado1, densidadepopulacional1);
                printf(" carta: %c \n densidade populacional: %f \n", estado2, densidadepopulacional2);
                printf("carta %c #*# venceu #*# \n", estado1);
            } else if (densidadepopulacional1 == densidadepopulacional2){
                printf ("carta: %c \n densidade populacional: %f \n", estado1, densidadepopulacional1); 
                printf ("carta: %c \n densidade populacional: %f \n", estado2, densidadepopulacional2);
                printf("#*# empate #*# \n");
            } else {
                printf(" carta: %c \n densidade populacional: %f \n", estado1, densidadepopulacional1);
                printf(" carta: %c \n densidade populacional: %f \n", estado2, densidadepopulacional2);
                printf("carta %c #*# venceu #*# \n", estado2);
            }
            break;
        default:
            printf("Opção inválida!\n");
    }
}
