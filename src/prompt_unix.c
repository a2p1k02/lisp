#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include <editline/readline.h>

int main()
{
    puts("Lispy Version 0.0.0.0.1");
    puts("Press Ctrl+C to Exit\n");

    while(true) {

        char* input = readline("lispy> ");

        add_history(input);

        printf("No you're a %s\n", input);

        free(input);

    }
    return 0;
}
