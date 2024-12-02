#include<stdio.h>
#include<unistd.h>
#include<errno.h>
#include<string.h>

int main(){

  const char *filename = "sample.txt";
  if(unlink(filename) == 0){
     printf("Successfully %s deleted.", filename); 
  }else{
     printf("Failed deleting %s file", filename);
     return 1;
  }

  return 0;

}
