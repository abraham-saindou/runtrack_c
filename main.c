#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"

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

char *my_strdup(char * src){
    char *p = malloc(sizeof(char) * (20));
    p = src;
    return p;
}

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

int main() {

    char sentence[] = " abcd ";



    printf("\n%s" , trim(sentence));
    return 0;
}
