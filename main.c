#include <stdio.h>

int isPrimeNumber(int number) {
  for (int counter = 2; counter <= number / 2; counter++) {
   if (number%counter == 0) {
   return 0;
    }
   }
return 1;
}

int main(int argc, char *argvi[]) {
while(1) {
        int number = 0;
        printf("\nPlease enter the any number:");
        scanf("%d", &number);
if (isPrimeNumber(number) == 1) {
printf("Number %d is a prime number", number);
} else {
printf("Number %d is Not a prime number", number);
}
}
return 0;
}

