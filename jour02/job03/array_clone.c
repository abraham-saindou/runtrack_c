//
// Created by kubun on 28/11/23.
//

#include "stdlib.h"
#include "stdio.h"

char **array_clone(char **strs, int n){

    int len = 0; int i = 0;
    char **clones;

    while(strs[len] != 0){
         len++;
     }
    while (i < len){
        clones[i] = strs[i];
        ++i;
    }
    printf("%s", *clones);

    return clones;
}

char *my_strcpy(char *dest, const char *src){
    int len = 0, i = 0;

    while (src[len] != 0){
        ++len;
    }

    while (i < len){
        dest[i] = src[i];
        ++i;
    }
    printf("%s",dest);

    return dest;
}

char *my_strdup(char *src){
    int len = 0, i = 0;

    while (src[len] != 0){
        ++len;
    }
    len += 1;
    char *p = malloc(sizeof(char) * (len));

    return my_strcpy(p, src);;
}
