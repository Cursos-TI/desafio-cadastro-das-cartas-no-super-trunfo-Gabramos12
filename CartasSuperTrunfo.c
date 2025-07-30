#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
   char estado[20],Estado[20];
   char codigo[20], Codigo[20];
   char nomeCidade[50],b2nomeCidade[50];
   int Cartas ;
   int populacao,b2populacao; 
   float Área,b2Área;
   float PIB,b2PIB;  
   int numeroturisticos,b2numeroturisticos;
   


   printf("Carta 01 \n");

   printf("Estado = "); 
   scanf("%c",&estado);

  printf("Código = "); 
   scanf("%c",&codigo);

  printf("Nome da cidade = "); 
   scanf("%d",&nomeCidade);

   printf("População = "); 
   scanf("%d",&populacao);

   printf(" Área = ");
   scanf("%f", &Área);

   printf(" PIB = ");
   scanf("%f", &PIB);

   printf("Número de pontos turistico = ");
   scanf("%d",&numeroturisticos);

   printf("Carta 01 \n");
    printf("Estado: %c\n Código: %c\n",estado,codigo);
    printf("Nome da Cidade: %c\n", nomeCidade);
   printf("População: %d\n Área : %f\n",populacao, Área);
   printf("PIB:%f\n  Número de Turístico: %d\n",PIB, numeroturisticos);
   

    printf("Carta 02 \n");

   printf("Estado = "); 
   scanf("%c",&Estado);

  printf("Código = "); 
   scanf("%c",&Codigo);

  printf("Nome da cidade = "); 
   scanf("%d",&b2nomeCidade);


    
    printf(" População = "); 
    scanf("%d",&b2populacao);

    printf(" Área = ");
    scanf("%f", &b2Área);

    printf(" PIB = ");
    scanf("%f", &b2PIB);

    printf(" Número de pontos turistico = ");
    scanf("%d",&b2numeroturisticos);

    printf(" Carta 02 \n");
    printf("Estado: %c\n Código: %c\n",Estado,Codigo);
    printf("Nome da Cidade: %c\n", b2nomeCidade);
    printf("População: %d\n Área : %f\n ",b2populacao, b2Área);
    printf("Seu PIB: %f\n  Número de pontos Turístico: %d\n",b2PIB, b2numeroturisticos);

 

    return 0;
}
