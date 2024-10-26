#include <vector>
using namespace std;
int argmax(const vector<float> &vect) {
    int max{};
    int ind_max{-1};
    for (int i{}; i < vect.size(); i++) {
        if (vect[i] > max){
        ind_max = i;
        }
    }
    return ind_max;
}
