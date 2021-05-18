#include <stdio.h>
#include <stdlib.h>

struct pointer {
  int x;
  int y;
  int z;
};

int main(int argc, char * argv[]){
  struct pointer point[10] = {[4].x = 3, [2].y = 9, [4].z = 1};

  for(size_t i = 0; i < 10; ++i){
    printf("%ld) X: %d  Y: %d  Z: %d\n", i, point[i].x, point[i].y, point[i].z);
  };

    return EXIT_SUCCESS;
}
