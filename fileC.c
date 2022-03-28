#include <stdio.h>
int main()
{ 
   int voto;
   scanf("%d", &voto);
   (voto>=0) ? printf("Il voto è positivo\n") //se la condizione è vera allora esegue la prima opzione
             : printf("Il voto è negativo\n"); //se è falsa esegue la seconda
             //può essere utilizzato al posto di if e else
   return 0; 
}
