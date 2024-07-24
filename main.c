#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "./polish.h"

/*
 * The following program evaluates a IPN string and prints the first item on the stack.
 * Two-variables operators: + - * / % log
 * One-variable operators: sin cos tan exp
 * Direct access to «math.c» variables: pi e
 *
 * Variables can be created using the <varname> eq; instruction.
 * Variables automatically get assigned the result of the last expression evaluated.
 * One can write:
 *      1;
 *      one eq;
 *      one sin;
 *      alt;
*/

int main(int argc, char **argv) {
    return 0;
}
