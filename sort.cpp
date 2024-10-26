#include <iostream>
#include <vector>
using namespace std;
void sort(vector<float>&vect) {
    int size_vect{0};

    while (size_vect != vect.size()) {
        int min_vect = size_vect;
        for (int i{size_vect}; i < vect.size(); i++) {
            if (vect[i] > vect[min_vect]) {
                min_vect = i;
            }
        }

        swap(vect[min_vect], vect[size_vect]);
        size_vect ++;
    }
}
