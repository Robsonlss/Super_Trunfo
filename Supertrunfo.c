#include<stdio.h>
int main(){
    char estado1, estado2;
    char codigodacarta1[20], codigodacarta2[20];
    char nomedacidade1[50], nomedacidade2[50]; 
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

printf("digite os dados da priomeira carta\n");
printf ("digite o estado:\n");
scanf ("%c", &estado1);

printf ("digite o codigo da carta:\n");
scanf ("%s", &codigodacarta1);

printf ("digite o nome da cidade:\n");
scanf ( "%s" ,&nomedacidade1);

printf ("digite a populacao:\n");
scanf ("%d", &populacao1);

printf ("digite a area:\n");
scanf ("%f", &area1);

printf ("digite o PIB:\n");
scanf ("%f", &pib1 );

printf ("digite a quantidade de pontos turisticos:\n");
scanf ("%d", &pontosturisticos1);



printf("digite os dados da segunda carta\n");

printf ("digite o estado:\n");
scanf ("%c", &estado2);

printf ("digite o codigo da carta:\n");
scanf ("%s", &codigodacarta2);

printf ("digite o nome da cidade:\n");
scanf ("%s", &nomedacidade2);

printf ("digite a populacao:\n");
scanf ("%d", &populacao2);

printf ("digite a area:\n");
scanf ("%f", &area2);

printf ("digite o PIB:\n");
scanf ("%f", &pib2);

printf ("digite a quantidade de pontos turisticos:\n");
scanf ("%d", &pontosturisticos2);


printf("Primeira carta:\n");
printf("Estado: %c\n" ,estado1);
printf("Codigo:%s\n", codigodacarta1);
printf("Cidade%n\n",nomedacidade1);
printf("Populacao: %d\n",populacao1);
printf("Area:%f km²\n", area1);
printf("PIB:%f bilhoes de reais\n",pib1 ); 
printf("Pontos turisticos: %d\n", pontosturisticos1);

printf("Segunda carta:\n");
printf("Estado: %c\n" ,estado2);
printf("Codigo:%s\n", codigodacarta2);
printf("Cidade%n\n",nomedacidade2);
printf("Populacao: %d\n",populacao2);
printf("Area:%f km²\n", area2);
printf("PIB:%f bilhoes de reais\n",pib2); 
printf("Pontos turisticos: %d\n", pontosturisticos2);


    return 0;
}
