#include <stdio.h>

//Atributos das Cartas separados por 'A01' e 'B01' respectiviamente
int main(){

 char estado1[50] = "São Paulo";
 char estado2[50] = "Rio de Janeiro";
 char codigo1[50] = "A01";
 char codigo2[50] = "B01";
 char cidade1[50] = "Sao Paulo";
 char cidade2[50] = "Rio de Janeiro";
 int populacao1 = 12.0;
 int populacao2 = 7.0;
 float area1 = 120.0;
 float area2 = 45.0;
 float PIB1 = 20;
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
 printf("A população é: %d milhões de habitantes\n" , populacao1);
 printf("ÁREA: \n");
 scanf("Área = %2f \n" , &area1);
 printf("A área é: %2f km²\n" , area1);
 printf("PIB: \n");
 scanf("PIB = %2f \n" , &PIB1);
 printf("O PIB é: %2f bilhões de reais \n" , PIB1);
 printf("PONTOS TURÍSTICOS: \n");
 scanf("Pontos turísticos = %d \n" , &pontos_t1);
 printf("A quatidade de pontos turísticos é: %d \n" , pontos_t1);
 // comando a seguir para dar mais espaço entre as cartas 
 printf(" \n");
 // início das infos da carta B
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
 printf("A população é: %d milhões de habitantes \n" , populacao2);
 printf("ÁREA: \n");
 scanf("Área = %2f \n" , &area2);
 printf("A área é: %2f km²\n" , area2);
 printf("PIB: \n");
 scanf("PIB = %2f \n" , &PIB2);
 printf("O PIB é: %2f bilhões de reais \n" , PIB2);
 printf("PONTOS TURÍSTICOS: \n");
 scanf("Pontos turísticos = %d \n" , &pontos_t2);
 printf("A quatidade de pontos turísticos é: %d \n" , pontos_t2);


 //Cartas finalizadas

 return 0;

}

}
