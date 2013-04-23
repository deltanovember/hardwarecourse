#include <stdio.h>
int main() {
  int myArray[2];
  myArray[0] = 5;
  myArray[1] = 6;
  printf("%p\n", &myArray[0]);
  printf("%p\n", &myArray[1]);
  printf("%i\n", (int) &myArray[1] - (int) &myArray[0]);
  return 0;
}