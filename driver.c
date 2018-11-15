#include "parse.h"

int main(){
	
	char *cmd_line = "ls -a -l";
	char ** args = parse_args(cmd_line);
	execvp(args[0],args);

	return 0;
}
