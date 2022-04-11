#include <stdio.h>
int main()
{
   char scrivi[40];
   printf("Inserisci una stringa: ");
   fgets(scrivi, 40, stdin);
   printf("Hai inserito: ");
   puts(scrivi);
   return 0; 
}
