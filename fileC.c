#include <stdio.h>
int main()
{
   int i;
   int vettore[10];
   printf("Inserisci 10 numeri interi:\n");
   for(i=0; i<10; i++){
      scanf("%d", &vettore[i]);
   }
   for(i=0; i<10; i++){
         if(vettore[i]%2==0){
          printf("%d / ", vettore[i]);
         }
      }
   for(i=0; i<10; i++){
         if(vettore[i]%2!=0){
          printf("%d / ", vettore[i]);
         }
      }
   return 0; 
}
