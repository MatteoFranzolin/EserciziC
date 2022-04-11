#include <stdio.h>
int main()
{
   char scrivi[40];
   fgets(scrivi, 40, stdin);
   printf("%s", scrivi);
   return 0; 
}
