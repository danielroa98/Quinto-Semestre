/*
 *  Daniel Roa
 *  A01021960
 *  Threads example
 *  To compile: gcc threads.c -o th -lpthread
 */
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void *printMessage(void *m){
  char *message = (char *)m;
  printf("%s\n", message);
}

int main() {

  pthread_t tId;
  char *m = "Hello world";
  pthread_create(&tId, NULL, printMessage, (void *) m);
  printf("Created thread: %ld\n", tId);
  pthread_join(tId, NULL);

  return 0;
}
