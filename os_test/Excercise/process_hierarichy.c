#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>


int main(){

  pid_t pid = fork(), pid_2;

  if(pid == 0){

    printf("\nP2 PID : %d, PPID : %d",getpid(),getppid());
    pid_2 = fork();

    if(pid_2 == 0){
      printf("\n\nP3 PID : %d, PPID : %d\n",getpid(),getppid());
    }else if(pid > 0){
      printf("\n");
      printf("\nP2 PID : %d, PPID : %d\n",getpid(),getppid());
    }

  }else if(pid  > 0){
    printf("\nP1 PID : %d, PPID : %d\n",getpid(),getppid());
  }else{
    printf("Fork failed."); 
    return -1;
  }
  return 0;
}
