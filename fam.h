struct student {
  int student_id;
  int name_length;
  char name[];
};

void print_student(struct student *s);

struct student *create_student(struct student *s, int id, char a[]);
