#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>

int main(){

  pid_t child_pid = fork();

  if(child_pid == 0){
    printf("Child process PID : %d\n",getpid());
    exit(0);
  }else if(child_pid > 0){
    printf("Parent process PID : %d\n",getpid());
    printf("Parent process Child PID : %d\n",child_pid);
    sleep(10);
    printf("Parent process terminating...\n");
  }else{
    printf("\nFork failed\n");
    return -1;
  }
  return 0;

}
