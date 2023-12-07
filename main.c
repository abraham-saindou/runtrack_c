#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"

/*
int my_atoi(char *str){
    int i = 0;

    int *list;
    while(str[i] != 0){

    }
    return 0;
}*/


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


int main() {
    char *str = "Hello World!";
    char *str2 = "Hello World!";

    printf("%d", my_strcmp(str, str2));

    return 0;
}
