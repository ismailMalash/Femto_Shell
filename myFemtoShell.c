#include <stdio.h>
#include <string.h>


int main(void) {

	char cmd[100] = {0};
	char *ptr = NULL;
	char *message = NULL;
	int close = 0;

	while(!close)
	{
	
		printf("ismail's_shell $");


		fgets(cmd, 100, stdin);

		char *ptr = strtok(cmd, " ");

		if (!strcmp(ptr, "echo"))
		{
			message = 5 + cmd;		//skipping printing echo text
			printf("%s",message); //we didn't put \n here because message string contains \n before '\0' as fgets stores it
		}

		else if (!strcmp(ptr, "echo\n"))
		{
			printf("\n");
		}

		else if (!strcmp(ptr, "exit\n"))
		{
			close = 1;
			printf("Good Bye :)\n");
		}

		else
		{
			printf("Invalid command\n");
		}
	}

	return 0;
}
