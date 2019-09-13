#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CMM_LEN 100

int main(int argc, char const *argv[]) {

  char cmd[MAX_CMM_LEN] = "", **p;

  if (argc < 2)
  {

    fprintf(stderr, "Usage: ./program_name terminal_command...\n");
    exit(EXIT_FAILURE);

  }
  else
  {

    strcat(cmd, argv[1]);
    for (p = &argv[2]; *p; p++) {

      strcat(cmd, " ");
      strcat(cmd, *p);

    }

    system(cmd);

  }

  return 0;
}
