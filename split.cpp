#include <string>
#include <vector>
using namespace std;
vector<string> split(const string& sent, const char sep) {
    vector <string> new_sent{};
    int i{};
    string word{};
    // проходим по строке
    while (i != sent.length()) {
        if (sent[i] == sep) {
            new_sent.push_back(word);
            word = "";
        }
        else {
            word+= sent[i];
        }
        i++;
    }
    return new_sent;
}
