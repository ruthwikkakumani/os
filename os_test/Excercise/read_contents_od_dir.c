#include<stdio.h>
#include<dirent.h>
#include<sys/stat.h>
#include<sys/types.h>

int main(){

  DIR *dir;
  struct dirent *entry;
  dir = opendir(".");

  if(dir == NULL){
    printf("Unable to open directory\n");
    return -1;
  }

  while((entry = readdir(dir)) != NULL){
    printf("%s\n",entry->d_name);
  }

  return 0;

}
