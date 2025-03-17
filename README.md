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
