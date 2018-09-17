#include <stdio.h>
#include <stdlib.h>

int main() {
  //declare an unsigned int > 2.1 billion and its pointer
  unsigned int num = 3100000000;
  char * pointer = &num;

  printf("int num: %x \n", num);
  printf("address of num: &ld \n", *pointer);

  //printing bytes
  for (int i = 0; i< sizeof(num); i++) {
    printf("Byte: %d Hex: %hhx \n", i, *pointer);
    pointer++;
  }

  printf("\n");
  pointer = &num; //reset the pointer value
  
  //Incrementing byte by 1
  for (int i = 0; i < sizeof(num); i++) {
    *pointer++;
    pointer++;
  }
  printf("Increment byte by 1: %x \n", num);

  //reset pointer
  pointer = &num;

  //Incrementing byte by 16
  for (int i = 0; i < sizeof(num); i++) {
    *pointer += 16;
    pointer++;
  }
  printf("Increment byte by 16: %x \n", num);

  return 0;
}
