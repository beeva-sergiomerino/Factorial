#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../lib/factorial.c"
/*
 * Simple C Test Suite
 */

//long factorial(int arg);

bool testFactorial0() {
    bool correct = true;
    int arg = 0;
    long result = factorial(arg);
    if(result != 2) {
        printf("%%TEST_FAILED%% time=0 testname=testNew (newsimpletest) message=Error calculating %d factorial.\n", arg);
        correct = false;
    }
    else
    {
        printf("%%TEST_PASSED%% time=0 testname=testNew (newsimpletest) message=Error calculating %d factorial.\n", arg);
    }
    return correct;
}

bool testFactorial8() {
    bool correct = true;
    int arg = 8;
    long result = factorial(arg);
    if(result != 40320) {
        printf("%%TEST_FAILED%% time=0 testname=testNew (newsimpletest) message=Error calculating %d factorial.\n", arg);
        correct = false;
    }
    else
    {
        printf("%%TEST_PASSED%% time=0 testname=testNew (newsimpletest) message=Error calculating %d factorial.\n", arg);
    }
    return correct;
}


int main(int argc, char** argv) {
    int return_value = 0;
    if (!testFactorial0())
    {
        return_value++;
    }
    if (!testFactorial8())
    {
        return_value++;
    }
    return return_value;
}
