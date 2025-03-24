#include <stdio.h>

//Atributos das Cartas separados por '1' e '2' respectiviamente
int main(){

 char estado1[50] = "São Paulo";
 char estado2[50] = "Rio de Janeiro";
 char codigo1[50] = "A01";
 char codigo2[50] = "A02";
 char cidade1[50] = "Sao Paulo";
 char cidade2[50] = "Rio de Janeiro";
 int populacao1 = 12.000000;
 int populacao2 = 7.000000;
 float area1 = 120.000;
 float area2 = 45.000;
 float PIB1 = 200;
 float PIB2 = 75;
 int pontosT1 = 50;
 int pontosT2 = 25; 

 //Organização das cartas A

 printf("CARTA A: \n");
 printf("Estado: %s \n" , estado1);
 printf("Carta: %s \n" , codigo1);
 printf("Cidade: %s \n" , cidade1);
 printf("População: %d \n" , populacao1);
 printf("Área: %f km² \n" , area1);
 printf("PIB: %f Bilhões de Reais \n" , PIB1);
 printf("Pontos Turísticos: %d \n" , pontosT1);
 //Cartas A finalizadas

 printf(" \n");

//Organização das cartas B
 printf("CARTA B: \n");
 printf("Estados: %s \n" , estado2);
 printf("Carta: %s \n" , codigo2);
 printf("Cidade: %s \n" , cidade2);
 printf("População: %d \n" , populacao2);
 printf("Área: %f km² \n" , area2);
 printf("PIB: %f Bilhões de Reais\n" , PIB2);
 printf("Pontos Turísticos: %d \n" , pontosT2);
//Cartas B finalizadas
return 0;

}