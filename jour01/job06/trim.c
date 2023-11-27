//
// Created by kubun on 28/11/23.
//

#include "stdlib.h"

char *trim(char *src){
    char *trimmed = malloc(sizeof(char) * 70);
    int len = 0;
    int start = 0;

    while (src[len] != 0){ // Mesure la taille du tableau
        ++len;
    }
    int end = len - 1;


    while(src[start] == 32){ // 32 = " ";
        ++start;
    }
    while(src[end] == 32){
        --end;
    }
    for (int i = 0; start <= end; ++i, ++start) {
        trimmed[i] = src[start];
    }

    return trimmed;
}
}