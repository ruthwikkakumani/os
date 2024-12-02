#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){

  int fd = open("source.txt", O_RDONLY | O_CREAT, 0644);
  int cpy_fd = open("Destination.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
  int Buffer_Size = (lseek(fd,0,SEEK_END));
  char buffer[Buffer_Size];

  int choice;

  printf("Enter a number(1 or 2) : ");
  scanf("%d", &choice);

  if(choice == 1){
     
     lseek(fd, 0, SEEK_SET);
     read(fd, buffer, Buffer_Size/2);
     write(cpy_fd, buffer, Buffer_Size / 2);

  }else if(choice == 2){

     lseek(fd, Buffer_Size/2, SEEK_SET);
     read(fd, buffer, Buffer_Size/2);
     write(cpy_fd, buffer, Buffer_Size / 2);

  }

  close(cpy_fd);
  close(fd);
  return 0;

}

