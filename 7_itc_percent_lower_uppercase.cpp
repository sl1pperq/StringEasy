#include <string>
using namespace std;

double itc_percent_lower_uppercase(string str) {
    int uppercase = 0;
    int lowercase = 0;
    for (int i = 0; i < str.length(); i++) {
        if (isupper(str[i])) {
            uppercase++;
        } else if (islower(str[i])) {
            lowercase++;
        }
    }
    if (uppercase == 0 && lowercase == 0) {
        return 0;
    }
    return (double) lowercase / (double) uppercase;
}