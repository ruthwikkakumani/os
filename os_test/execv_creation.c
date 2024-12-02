#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>

int main(){

  pid_t pid;

  char *args[] = {"ls","-l",NULL};

  pid = fork();

  if(pid < 0){
    printf("Fork failed.");
    return -1;
  }
  if(pid == 0){
    printf("Child process (PID) : %d\n running ls -l command...\n",getpid());
    if(execv("/bin/ls",args) == 0){
      perror("execv failed.");
      exit(1);
    }
  }else{
     printf("Parent process (PID) : %d\nChild process has finished.\n",getpid());
  }
  return 0;
}
