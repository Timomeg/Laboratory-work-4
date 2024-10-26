#include <vector>
#include <iostream>
using namespace std;
// Функция для среднего арифметического
float mean(const vector<float> &vect) {
    float sum{};
    for (int i = 0; i < vect.size(); i++) {
        sum += vect[i];
    }
    return sum / vect.size();
}