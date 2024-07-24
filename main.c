#include <stdio.h>

#include "polish.h"

int main(int argc, char **argv) {
    char demo[] = "0.01"; int i = 0;
    float a = nextNumber(demo, &i);
    printf("Got: %f", a);
    return 0;
}
