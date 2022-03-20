#include <stdio.h>
int main()
{ 
   int numero;
   scanf("%d", &numero);
   if(numero==1){
      printf("Lunedì\n"); 
   }
   else if(numero==2){
      printf("Martedì\n"); 
   }
   else if(numero==3){
      printf("Mercoledì\n"); 
   }
   else if(numero==4){
      printf("Giovedì\n"); 
   }
   else if(numero==5){
      printf("Venerdì\n"); 
   }
   else if(numero==6){
      printf("Sabato\n"); 
   }
   else if(numero==7){
      printf("Domenica\n"); 
   }
   else{
       printf("Giorno non valido\n"); 
   }
   return 0;
}
