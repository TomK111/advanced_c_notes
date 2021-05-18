#include <stdio.h>
#include <stdlib.h>

 extern int x;
 extern int b;

 extern void print_x();
 extern void print_b();





/*
This header file is not necessary with extern. When we define a function in a header file,
it is 'implicitly' extern.

extern prevents us from having multiple definition erorrs. What happens if you have a header file with 
int x and in another source file, write another variable int x? ERROR. 

However, if we use extern and no header file, we have to call each function and variable manually
with extern that is located in another c file.

If we use a header file, we just need to import the .h file and it does all that work for us.

This saves us so much time.

 */

