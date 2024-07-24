#pragma once

#ifndef POLISH_H
#define POLISH_H

#define STACK_SIZE 100

// Amount of variables the user can define
#define REGISTERS 10

enum CharType { Number, Letter, Comma, Void, Unknown, EOS };

// Error Codes
#define ERR_PARSING_UNKNOWN_CHAR 1
#define ERR_PARSING_TOO_MANY_COMMAS 2

#define ERR_STACK_INVALID_POINTER 51

float static _stack[STACK_SIZE];
int static _point;
int static _flag;

// Stack Management
float stPop();
float stSpy();
void stPush(float f);
void stReplicate();
void stInit();

// Program Parsing
enum CharType getCharType(char c);
float nextNumber(char substr[], int *read);
char* nextWord(char substr[], int *read);

#endif
