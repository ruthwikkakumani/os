#include<stdio.h>
#include<dirent.h>
#include<sys/stat.h>
#include<sys/types.h>

int main(){

  char dirname[100];

  printf("Enter the name of directory:  ");
  scanf("%s",dirname);

  mkdir(dirname,0777);

  return 0;

}
