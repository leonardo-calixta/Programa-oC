#include <stdio.h>

//Atributos das Cartas separados por 'A01' e 'B01' respectiviamente
int main(){

 char estado1[50] = "São Paulo";
 char estado2[50] = "Rio de Janeiro";
 char codigo1[50] = "A01";
 char codigo2[50] = "B01";
 char cidade1[50] = "Sao Paulo";
 char cidade2[50] = "Rio de Janeiro";
 int populacao1 = 12000000;
 int populacao2 = 7000000;
 float area1 = 120.000;
 float area2 = 45.000;
 float PIB1 = 200;
 float PIB2 = 75;
 int pontos_t1 = 50;
 int pontos_t2 = 25; 

 //Organização das cartas A e B

 printf("CARTA A: \n");
 scanf("Carta A = %s \n" , &codigo1);
 printf("A carta A é: %s \n" , codigo1);
 printf("ESTADO:  \n");
 scanf("Estado = %s \n" , &estado1);
 printf("O estado é: %s \n" , estado1);
 printf("CIDADE: \n");
 scanf("Cidade = %s \n" , &cidade1);
 printf("A cidade é: %s \n" , cidade1);
 printf("POPULAÇÃO: \n");
 scanf("População = %d \n" , &populacao1);
 printf("A população é: %d \n" , populacao1);
 printf("ÁREA: \n");
 scanf("Área = %f \n" , &area1);
 printf("A área é: %f \n" , area1);
 printf("PIB: \n");
 scanf("PIB = %f \n" , &PIB1);
 printf("O PIB é: %f \n" , PIB1);
 printf("PONTOS TURÍSTICOS: \n");
 scanf("Pontos turísticos = %d \n" , &pontos_t1);
 printf("A quatidade de pontos turísticos é: %d \n" , pontos_t1);
 printf(" \n");
 printf("CARTA B: \n");
 scanf("Carta B = %s \n" , &codigo2);
 printf("A carta B é: %s \n" , codigo2);
 printf("ESTADO:  \n");
 scanf("Estado = %s \n" , &estado2);
 printf("O estado é: %s \n" , estado2);
 printf("CIDADE: \n");
 scanf("Cidade = %s \n" , &cidade2);
 printf("A cidade é: %s \n" , cidade2);
 printf("POPULAÇÃO: \n");
 scanf("População = %d \n" , &populacao2);
 printf("A população é: %d \n" , populacao2);
 printf("ÁREA: \n");
 scanf("Área = %f \n" , &area2);
 printf("A área é: %f \n" , area2);
 printf("PIB: \n");
 scanf("PIB = %f \n" , &PIB2);
 printf("O PIB é: %f \n" , PIB2);
 printf("PONTOS TURÍSTICOS: \n");
 scanf("Pontos turísticos = %d \n" , &pontos_t2);
 printf("A quatidade de pontos turísticos é: %d \n" , pontos_t2);


 //Cartas finalizadas

 return 0;

}
