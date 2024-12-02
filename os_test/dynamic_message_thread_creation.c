#include<stdio.h>
#include<pthread.h>

void *thread_function(void *message){
  printf("Message recived in threads : %s\n",(char *)message);
  return NULL;
}

int main(){

  pthread_t thread_id;
  char message[22] = "Hello this is ruthwik.";
  pthread_create(&thread_id, NULL, thread_function, message);
  pthread_join(thread_id, NULL);

  return 0;
}
