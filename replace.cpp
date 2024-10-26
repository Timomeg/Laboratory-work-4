#include <string>
using namespace std;

string replace( string& str, const string& old, const string& new_string) {
    int i{};
    int str_pos{static_cast<int>(str.find(old))};
    while (i != str.length()){
        if (str_pos < str.length()){
            str.replace(str_pos, old.size(), new_string);
            str_pos = str.find(old);
        }
        i++;
    }
    return str;
}
