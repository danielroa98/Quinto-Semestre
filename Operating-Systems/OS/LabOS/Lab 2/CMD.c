/************************************************************************
 *  <Luis Daniel Roa>:<A01021960>
 *  Due date:
 *  September 17, 2019
 *  C code made to perform linux commands from within the input
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/signal.h>

#define MAX_LENGTH 250 //maximum length of characters that can be written in the command line

int main(int argc, char *argv[]) {

  char cmd[MAX_LENGTH] = "", **p; //pounter are being declared

  pid_t parent = getpid();

  printf("The parent process is: %d\n", parent);

  if (argc < 2) { //if the input sintaxis isn't equivalent to two seperate sentences
    fprintf(stderr, "\nWrong syntaxis, should be as follows:\n./program command...\n");
  }
    else{
      strcat(cmd, argv[1]);

      for (p = &argv[2]; *p; p++) {

        strcat(cmd, " ");
        strcat(cmd, *p);

      }

      printf("\nThe command is the following:\n\n");

      system(cmd);
    }

    return 0;

}
