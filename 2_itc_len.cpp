#include <string>
#include "str_easy.h"
using namespace std;

long long itc_len(string str) {
    long long len = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        len++;
    }
    return len;
}
