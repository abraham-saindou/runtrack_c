//
// Created by kubun on 27/11/23.
//

#include "stdlib.h"

char *my_strdup(char * src){
    char *p = malloc(sizeof(char) * (20));
    p = src;
    return p;
}