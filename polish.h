#pragma once

#ifndef POLISH_H
#define POLISH_H

#define STACK_SIZE 100

// Amount of variables the user can define
#define REGISTERS 10

enum CharType { Number, Letter, Comma, Void, Unknown, EOS };

// ERROR CODES (TODO)
#define ERR_PARSING_UNKNOWN_CHAR 1
#define ERR_PARSING_TOO_MANY_COMMAS 2
#define ERR_STACK_INVALID_POINTER 51

typedef struct {
    char* sym;
    int code;
} Operation;

typedef struct {
    char* sym;
    float value;
} Variable;

/* 0-49 single char operations
 * 50-99 two char operations
 * 100... three char operations
*/
Operation static _operations[] = {
    {"+", 0},
    {"-", 1},
    {"/", 2},
    {"*", 3},
    {"%", 4},
    {"sin", 100},
    {"cos", 101},
    {"tan", 102},
    {"exp", 103},
    {"log", 104}
};

float static _stack[STACK_SIZE];
int static _point;
int static _flag;

// STACK MANAGEMENT
float stPop();
float stSpy();
void stPush(float f);
void stReplicate();
void stInit();

// PROGRAM PARSING

enum CharType getCharType(char c);

// Reads numbers and commas until a different type of character
// is encountered. Immediately after, it parses the float number read
// and returns it.
float nextNumber(char substr[], int *read);

// Sets read value to the length of the very first sequence of Letters
// of the substring.
void nextWord(char substr[], int *read);

int isWordLengthDifferent(char* a, char* b);

// Returns 0 if string a = string b for #len characters.
int eqWord(char* a, char* b, int len);
int getOpCode(char str[], unsigned len);

#endif
