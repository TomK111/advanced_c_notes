#include <stdio.h>
#include <stdlib.h>

void increment_and_print_with_static(){
  static  int value_two  = 0;
  ++value_two;
  printf("%d\n",value_two);
}

void increment_and_print(){
  auto int value = 0;
  ++value;
  printf("%d\n", value);
}

int main(int argc, char * argv){
  increment_and_print();
  increment_and_print();
  printf("\n");
  increment_and_print_with_static();
  increment_and_print_with_static();

  return 0;
}
