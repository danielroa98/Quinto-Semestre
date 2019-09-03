//Code made for OS class

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){

	pid_t parentPid = getpid();
	pid_t newPid = fork();

	//pid_t newPID = fork();
	//pid_t pid = getpid();
	//char s[5] = "dogs!";
	//printf("My process id is : %d\n", pid);

	if(newPid > 0){

	printf("I am the parent %d of process %d", parentPid, newPid);

	}else{

	parentPid = 5;

	printf("I am the child of %d with process %\n", parentPid, newPid);

	}

	return 0;

}
