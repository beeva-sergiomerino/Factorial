#include <stdio.h>
#include <stdlib.h>
#include "lib/factorial.c"

int main(int argc, char** argv) {
    printf("Type an integer and press Enter to calculate the integer's factorial: \n");
    int arg;
    fflush(stdout);
    scanf("%d", &arg);
    printf("factorial(%d) = %ld\n", arg, factorial(arg));

    return (EXIT_SUCCESS);
}
