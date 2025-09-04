#include <stdio.h>

int main (){
printf("Desafio Cartas Super Trunfo! \n");

char estado1;
char codigo1[4];
char cidade1[50];
int populacao1;
float area1;
float pib1;
int pontosturisticos1;

char estado2;
char codigo2[4];
char cidade2[50];
int populacao2;
float area2;
float pib2;
int pontosturisticos2;


printf("Digite o estado da Carta 1 (A-H): ");
scanf(" %c", &estado1);

printf("Digite o codigo da Carta 1 (ex: A01): ");
scanf("%s", codigo1);

printf("Digite o nome da cidade da Carta 1: \n");
scanf("%s", cidade1);  // isso lê a string com espaços

printf("Digite a populacao da cidade: ");
scanf("%d", &populacao1);

printf("Digite a area da cidade (km²): ");
scanf("%f", &area1);

printf("Digite o PIB da cidade: ");
scanf("%f", &pib1);

printf("Digite o numero de pontos turisticos: ");
scanf("%d", &pontosturisticos1);


printf("Digite o estado da Carta 2 (A-H): ");
scanf(" %c", &estado2);

printf("Digite o codigo da Carta 2 (ex: A01): ");
scanf("%s", codigo2);

printf("Digite o nome da cidade da Carta 2: ");
scanf(" %[^\n]", cidade2);  // isso lê a string com espaços

printf("Digite a populacao da cidade: ");
scanf("%d", &populacao2);

printf("Digite a area da cidade (km²): ");
scanf("%f", &area2);

printf("Digite o PIB da cidade: ");
scanf("%f", &pib2);

printf("Digite o numero de pontos turisticos: ");
scanf("%d", &pontosturisticos2);


printf("\nCarta 1:\n");
printf("Estado: %c\n", estado1);
printf("Codigo: %s\n", codigo1);
printf("Nome da Cidade: %s\n", cidade1);
printf("Populacao: %d\n", populacao1);
printf("Area: %.2f km²\n", area1);
printf("PIB: %.2f bilhoes de reais\n", pib1);
printf("Numero de Pontos Turisticos: %d\n", pontosturisticos1);




printf("\nCarta 2:\n");
printf("Estado: %c\0", estado2);
printf("Codigo: %s\n", codigo2);
printf("Nome da Cidade: %s\n", cidade2);
printf("Populacao: %d\n", populacao2);
printf("Area: %.2f km²\n", area2);
printf("PIB: %.2f bilhoes de reais\n", pib2);
printf("Numero de Pontos Turisticos: %d\n", pontosturisticos2);


return 0;
}