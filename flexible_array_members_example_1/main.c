#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
  int student_id;
  int name_length;
  int struct_size;
  char student_name[];
};

struct student *create_student(struct student*s, int id, char a[]){
  s = malloc(sizeof(*s) + sizeof(char) * strlen(a));
  s->student_id = id;
  s->name_length = strlen(a);
  strcpy(s->student_name, a);

  return s;
}

void print_student(struct student *s){
  printf("Student ID: %d\n", s->student_id);
  printf("Student Name: %s\n", s->student_name);
  printf("Name length: %d\n", s->name_length);
};

int main(int argc, char * argv[]){
  struct student *s1 = create_student(s1, 1, "Tomislav");
  struct student *s2 = create_student(s2, 2, "Joe");

  print_student(s1);
  print_student(s2);
}
