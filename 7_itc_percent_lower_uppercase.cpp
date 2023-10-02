#include <string>
#include "str_easy.h"
using namespace std;

double itc_percent_lower_uppercase(string str) {
    double lower = 0, upper = 0;
    for (int i = 0; i < itc_len(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            lower += 1;
        } else {
            upper += 1;
        }
    }
    return lower / upper;
}