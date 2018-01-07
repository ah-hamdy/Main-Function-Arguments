# main-function-arguments
This repository for how to pass command-line arguments to main function to invoke the program in C language.

According to C standard, The implementation declares no prototype for this function. It shall be defined with a return type of int and with no parameters:
int main(void) { /* ... */ } or int main () {/* ... */}        "This is the commonly use definition for main function"
or 
with two parameters (referred to here as argc and argv, though any names may be used, as they are local to the function in which they are declared):
int main(int argc, char *argv[]) { /* ... */ } or int main (int argc, char **argv) {/* ... */}

argc (ARGument Count): store number of command-line arguments passed by user include name of program.
argv (ARGument Vector): array of pointer to character that listing all command-line arguments.

Properties of Command Line Arguments:

They are passed to main() function.
They are parameters/arguments supplied to the program when it is invoked.
They are used to control program from outside instead of hard coding those values inside the code.
argv[argc] is a NULL pointer.
argv[0] holds the name of the program.
argv[1] points to the first command line argument and argv[argc-1] points last argument.

Use code::blocks IDE to read command-line arguments that passed to main function and edit on these arguments and read again to check the changes.
