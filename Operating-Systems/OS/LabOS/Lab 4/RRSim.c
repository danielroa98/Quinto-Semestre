/*
 * 	Lab 4, Threaded Round Robin Simulator
 * 	Luis Daniel Roa 			: 	A01021960
 *	Sebastian Gonzalo Vives		:	A01025211
 * 
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Structure that defines a process, indicating the process ID and how much time remaining it will run, provided it wont block
typedef struct process{
	int id;
	int runTime;
} process_t;

//Structure that will act as each node of the linked list
typedef struct node{
	process_t proc;
	struct node *next;
}node_t;


//Since we cannot know in advance how many processes we will have, we need a way to have a dynamic queue
//So, here is the code of a linked list that will act as a queue.
//This will be the first node of the linkedlist
node_t * head=NULL;
//This variable counts how many process we have in the process queue.
int processCount;


//Function to add a new process to the queue
void enqueue(int id, int val){
	node_t *current=head;

	if(processCount==0){//check if we have 0 process waiting
		head->proc.id=id;//just give the value to the first element in the queue
		head->proc.runTime=val;
	}else{//We have to add a new node
		//iterate until we find the end of the queue
		while(current->next!=NULL){
			current=current->next;
		}
		//Add to the end of the queue a new process
		current->next=malloc(sizeof(node_t));
		current->next->proc.runTime=val;
		current->next->proc.id=id;
		current->next->next=NULL;
	}
	processCount++;
}


//function that removes the first element of the queue
process_t dequeue(){
	process_t returningValue;
	if(processCount==1){
		returningValue=head->proc;
	}else{

		node_t *nextProc=head->next;
		returningValue=head->proc;
		free(head);
		head=nextProc;
	}
	processCount--;
	return returningValue;
}

int main()
{
	// seed for random generator
	srand(time(0));

	head = malloc(sizeof(node_t));
	head->next = NULL;
	processCount = 0;
	//Add here your code for simulating a round robin scheduler and processor.
	int timeSlice = 6;
	int lower = 5, upper = 30;
	printf("Time slice is %d\n", timeSlice);

	for (int i = 0; i < 5; i++)
	{
		int num = (rand() % (upper - lower + 1)) + lower;
		enqueue(i, num);
		printf("Adding process %d with running time of %d\n", i, num);
	}

	dequeue();

}
