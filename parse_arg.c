#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

char ** parse_args(char *line){
  char ** arr = calloc(5,sizeof(char*));
  printf("Args:\n");
  for(int i = 0; arr[i] = strsep(&line," ");i++){
  	printf("\t%s\n",arr[i]);
  }
  return arr;
}

int main() {
  char line[] = "ls -a -l";
  printf("Input line: %s\n",line);
  char ** args = parse_args(line);
  printf("Output:\n");
  execvp(args[0], args);
}
