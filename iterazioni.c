#include <stdio.h>
int main()
{ 
   int numero;
   scanf("%d", &numero);
   switch (numero)
   {
   case 1:
       printf("Lunedì\n"); 
       break;
   case 2:
       printf("Martedì\n"); 
       break;
    case 3:
       printf("Mercoledì\n"); 
       break;
    case 4:
       printf("Giovedì\n"); 
       break;
    case 5:
       printf("Venerdì\n"); 
       break;
    case 6:
       printf("Sabato\n"); 
       break;
    case 7:
       printf("Domenica\n"); 
       break;
   default:
       printf("Giorno non valido\n");
       break;
   }
   return 0;
}
