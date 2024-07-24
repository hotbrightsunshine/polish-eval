#include "./polish.h"

float stPop() {
    if (_point - 1 < 0) {
        _flag = 1;
        return 0;
    }
    return _stack[--_point];
}

float stSpy() {
    return _stack[_point];
}

void stPush(float f) {
    if (_point + 1 >= STACK_SIZE) {
        _flag = 2;
        return;
    }
    _stack[_point++] = f;
}

void stReplicate() {
    if (_point + 1 >= STACK_SIZE) {
        _flag = 3;
        return;
    }
    float * val = &(_stack[_point]);
    _stack[++_point] = *val;
}

void stInit() {
    _flag = 0;
    for (unsigned i = 0; i < STACK_SIZE; i++) {
        _stack[i] = 0;
    }
}