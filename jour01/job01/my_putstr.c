//
// Created by kubun on 27/11/23.
//

#include "unistd.h"
#include "my_putchar.c"

void my_putstr(char *str){
    int it = 0;
    while(str [it] != 0){
        myput_char(str[it]);
        ++it;
    }
};