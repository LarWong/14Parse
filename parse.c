#include "parse.h"

char **parse_args(char *line){
	char ** args = malloc(6*sizeof(char*));
	for(int i = 0; line; i++){
		args[i] = strsep(&line," ");
	}
	return args;
}
