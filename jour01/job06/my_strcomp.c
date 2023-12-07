//
// Created by kubun on 29/11/23.
//

#include "stdio.h"

int my_strcmp(char *s1, char *s2){
    int len1 = 0;
    int len2 = 0;

    while(s1[len1] != 0){
        len1++;
    }
    while (s2[len2] != 0){
        len2++;
    }
    char *result = (len1 == len2) ? "have" : "haven't";
    printf("Strings %s the same length\n", result);

    int i = 0;
    int res1 = 0, res2 =0;

    while(s1[i] != 0){
        res1 += s1[i];
        res2 += s2[i];

        ++i;
    }

    if (res1 < res2){
        return -1;
    }

    if (res1 > res2){
        return 1;
    }

    return 0;
}
