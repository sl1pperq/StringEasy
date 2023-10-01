#include <string>
#include "str_easy.h"
using namespace std;

bool itc_equal_reverse(string str) {
    int len = itc_len(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
}