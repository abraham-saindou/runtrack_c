//
// Created by kubun on 27/11/23.
//

#include "stdlib.h"

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

char *my_strdup(char *src){
    int len = 0;

    while (src[len] != 0){
        ++len;
    }
    len += 1;
    char *p = malloc(sizeof(char) * (len));

    return my_strcpy(p, src);;
}
