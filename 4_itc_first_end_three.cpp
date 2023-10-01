#include <string>
#include <iostream>
using namespace std;

void itc_first_end_three(string str) {
    int len = str.length();
    if (len > 5) {
        cout << str.substr(0, 3) << str.substr(len - 3, 3) << endl;
    } else {
        for (int i = 0; i < len; i++) {
            cout << str[0];
        }
        cout << endl;
    }
}
