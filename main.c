#include <stdio.h>
#include <conio.h>
/*
- This function is used for checking the number is prime or not a prime number.
- Intput: number - Number to check for number is prime or not a prime.
- Return: 1 If given number is prime.
	: 0 If given number is not prime.
*/
int isPrimeNumber(int number) {
  int isPrimeNumberFlag = 0;
  for (int counter = 2; counter < number / 2; counter++) {
    if (number%counter == 0) {
      isPrimeNumberFlag = 1
     break;
    }
   }
return isPrimeNumber;
}

int main(int argc, char *argv) {
while(1) {
	int number = 0
	printf("Please enter the any number:");
	scanf("%d", &number);
if (isPrimeNumber(number)) {
printf("Number %d is Prime Number", number);
} else {
printf("Number %d is Prime Number", number);
}
return 0
}
