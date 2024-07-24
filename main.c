#include <stdio.h>

#include "polish.h"

int main(int argc, char **argv) {
    int i = eqWord("ciao", "cioa");
    printf("%d", i);
}
