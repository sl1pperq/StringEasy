#include <string>
using namespace std;

string itc_slice_str(string str, int start, int end) {
    if (start >= end || start >= str.length()) {
        return str;
    }
    if (end >= str.length()) {
        end = str.length() - 1;
    }
    return str.substr(start, end - start + 1);
}