#include <stdio.h>
#include <stdlib.h>
#include "fam.h"


int main(int argc, char * argv[]){
  struct student *s1 = create_student(s1, 1, "Tomislav");
  struct student *s2 = create_student(s2, 2, "Joe");

  print_student(s1);
  print_student(s2);

  return EXIT_SUCCESS;
}
