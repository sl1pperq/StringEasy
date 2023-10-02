#include <string>
#include "str_easy.h"
using namespace std;

string itc_reverse_str(string str) {
    string reversed = "";
    for (int i = itc_len(str) - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
}