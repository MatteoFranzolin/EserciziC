#include <stdio.h>
#include <string.h>
int main()
{
   char scrivi1[40]="Ciao come stai?";
   char scrivi2[40];
   char scrivi3[40]= "Bene";
   char *sub;
   printf("La lunghezza della prima stringa è: %d\n",strlen(scrivi1));
   strcpy(scrivi2,scrivi1);
   printf("Il valore della stringa copiata è: %s\n", scrivi2);
   strcat(scrivi1, scrivi3);
   printf("Il valore della stringa concatenata è: %s\n", scrivi1);
   if(strcmp(scrivi1, scrivi2)==0){
      printf("Le stringhe sono uguali\n");
   }
   else{
      printf("Le stringhe sono diverse\n");
   }
   printf("La stringa in reverse è: %s",strrev(scrivi1));
   printf("La stringa in minuscolo è: %s",strlwr(scrivi1));
   printf("La stringa in maiuscolo è: %s",strupr(scrivi1));
   sub=strstr(scrivi1, "come");
   printf("La sottostringa è: %s",sub);
   return 0; 
}
