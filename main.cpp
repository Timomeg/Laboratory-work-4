#include <iostream>
#include <vector>
#include <limits>
using namespace std;
float mean(const vector<float> &vect) {
    int sum{};
    for (int i = 0; i < vect.size(); i++) {
        sum += vect[i];
    }
    return sum / vect.size();
}

pair <float, float> minMax(const vector<float> &vect) {
    float max_vect{};
    float min_vect{};
    if (size(vect) == 0){
        pair <float, float> p = pair(numeric_limits<float>::min(), numeric_limits<float>::max());
        return p;
    }
    for (int i = 0; i < vect.size(); i++) {
        if (vect[i] > max_vect) {
            max_vect = vect[i];
        }
        if (vect[i] < min_vect) {
            min_vect = vect[i];
        }
    }
    pair <float, float> p = pair(min_vect, max_vect);
    return p;
}

void sort(vector<float> &vect) {

}

int main() {
    const vector<float> vect1;
    //cout << mean(vect1) << endl;
    cout << minMax(vect1).first<<" " << minMax(vect1).second<< endl;
    return 0;
}