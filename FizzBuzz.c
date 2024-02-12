#include <stdio.h>// Gets us access to input/output functions

int main() {
  int i = 1;// Integer counter starting at 1
  while(i < 101) {// While loop from 1 to 100
    if(i % 15 == 0) {// Divisible by 15
      printf("FizzBuzz\n");  
    } else if (i % 3 == 0) {// Divisible by 3
      printf("Fizz\n");
    } else if (i % 5 == 0) {// Divisible by 5  
      printf("Buzz\n");
    } else {
      printf("%d\n", i); // Print the number  
    }   
    i++;
  }
  return 0; // Return success code
}