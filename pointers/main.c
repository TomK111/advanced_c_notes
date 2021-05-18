#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add_two_numbers(int * a, int * b);

int subtract_two_numbers( int * x, int * y);

int divide_two_numbers( int * k, int * j);

int main(){
    int a = 10;
    int b = 45;
    add_two_numbers(&a, &b);

    int x = 60;
    int y = 10;
    subtract_two_numbers(&x, &y);

    int k = 20;
    int j = 5;
    divide_two_numbers(&k, &j);

    return 0;
}

int add_two_numbers(int * a, int * b){
    int sum = *a + *b;
    printf("The sum is: %d\n", sum)
    return sum;

}

int subtract_two_numbers(int * x, int * y){
    int difference = *x - *y;
    printf("%d\n", difference);
    return difference;
}

int divide_two_numbers(int * k, int * j){
    int quotient = *k / *j;
    printf("K / J = %d\n", quotient);
    return quotient;
}
