#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
  int fd;
  fd = open("smaple1.txt", O_CREAT | O_RDONLY, 644);
  close(fd);
  return 0;
}
