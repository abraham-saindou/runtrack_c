//
// Created by kubun on 27/11/23.
//

#include "stdio.h"

char *my_strcpy(char *dest, const char *src){
    int len = 0, i = 0;

    while (src[len] != 0){
        ++len;
    }

    while (i < len){
        dest[i] = src[i];
        ++i;
    }
    dest[i] = 0;


    return dest;
}