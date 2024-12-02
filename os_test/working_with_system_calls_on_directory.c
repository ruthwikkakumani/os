#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<dirent.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>

#define NEW_DIR "Test"

int main(){

  char cwd[1024];
  char *original_dir;
 
  if(getcwd(cwd, sizeof(cwd)) == NULL){
    printf("Error getting current working directory");
    return -1;
  }

  printf("Original working DIrectory : %s\n", cwd);

  if(mkdir(NEW_DIR, 0755) != 0){
    printf("Error creating new directory: ");
    return -1;
  }

  if(chdir(NEW_DIR) != 0){
    printf("Error changing to new directory");
    return -1;
  }

  if(getcwd(cwd, sizeof(cwd)) == NULL){
    printf("Error getting new working directory");
    return -1;
  }

  printf("New Working Directory: %s", cwd);

  if(chdir(".") != 0){
    printf("Error changing back to original directory.");
    return -1;
  }

  if(rmdir(NEW_DIR) != 0){
    printf("Error removing new directory.");
    return -1;
  }
  
  printf("Removed directory: %s and changed back to original directory.\n",NEW_DIR);
  return 0;

}
