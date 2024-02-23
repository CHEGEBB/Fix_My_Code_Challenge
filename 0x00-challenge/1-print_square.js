#!/usr/bin/node
/*
    Print a square with the character #
    
    The size of the square must be the first argument 
    of the program.
*/

// Check if there is a missing argument
if (process.argv.length <= 2) {
    process.stderr.write("Missing argument\n");
    process.stderr.write("Usage: ./1-print_square.js <size>\n");
    process.stderr.write("Example: ./1-print_square.js 8\n");
    process.exit(1); // Exit with an error code
}

// Convert the size argument to an integer
const size = parseInt(process.argv[2]); // Removed ", 16" as it's incorrect for size

// Loop to print the square
for (let i = 0; i < size; i++) {
    for (let j = 0; j < size; j++) {
        process.stdout.write("#"); // Print '#' for each column in a row
    }
    process.stdout.write("\n"); // Move to the next line after printing a row
}
