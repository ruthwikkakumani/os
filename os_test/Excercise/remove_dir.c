#include<stdio.h>
#include<string.h>
#include<dirent.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>


int main(){

 char name[100];
 printf("Enter directory name : ");
 scanf("%s",name);

 if(rmdir(name) == 0){
   printf("Directory named %s ha been deleted. \n",name);
   return 0;
 }else{
   printf("Error deleting the directory.");
 }

 return 0;
}
