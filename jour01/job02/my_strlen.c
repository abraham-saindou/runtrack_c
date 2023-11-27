//
// Created by kubun on 27/11/23.
//

#include "stdio.h"
#include "unistd.h"
#include "string.h"

int my_strlen(const char *str){

    size_t len = sizeof(str);

    return printf("%zu\n",len);;
}
