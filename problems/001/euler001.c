/* euler001.c  projecteuler.net Find the sum of all the multiples of 3 or 5 below 1000. */
/* Jeffrey S. Miller, 02-Sep-02014 */

#include <stdio.h>

int sumBelow1000(int factor) {
  int sum = 0;
  int multiple;
  for (multiple = factor; multiple < 1000; multiple += factor) {
    sum += multiple;
  }
  return sum;
}

int main(int argc, char **argv) {
  int sum = 0;
  int currentThree;
  int currentFive;
  int currentFifteen;
  
  sum = sum + sumBelow1000(3) + sumBelow1000(5) - sumBelow1000(15);
  
  printf("The sum of all numbers below 1000 which are multiples of 3 or 5 is: %d.\n", sum);
}
