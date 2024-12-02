#include<stdio.h>
#include<pthread.h>
#include<string.h>

#define NUM_STRINGS 5

void *thread_function(void *arg){
 
  char **strings = (char **)arg;

  for(int i = 0; i < NUM_STRINGS; i++){
    printf("Length of string %d : %lu\n",i + 1, strlen(strings[i]));
  }

  pthread_exit(NULL);

}

int main(){

  pthread_t thread;

  char *strings[NUM_STRINGS] = {
        "Hello, ",
        "this ",
        "is ",
        "a ",
        "thread!"
   };

   pthread_create(&thread, NULL, thread_function, (void *)strings);

   pthread_join(thread, NULL);

   return 0;

}
