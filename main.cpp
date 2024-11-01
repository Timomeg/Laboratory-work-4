#include <iostream>
#include <vector>
using namespace std;
// Задание 1
float mean(const vector<float> &vect);

// Задание 2
pair <float, float> minMax(const vector<float> &vect);

// Задание 3
int argmax(const vector<float> &vect);

// Задание 4
void sort(vector<float>&);
// алгоритм сортировки выбором

// Задание 5
bool remove_first_negative_element(const vector<int> &vec, int &removed_element);

// Задание 6
string replace( string& str, const string& old, const string& new_string);

// Задание 7
vector<string> split(const string&, char sep);

// Задание 8
string join(const vector<string>&, const string& sep);

int main() {
    //vector<int> vect1{-2, 9, 3, 2, -1, 9, 5, 6};
    //vector<string> vect2{"Roses", "are", "red", "violets", "are", "blue"};
    //string str = "Roses are red, violets are blue";
    //cout << mean(vect1) << endl;

    //cout << minMax(vect1).first<<" " << minMax(vect1).second<< endl;

    //cout << argmax(vect1) << endl;

    //sort(vect1);
    //for (int i{}; i < vect1.size(); i++) {
    //cout << vect1[i] << ".\n";
    //}

    //int removed_element{};
    //cout << remove_first_negative_element(vect1, removed_element);

    //string old = "red";
    //string new_string = "is";
    //cout << replace(str, old, new_string);

    //cout << join(vect2, " ");

    //vector <string> sent = split(str, ' ');
    //for (int i{}; i < sent.size(); i++) {
    //    cout << sent[i] << ".\n";
    //    }
    return 0;
}
