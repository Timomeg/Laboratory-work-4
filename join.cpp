#include <string>
#include <vector>
using namespace std;
string join(const vector<string>& vec, const string& sep) {
    string str= "";
    for (int i{}; i < vec.size(); i++) {
        str += vec[i] + sep;
    }
    return str;
}