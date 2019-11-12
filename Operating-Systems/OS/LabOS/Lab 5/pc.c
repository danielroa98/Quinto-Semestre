#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <semaphore.h>

#define QUEUE_SIZE 5 /* total number of slots */
#define NP 3         /* total number of producers */
#define NC 3         /* total number of consumers */
#define NITERS 4     /* number of items produced/consumed */

typedef struct
{
    int q[QUEUE_SIZE]; /* shared var */
    int front;         /* mantains the position of the front element of the queue */
    int count;         /* Counts how many elements are in the queue*/
    sem_t full;        /* keep track of the number of full spots */
    sem_t empty;       /* keep track of the number of empty spots */
    sem_t mutex;       /* enforce mutual exclusion to shared data */
} squeue_t;

squeue_t queue;

void queueAdd(int element)
{
    int index;
    /*
   * Calculate index at which to put
   * next element.
   */
    index = (queue.front + queue.count) % QUEUE_SIZE;
    queue.q[index] = element;
    queue.count++;
}

int queueRemove() //Removes the element from the from of the queue and returns it
{
    int element;
    /* Save the element so we can return it. */
    element = queue.q[queue.front];
    /*
   * Advance the index of the front,
   * making sure it wraps around the
   * array properly.
   */
    queue.front++;
    queue.front %= QUEUE_SIZE;
    queue.count--;
    return element;
}

void *Producer(void *arg)
{
    int i, item, index;

    index = (int)arg;

    for (i = 0; i < NITERS; i++)
    {

        /* Produce item */
        item = i;

        /* Prepare to write item to buf */

        /* If there are no empty slots, wait */
        sem_wait(&queue.empty);
        /* If another thread uses the buffer, wait */
        sem_wait(&queue.mutex);
        queueAdd(item);
        printf("[P%d] Producing %d ...\n", index, item);
        fflush(stdout);
        /* Release the buffer */
        sem_post(&queue.mutex);
        /* Increment the number of full slots */
        sem_post(&queue.full);

        /* Interleave  producer and consumer execution */
        if (i % 2 == 1)
            sleep(1);
    }
    return NULL;
}

void *Consumer(void *arg)
{
    //Add the code to consume the elements produced by the producer
}

int main()
{
    pthread_t idP[NP];

    int index;
    sem_init(&queue.full, 0, 0);
    //Add the code to initialize the empty and the mutual exclusion semaphores

    for (index = 0; index < NP; index++)
    {
        /* Create a new producer */
        pthread_create(&idP[index], NULL, Producer, (void *)index);
    }

    //Add the code to create NC consumers
    //Add the code to wait for the producers and the consumers

    pthread_exit(NULL);
}
