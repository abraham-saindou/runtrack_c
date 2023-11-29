//
// Created by kubun on 29/11/23.
//
#include "stdio.h"

int my_strcmp(char *s1, char *s2){
    int i = 0;
    int res1 = 0, res2 =0;

    while(s1[i] != 0){
        res1 += s1[1];
        res2 += s2[1];
        if (s1[i] == s2[i]){
            printf("%d,  %d",res1, res2);
            return 0;
        }
        ++i;
    }
    printf("%d,  %d",res1, res2);

    return 1;
}