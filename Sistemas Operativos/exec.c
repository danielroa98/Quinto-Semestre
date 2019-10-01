#include <stdio.h>
#include <unistd.h>

int main(int argc, char** argv[]) {

  printf("%s\n", argv[0]);
  char* argumentos[argc - 1];

  int i = 0;

  for (i = 1; i < count; i++) {
    argumentos[i-1] = argv[i];

    printf("%s\n", argumentos[i-1]);
  }

  argumentos[argc]

  return 0;
}
