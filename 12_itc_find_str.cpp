#include <string>
using namespace std;

int itc_find_str(string str1, string str2) {
    int len1 = str1.length();
    int len2 = str2.length();
    if (len2 > len1) {
        return -1;
    }
    for (int i = 0; i <= len1 - len2; i++) {
        if (str1.substr(i, len2) == str2) {
            return i;
        }
    }
    return -1;
}
