#include <stdio.h>
int main()
{ 
   int num1 = 9;
   int num2 = 3;
   printf("AND: %d\n", (num1&num2)); //risultato: 1
   printf("OR: %d\n", (num1|num2)); //risultato: 11
   printf("XOR: %d\n", (num1^num2)); //risultato: 10
   return 0;
}
