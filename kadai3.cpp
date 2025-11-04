#include "kadai3.h"
#include <stdio.h>

void convert(int year) {
    if (year >= 2018) {
        printf("令和%c\n年", year-2018);
    }else if (year >= 1989) {
        printf("平成%c\n年", year-1989);
    }else if (year >= 1922) {
        printf("昭和%c\n年", year-1922);
    }else {
        printf("昭和以前");
    }
}

void convert(const char era[], int year) {
    if (era[0] == 'R') {
        printf("d%\n", year + 2018);
    }else if (era[0] == 'H') {
        printf("d%\n", year + 1989);
    }else if (era[0] == 'S') {
        printf("d%\n", year + 1922);
    }
}