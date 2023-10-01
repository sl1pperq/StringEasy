#include <string>
#include "str_easy.h"
using namespace std;

string itc_cmp_str(string str1, string str2, int num) {
    if (num >= itc_len(str2)) {
        return str1;
    }
    string first_part = itc_slice_str(str1, 0, num);
    string second_part = itc_slice_str(str2, num, itc_len(str2));
    string third_part = itc_slice_str(str1, num + itc_len(second_part), itc_len(str1));
    return first_part + second_part + third_part;
}