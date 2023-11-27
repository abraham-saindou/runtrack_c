//
// Created by kubun on 27/11/23.
//

#include "stdio.h"
#include "stdbool.h"
#include "unistd.h"

int char_is_digit(char c){
    bool check = true;
    if (c == check){
        char msg[] = "Le caractère %s est un char";

        printf(msg,c);
        return 1;
    }
    return 0;
}
