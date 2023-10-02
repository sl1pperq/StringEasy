#include <string>
#include "str_easy.h"
#include <iostream>
using namespace std;

void itc_first_end_three(string str) {
    int len = itc_len(str);
    if (len > 5) {
        for (int i = 0; i < 3; i++) {
            cout << str[i];
        }
        for (int i = len - 3; i < len; i++) {
            cout << str[i];
        }
    } else {
        for (int i = 0; i < len; i++) {
            cout << str[0];
        }
    }
}
