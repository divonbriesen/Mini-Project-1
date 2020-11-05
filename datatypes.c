#include <stdio.h>

int main(void) {
  printf("char size: %lu bytes a random numbers is here: %d\n", sizeof(char), 888);
  printf("int size: %lu bytes\n", sizeof(int));
  printf("short size: %lu bytes\n", sizeof(short));
  printf("long size: %lu bytes\n", sizeof(long));
  printf("float size: %lu bytes\n", sizeof(float));
  printf("double size: %lu bytes\n", 
    sizeof(double));
  printf("long double size: %lu bytes\n", 
    sizeof(long double));
}