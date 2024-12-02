#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<pthread.h>

#define NUM_STRINGS 5

void *thread_function(void *arg){

  char **strings = (char **)arg;
  
  char *concatenated_string = malloc(100);

  concatenated_string[0] = '\0';

  for(int i = 0; i < NUM_STRINGS; i++){
    strcat(concatenated_string, strings[i]);
  }

  pthread_exit((void *)concatenated_string);

}

int main(){

  pthread_t thread;

  char *strings[NUM_STRINGS] = {"Hello,", "this ", "is ", "a ", "concatenation!"};

  pthread_create(&thread, NULL, thread_function, (void *)strings);

  char *result;

  pthread_join(thread, (void **)&result);

  printf("Concatenated string is : %s\n",result);

  free(result);
 
  return 0;
}
