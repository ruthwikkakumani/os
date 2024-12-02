#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

#define Buffer_Size 11

int main(){

  int fd;
  char buffer[Buffer_Size];

  fd = open("sample.txt", O_RDONLY);
  lseek(fd, 10, SEEK_SET);
  ssize_t bytesRead  = read(fd, buffer, Buffer_Size);
  write(1, buffer, bytesRead);

  close(fd);

  return 0;

}
