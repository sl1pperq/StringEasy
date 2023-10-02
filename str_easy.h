#ifndef STREASY_str_easy.h_H
#define STREASY_str_easy.h_H

#include <string>
#include "str_easy.h"
using namespace std;

string itc_hello_str(string name); // 1
long long itc_len(string str); // 2
void itc_print_copy_str(string str, int number); // 3
void itc_first_end_three(string str); // 4
int itc_count_char_in_str(char ch, string str); // 5
string itc_even_place(string str); // 6
double itc_percent_lower_uppercase(string str); // 7
string itc_reverse_str(string str); // 8
string itc_slice_str(string str, int start, int end); // 9
bool itc_equal_reverse(string str); // 10
string itc_cmp_str(string str1, string str2, int num); // 11
int itc_find_str(string str1, string str2); // 12
string itc_three_str(string str1, string str2, string str3); // 13
int itc_max_char_on_end(string str); // 14
string sub(string str, int start, int length); // sub

#endif //STREASY_str_easy.h_H
