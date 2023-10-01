#include <string>
#include "str_easy.h"
using namespace std;

string itc_three_str(string str1, string str2, string str3) {
    int len1 = str1.length();
    int len2 = str2.length();
    int len3 = str3.length();
    string result = "";
    int pos = 0;
    while (pos <= len1 - len2) {
        int idx = itc_find_str(str1.substr(pos), str2);
        if (idx == -1) {
            result += str1.substr(pos);
            break;
        }
        result += str1.substr(pos, idx) + str3;
        pos += idx + len2;
    }
    return result;
}