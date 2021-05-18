#include <stdio.h>
#include <stdlib.h>

//EXAMPLE 1
int main(int argc, char * argv[]){
  double pi = 3.14;
  const double * pi_ptr = &pi;
  *pi_ptr = 1.11; //CAN NOT REASSIGN PI THROUGH POINTER;
  
  return EXIT_SUCCESS;
};

//EXAMPLE 2
int main(int argc, char * argv[]){
  double pi = 3.14;
  double * const pi_ptr = &pi;
  double new = 5.55;
  pi_ptr = &new; // CAN NOT REASSIGN POINTER TO DIFFERENT ADDRESS
  
  return EXIT_SUCCESS;
}

//EXAMPLE 3
int main(int argc, char * argv[]){
  double pi = 3.14;
  const double * const pi_ptr = &pi;
  double new = 6.72;
  *pi_ptr = 1.11; //CAN NOT REASSIGN MEMORY ADDRESS OR THE VALUE THROUGH THE POINTER
  pi_ptr = &new;
  
  return EXIT_SUCCESS;
}
