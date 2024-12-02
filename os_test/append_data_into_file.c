#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

#define Buffer_Size 1024

int main(){

  char buffer[Buffer_Size];
  int fd;

  fd = open("sample.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);
  ssize_t bytesRead = read(0, buffer, Buffer_Size);
  write(fd, buffer, bytesRead);
  close(fd);
  return 0;
}
