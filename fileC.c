#include <stdio.h>
int main()
{ 
   int input;
   int i;
   int array[10];
   for(i=0; i<10; i++){
      scanf("%d", &array[i]);
   }
   for(i=0; i<10; i++){
         if(array[i]%2==0){
          printf("%d / ", array[i]);
         }
      }
   for(i=0; i<10; i++){
         if(array[i]%2!=0){
          printf("%d / ", array[i]);
         }
      }
   return 0; 
}
