#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

#define NUM_THREADS 1

void *thread_function(void *arg){
  int *returnValue = malloc(sizeof(int));
  *returnValue = 143;
  pthread_exit(returnValue);
}

int main(){

  pthread_t threads[NUM_THREADS];
  int *threads_return;

  pthread_create(&threads[0], NULL, thread_function, NULL);
  pthread_join(threads[0], (void **)&threads_return);

  printf("Value returned from thread: %d\n",*threads_return);

  return 0;
}
