#include <chrono>
#include <iostream>
using namespace std;
struct node {
    int data{3};
    node *next{nullptr};
    /*
    node(int data) {
        this->data = data;
    }
    */
};
void link_list(node *start, int len) {
    if (start == nullptr) {
        start = new node(0,nullptr);

    }
    node* current = start;
    for (int i = 0; i < len - 1; i++) {
        node* current = new node(i,current);
        current = current->next;
        cout << current << i << endl;
        }
}
int main(){
    //node* head = new node(10);
    //head->next = new node(20);
    //head->next->next = new node(30);
    node* first = nullptr;
    link_list(first,10);
    return 0;
}