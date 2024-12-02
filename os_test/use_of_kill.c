#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>

int main(){

  pid_t pid;
  
  pid = fork();

  if(pid == 0){
    printf("Child process PID : %d is running...\n",getpid());
    while(1){
      pause();
    }
  }else if(pid > 0){
    printf("Parent process PID : %d sending signal to child (%d)\n",getpid(),pid);
    kill(pid,SIGTERM);
    wait(NULL);
    printf("Parent process, Child process has been terminated.\n");
  }else{
    printf("Fork failed.");
    return -1;
  }
 
  return 0;

}
