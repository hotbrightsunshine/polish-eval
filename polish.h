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

#endif
