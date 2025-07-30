#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
   char estado[20];
   char codigo[20];
   char nomeCidade[20];
   int Cartas ;
   int populacao,b2populacao;
   float Área,b2Área;
   float PIB,b2PIB;  
   int numeroturisticos,b2numeroturisticos;
   char Codigo[20];
   char b2nomeCidade[20];
   char Estado[20];

//carta 01
   printf("Carta 01 \n");

   printf("Estado = "); 
   scanf("%c",&estado);

   printf("População = "); 
   scanf("%d",&populacao);

   printf("Nome da cidade = "); 
   scanf("%s",&nomeCidade);

   printf(" Área = ");
   scanf("%f", &Área);

   printf("Código = "); 
   scanf("%s",&codigo);

   printf(" PIB = ");
   scanf("%f", &PIB);

   printf("Número de pontos turistico = ");
   scanf("%d",&numeroturisticos);
 //retorno de informações
   printf("Carta 01 \n");
   printf("Estado: %c\nPopulação: %d\n", estado , populacao);
   printf("Nome da Cidade: %s\n", nomeCidade);
   printf(" Código: %s\n Área : %f\n",codigo, Área);
   printf("PIB:%f\n  Número de Turístico: %d\n", PIB , numeroturisticos );
   
  //carta 02

    printf("Carta 02 \n");

    printf("Estado = "); 
    scanf("%s", &Estado);

    printf(" População = "); 
    scanf("%d",&b2populacao);
    
    printf("Nome da cidade = "); 
    scanf("%s", &b2nomeCidade);

    printf(" Área = ");
    scanf("%f", &b2Área);
    
    printf("Código = "); 
    scanf("%s", &Codigo);

    printf(" PIB = ");
    scanf("%f", &b2PIB);

    printf(" Número de pontos turistico = ");
    scanf("%d",&b2numeroturisticos);
  //retorno de informações
    printf(" Carta 02 \n");
    printf("Estado: %s\n População: %d\n", Estado , b2populacao);
    printf("Nome da Cidade: %s\n", b2nomeCidade);
    printf("Área : %f\n  Código: %s\n ",Codigo , b2Área);
    printf("Seu PIB: %f\n  Número de pontos Turístico: %d\n", b2PIB , b2numeroturisticos);

 

    return 0;
}
