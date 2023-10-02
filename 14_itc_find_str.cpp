#include <string>
#include "str_easy.h"
#include "str_easy.h"
using namespace std;

int itc_max_char_on_end(string str) {
    int max_count = 0;
    int count = 0;
    for (int i = itc_len(str) - 1; i >= 0; i--) {
        if (isdigit(str[i])) {
            count++;
            if (count > max_count) {
                max_count = count;
            }
        } else {
            count = 0;
        }
    }
    return max_count;
}
