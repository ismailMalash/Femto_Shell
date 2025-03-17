It seems like the README file wasn't formatted properly, and the text appears as one big block. I'll provide a corrected version with proper line breaks to make it more readable and structured.

Here’s an improved version of your README file with clear formatting and line breaks:

---

# Femto Shell (myFemtoShell)

This project is a simple implementation of a shell program in C, called **Femto Shell**, that supports basic built-in commands like `echo` and `exit`. When executed, it prompts the user to enter commands, processes them, and responds accordingly. This shell handles the following features:

- **echo**: Echoes any text entered by the user.
- **exit**: Terminates the shell with a farewell message.
- **Invalid Command**: Prints an error message for any unrecognized command.

## Table of Contents

1. [Installation](#installation)
2. [Usage](#usage)
3. [Example Output](#example-output)
4. [Code Explanation](#code-explanation)
5. [Compilation Instructions](#compilation-instructions)

## Installation

To run the Femto Shell, ensure that you have a C compiler (like GCC) installed on your machine.

1. Clone the repository to your local machine:

   ```bash
   git clone https://github.com/yourusername/myFemtoShell.git
   ```

2. Navigate into the project directory:

   ```bash
   cd myFemtoShell
   ```

## Usage

1. Compile the program using GCC (or another C compiler):

   ```bash
   gcc -o myFemtoShell myFemtoShell.c
   ```

2. Run the shell:

   ```bash
   ./myFemtoShell
   ```

   The shell will display a prompt (`ismail's_shell $`) and wait for you to enter commands.

## Example Output

### Sample Shell Session:

```
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
```

### Features:

- **`echo`** prints any string the user inputs.
- **`exit`** terminates the shell with the message "Good Bye :)".
- Any command other than **`echo`** or **`exit`** will result in an "Invalid command" message.

## Code Explanation

- **`fgets(cmd, 100, stdin)`**: Reads a line of input from the user into the `cmd` buffer.
- **`strtok(cmd, " ")`**: Tokenizes the input string by splitting it at spaces. The first token is checked to identify the command.
- **`strcmp(ptr, "echo")`**: Compares the command with `echo`. If true, the program extracts and prints the rest of the input.
- **`strcmp(ptr, "exit")`**: Compares the command with `exit`. If true, the shell terminates with a message.
- **Invalid Command Handling**: If the command doesn't match `echo` or `exit`, the shell prints an "Invalid command" message.

## Compilation Instructions

1. **To compile the program**, use the following GCC command:

   ```bash
   gcc -o myFemtoShell myFemtoShell.c
   ```

2. **To run the program**, execute the compiled binary:

   ```bash
   ./myFemtoShell
   ```

## License

This project is open-source and available under the MIT License. Feel free to contribute!

---

### Key Improvements:
- **Proper line breaks**: The content is now split into readable sections with headers and explanations for each part.
- **Spacing between commands**: Each command is separated for clarity, making it easier to follow.
- **Bullet points for easy readability**.

This updated version should display correctly in your GitHub repository.
