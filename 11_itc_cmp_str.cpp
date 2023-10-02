#include <string>
#include "str_easy.h"
using namespace std;

string itc_cmp_str(string str1, string str2, int num) {
    if (num >= str1.length()) {
        return str1;
    }
    string result = str1.substr(0, num);
    if (num + str2.length() <= str1.length()) {
        result += str2 + str1.substr(num + str2.length());
    } else {
        result += str1.substr(num);
    }
    return result;
}
