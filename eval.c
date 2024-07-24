#include <math.h>
#include "polish.h"

enum CharType getCharType(char c) {
    switch(c) {
        case '0' ... '9':
            return Number;
        case '+':
        case '-':
        case '/':
        case '*':
        case '%':
        case 'A' ... 'Z':
        case 'a' ... 'z':
            return Letter;
        case ';':
        case '\0':
            return EOS;
        case '.':
        case ',':
            return Comma;
        case ' ':
        case '\t':
        case '\n':
            return Void;
        default:
            _flag = ERR_PARSING_UNKNOWN_CHAR;
            return Unknown;
    }
}

float nextNumber(char substr[], int *read) {
        int numc = 0; // Counts the # of cyfers
        float result = 0.0; // Successfully parsed number
        int commaCount = 0; // Counts the number of commas
        int exp = 0; // Order of Magnitude

        for (enum CharType t;
             (t = getCharType(substr[numc])) == Number || t == Comma; numc++) {
            if (t == Comma) {
                exp = numc - 1;
                commaCount++;
            }
        }

        if (commaCount > 1) {
            _flag = ERR_PARSING_TOO_MANY_COMMAS;
            return 0.0;
        }

        *read=numc;

        for (unsigned i = 0; i < numc; i++) {
            if (getCharType(substr[i]) == Comma) { continue; }
            result += powf(10.0, exp--) * (float)(substr[i] - '0');
        }

        return result;
}

void nextWord(char substr[], int *read) {
    for (*read = 0; (getCharType(substr[*read])) == Letter; (*read)++);
}
