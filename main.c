#include <stdio.h>

#include "polish.h"

int main(int argc, char **argv) {
    char demo[] = "sinusoidale 4"; int i = 0;
    nextWord(demo, &i);
    printf("Got: %d", i);
    return 0;
}
