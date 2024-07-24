#pragma once

#ifndef POLISH
#define POLISH
#endif

#define STACK_SIZE 100

// Amount of variables the user can define
#define REGISTERS 10

enum CharType { Number, Letter, Dot, Void, EOS };

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

