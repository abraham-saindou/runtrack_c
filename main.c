#include "stdio.h"
#include "unistd.h"


#include "./jour01/job03/char_digit.c"



int main() {
    char *bet = "po";

    char_is_digit(*bet);
    return 0;
}
