#include <stdio.h>
#include <string.h>
int main()
{
   int numero;
   do{
      printf("Inserisci un numero maggiore di 3: ");
      scanf("%d", &numero);
   }while(numero<3);
   for(int i=0; i<numero; i++){
      printf("*");
   }
   for(int i=0; i<numero-2; i++){
      printf("\n*");
      for(int j=0; j<numero-2; j++){
         printf(" ");
      }
      printf("*");
   }
   printf("\n");
   for(int i=0; i<numero; i++){
      printf("*");
   }
   printf("\n");
   return 0; 
}