#include <iostream>
using namespace std;
template<class T1>
T1 getSum(T1 *p, int n) {
    T1 sum = 0;
    for (int i = 0; i <n; i++)
        sum += p[i];
    return sum;
}
int main() {
    int m1[] = {1,2,3,4};
    cout << getSum(m1,4);

}