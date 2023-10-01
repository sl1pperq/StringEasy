#include <string>
using namespace std;

string itc_even_place(string str) {
    string result = "";
    for (int i = 1; i < str.length(); i += 2) {
        result += str[i];
    }
    if (result == "") {
        return "-1";
    }
    return result;
}