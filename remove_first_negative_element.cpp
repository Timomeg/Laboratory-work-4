#include <vector>
#include <iostream>
using namespace std;

bool remove_first_negative_element(const vector<int> &vec, int &removed_element) {

     for (int i{}; i < vec.size(); i++) {
        if (vec[i] < 0) {
            removed_element = vec[i];
            return true;

        }
    }
    removed_element = 0;
    return false;
}