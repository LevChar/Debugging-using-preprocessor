#include <stdlib.h>
#include <stdio.h>
#include "debug.h"

int sum(int x, int y, int z) {
  char c = 2;
  int *a = NULL;

DEB("values are: x=%d, y=%d, z=%d\n", x,y,z);
DEB("location a stores is : a=%p\n", a);

  *a = 5;
DEB("location a stores is : a=%p and value of a=%d\n", a,*a);

  return (c + x + y + z + *a) / 3;
}

int main(int argc, char *argv[]) {
  int i, j, k;
  int result;

DEB("number of parametters to main is : %d\n", argc);

  if (argc == 1) {
     printf("Please specify three numbers as parameters.\n");
     exit(1);
  }

  i = atoi(argv[1]);

  DEB("value of arg1=%d\n", i);

  j = atoi(argv[2]);

  DEB("value of arg2=%d\n", j);

  k = atoi(argv[3]);

  DEB("value of arg3=%d\n", k);

  result = sum(i,j,12) + sum(j,k,19) + sum(i,k,13);

  printf("%d\n", result);

  return 0;
}