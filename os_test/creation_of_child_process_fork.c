#include<stdio.h>
#include<unistd.h>

int main(){

  pid_t child_pid;
  
  child_pid = fork();
  
  if(child_pid == 0){
    printf("Parent process PID : %d\n", getppid());
    printf("Child process PID : %d\n\n", getpid());
  }else if(child_pid > 0){
    printf("Parent process PID : %d\n", getpid());
    printf("Child process PID : %d\n\n", child_pid);
  }else{
    printf("Fork failed\n");
    return 1;
  }

  return 0;

}
