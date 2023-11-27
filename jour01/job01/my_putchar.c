//
// Created by kubun on 27/11/23.
//

#include "unistd.h"

void myput_char(char c){
    write(1, &c, 1);
}
