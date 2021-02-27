#include <stdio.h>
#include <stdbool.h>

static char input[2048];

int main()
{
    puts("Lispy Version 0.0.0.0.1");
    puts("Press Ctrl+C to Exit\n");

    while (true) {

        fputs("lispy> ", stdout);

        fgets(input, 2048, input);

        printf("No you're a %s", input);
    }
}