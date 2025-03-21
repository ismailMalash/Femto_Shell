# Femto Shell (myFemtoShell)

This project is a simple implementation of a shell program in C, called **Femto Shell**, that supports basic built-in commands like `echo` and `exit`. When executed, it prompts the user to enter commands, processes them, and responds accordingly. This shell handles the following features:

- **echo**: Echoes any text entered by the user.
- **exit**: Terminates the shell with a farewell message.
- **Invalid Command**: Prints an error message for any unrecognized command.

## Table of Contents

1. [Installation](#installation)
2. [Usage](#usage)
3. [Example Output](#example-output)
4. [Compilation Instructions](#compilation-instructions)

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

## Compilation Instructions

1. **To compile the program**, use the following GCC command:

   ```bash
   gcc -o myFemtoShell myFemtoShell.c
   ```

2. **To run the program**, execute the compiled binary:

   ```bash
   ./myFemtoShell


