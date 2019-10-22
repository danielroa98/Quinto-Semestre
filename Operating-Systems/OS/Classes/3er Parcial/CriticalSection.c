#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int valor = 0;

void *CritSection(void *prueba){

  sleep(3);

  valor++;

}

int main(){

  pthread_t p1;
  pthread_t p2;

  void* apuntador1;
  void* apuntador2;

  pthread_create(&p1, NULL, CritSection, (void *) apuntador1);
  pthread_create(&p2, NULL, CritSection, (void *) apuntador2);

  pthread_join(p1, NULL);
  pthread_join(p2, NULL);

  return 0;

}
