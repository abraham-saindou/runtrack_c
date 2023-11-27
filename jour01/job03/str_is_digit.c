//
// Created by kubun on 27/11/23.
//

int str_is_digit(char *str){
    int i = 0;
    int compt = 0;

    while (str[i] != 0){
        if (str[i] >= 48 && str[i] <= 57 ){         // 48 = 0 & 57 = 9 en ASCII
            ++compt;
        }
        ++i;
    }
    if (compt == i){
        return 1;
    }
    return 0;
}