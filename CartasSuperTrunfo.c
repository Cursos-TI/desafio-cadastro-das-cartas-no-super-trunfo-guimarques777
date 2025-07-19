#include <stdio.h>

int main(){
//variáveis para armazenar os dados da primeira carta.
char estado1[2];
char codigo1[5];
char cidade1[20];
int populacao1;
float area1;
float pib1;
int pontosTuristicos1;

//variáveis para armazenar os dados da segunda carta.
char estado2[2];
char codigo2[5];
char cidade2[20];
int populacao2;
float area2;
float pib2;
int pontosTuristicos2;

printf("Você ira usar 2 cartas nessa rodada.\n");

//entrada de dados da primeira carta.

printf("Vamos começar com a primeira carta\n");

printf("Qual a letra do Estado da sua primeira carta?\n");
scanf("%s", estado1);

printf("Qual o código da sua primeira carta?\n");
scanf("%s", codigo1);

printf("Qual o nome da cidade da sua primeira carta?\n");
scanf("%s", cidade1);

printf("Qual o tamanho da população da sua primeira carta?\n");
scanf("%d", &populacao1);

printf("Qual a área da sua primeira carta?\n");
scanf("%f", &area1);

printf("Qual o PIB da sua primeira carta?\n");
scanf("%f", &pib1);

printf("Quantos pontos turísticos tem em sua primeira carta?\n");
scanf("%d", &pontosTuristicos1);

//entrada de dados da segunda carta.

printf("Certo, agora você ira digitar os dados da segunda carta?\n");

printf("Qual a letra do Estado da sua segunda carta?\n");
scanf("%s", estado2);

printf("Qual o código da sua segunda carta?\n");
scanf("%s", codigo2);

printf("Qual o nome da cidade da sua segunda carta?\n");
scanf("%s", cidade2);

printf("Qual o tamanho da população da sua segunda carta?\n");
scanf("%d", &populacao2);

printf("Qual a área da sua segunda carta?\n");
scanf("%f", &area2);

printf("Qual o PIB da sua segunda carta?\n");
scanf("%f", &pib2);

printf("Quantos pontos turísticos tem em sua segunda carta?\n");
scanf("%d", &pontosTuristicos2);

//exibição dos dados das cartas.

printf("====Carta 1:====\n");
printf("Estado: %s\n", estado1);
printf("Código da carta: %s\n", codigo1);
printf("Nome da Cidade: %s\n", cidade1);
printf("Tamanho da população: %d\n", populacao1);
printf("Área: %.2f Km²\n", area1);
printf("PIB:R$ %.2f\n", pib1);
printf("Pontos Turísticos: %d\n", pontosTuristicos1);

printf("====Carta 2:=====\n");
printf("Estado: %s\n", estado2);
printf("Código da carta: %s\n", codigo2);
printf("Nome da Cidade: %s\n", cidade2);
printf("Tamanho da população: %d\n", populacao2);
printf("Área: %.2f Km²\n", area2);
printf("PIB:R$ %.2f\n", pib2);
printf("Pontos Turísticos: %d\n", pontosTuristicos2);

return 0;




}