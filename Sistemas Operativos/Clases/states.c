#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(){

	pid_t newId = fork();

	if(newId > 0){
		wait(NULL);
	} else{

		sleep(100);

	}

	return 0;

}

