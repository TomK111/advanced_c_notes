#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Books {
  char title[50];
  char author[50];
  char genre[50];
} Book;

int main(int argc, char * argv[]){

  Book Book;

  strcpy(Book.title, "C Programming");

  strcpy(Book.author, "The OG Dennis Ritchie");

  strcpy(Book.genre, "Programming");

  printf("Book Title: %s\n", Book.title);

  printf("Book Author: %s\n", Book.author);

  printf("Beook Genre: %s\n", Book.genre);
  
  return EXIT_SUCCESS;
}
