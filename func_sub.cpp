#include <string>
#include "str_easy.h"
using namespace std;

string sub(string str, int start, int length) {
    string result = "";
    for (int i = start; i < start + length && i < itc_len(str); i++) {
        result += str[i];
    }
    return result;
}
