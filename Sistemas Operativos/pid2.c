//Code made for OS class

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
	int a = 1;
	pid_t myPid = getpid();
	pid_t newPid = fork();
	//pid_t newPID = fork();
	//pid_t pid = getpid();
	//char s[5] = "dogs!";
	//printf("My process id is : %d\n", pid);
	if(newPid > 0){
		pid_t newPid = getpid();
	printf("I am the process %d and my child is %d\n", myPid, newPid);
	//printf("Value of variable a in parent is %d\n", myPid, newPid);
}/*else{
	//parentPid = 5;
	a = 1;
	pid_t myPid = getpid();
	printf("I am the process %d and my child is %d\n", myPid, newPid);

}*/
	return 0;
}
