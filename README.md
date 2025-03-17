# Femto_Shell
very simple shell that only executes two commands (echo, exit)

Usage
Compile the program using GCC (or another C compiler):

bash
Copy
gcc -o myFemtoShell myFemtoShell.c
Run the shell:

bash
Copy
./myFemtoShell
The shell will display a prompt (ismail's_shell $) and wait for you to enter commands.

Example Output
Sample Shell Session:
rust
Copy
ismail's_shell $ echo Hello my shell
Hello my shell
ismail's_shell $ echo what can you do?
what can you do?
ismail's_shell $ echo You are super
You are super
ismail's_shell $ ls
Invalid command
ismail's_shell $ exit
Good Bye :)
Features:
echo prints any string the user inputs.
exit terminates the shell with the message "Good Bye :)".
Any command other than echo or exit will result in an "Invalid command" message.
Code Explanation
fgets(cmd, 100, stdin): Reads a line of input from the user into the cmd buffer.
strtok(cmd, " "): Tokenizes the input string by splitting it at spaces. The first token is checked to identify the command.
strcmp(ptr, "echo"): Compares the command with echo. If true, the program extracts and prints the rest of the input.
strcmp(ptr, "exit"): Compares the command with exit. If true, the shell terminates with a message.
Invalid Command Handling: If the command doesn't match echo or exit, the shell prints an "Invalid command" message.
Compilation Instructions
To compile the program, use the following GCC command:

bash
Copy
gcc -o myFemtoShell myFemtoShell.c
To run the program, execute the compiled binary:

bash
Copy
./myFemtoShell
