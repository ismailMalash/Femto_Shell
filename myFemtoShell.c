#include <stdio.h>
#include <string.h>


int main(void) {

	char cmd[100] = {0};
	char *ptr = NULL;
	char *message = NULL;
	int close = 0;

	while(!close)
	{
	
		printf("ismail's_shell $ ");

		fgets(cmd, 100, stdin);

		cmd[strcspn(cmd, "\n")] = 0;

		if (strlen(cmd) == 0)	//for no command input
		{continue;}

		ptr = strtok(cmd, " ");

		if (!strcmp(ptr, "echo"))
		{
			message = 5 + cmd;		//skip printing echo text
			printf("%s\n",message); 
		}

		else if (!strcmp(ptr, "exit"))
		{
			close = 1;
			printf("Good Bye\n");
		}
		else
		{
			printf("Invalid command\n");
		}
	}

	return 0;
}
