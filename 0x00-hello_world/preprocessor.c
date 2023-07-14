#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    const char *cfile = "main.c";  // Set the input C file name
    const char *outputFile = "c";  // Set the output file name

    // Construct the command to run the preprocessor
    char command[256];
    sprintf(command, "gcc -E -P -o %s %s", outputFile, cfile);

    // Run the preprocessor command
    int status = system(command);

    if (status != 0)
    {
        printf("Failed to run preprocessor.\n");
        return 1;
    }

    printf("Preprocessor output saved in file 'c'.\n");

    return 0;
}

