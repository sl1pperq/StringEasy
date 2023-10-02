#include <string>
#include "str_easy.h"
using namespace std;

int itc_find_str(string str1, string str2) {
    int len1 = itc_len(str1);
    int len2 = itc_len(str2);
    if (len2 > len1) {
        return -1;
    }
    for (int i = 0; i <= len1 - len2; i++) {
        bool found = true;
        for (int j = 0; j < len2; j++) {
            if (str1[i + j] != str2[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            return i;
        }
    }
    return -1;
}
