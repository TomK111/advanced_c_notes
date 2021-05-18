#include "fam.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct student *create_student(struct student *s, int id, char a[]){
  s = malloc(sizeof(*s) + sizeof(char) * strlen(a));
  s->student_id = id;
  s->name_length = strlen(a);
  strcpy(s->name, a);
  return s;
}

void print_student(struct student *s){
  printf("Student ID:%d\n", s->student_id);
  printf("Student Name: %s\n", s->name);
  printf("Student Name Length: %d\n", s->name_length);
}
