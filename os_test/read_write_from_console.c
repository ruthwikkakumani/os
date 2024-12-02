#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

#define Buffer_Size 1024

int main(){

  char buffer[Buffer_Size];

  ssize_t bytesRead = read(0, buffer, Buffer_Size);
  write(1, buffer, bytesRead);

  return 0;

}
