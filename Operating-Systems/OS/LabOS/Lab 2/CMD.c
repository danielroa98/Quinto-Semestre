/***********************************************************
 *
 *  <Luis Daniel Roa> : <A01021960>
 *
 *  Program to run Linux based terminal commands
 *
 **************************************************************/

#include <stdio.h>
#include <unistd.h>

int main(int argc, char** argv) {

  char* comando[argc];

  int i;

  for (i = 1; i < argc; i++) {

    comando[i-1] = argv[i];

  }

  comando[argc - 1] = argv[i];

  int f = execvp(argv[1], comando);

  printf("%d\n", f);

  return 0;
}
