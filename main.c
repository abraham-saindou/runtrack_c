#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"

int my_strcmp(char *s1, char *s2){
    int i, j = 0;
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
    int len = 0;

    while (src[len] != 0){
        ++len;
    }
    len += 1;
    char *p = malloc(sizeof(char) * (len));

    return my_strcpy(p, src);;
}

char **array_clone(char **strs, int n){

    int len = 0; int i = 0;

    while(strs[len] != 0){
        len++;
    }
    len++;

    //char **clones = strs;
    char **clones = malloc(sizeof(char*) * (n + 1));

    while (i < len){
        clones[i] = my_strdup(strs[i]);
        ++i;
    }
    clones[i] = 0;
    printf("%s", *clones);

    return clones;
}

int main() {

    char *sentence = "coucou";
    int size = 0, compt = 0;
    while(sentence[size] != 0){
        ++size;
    }
    ++size;

    char **table = malloc(sizeof(char*) * size);
    while(compt < size){
        *table[compt] = *sentence;
        compt++;
    }
    for (int i = 0; i < size; ++i) {
        printf("%s", table[i]);
    }

    array_clone(table, size);

    return 0;
}
