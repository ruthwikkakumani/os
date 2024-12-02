#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>

int main(){

  pid_t child_pid = fork();
  
  if(child_pid == 0){
    printf("Child process PID : %d\n",getpid());
    sleep(2);
    printf("\nChild process parent's PID : %d\n",getppid());
  }else if(child_pid > 0){
    printf("Parent process PID : %d\n",getpid());
    printf("Parent process terminating...\n");
  }else{
    printf("Fork failed.");
    return -1;
  }
  return 0;

}
