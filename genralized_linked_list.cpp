#include <iostream>
using namespace std;

struct Node {
    bool isAtom;
    char data;
    Node* down;
    Node* next;
    Node(char value) {
        isAtom = true;
        data = value;
        down = nullptr;
        next = nullptr;
    }
    Node(Node* sublist) {
        isAtom = false;
        data = '\0';
        down = sublist;
        next = nullptr;
    }
};
void display(Node* head) {
    cout << "(";

    while (head != nullptr) {
        if (head->isAtom) {
            cout << head->data;
        }
        else {
            display(head->down);
        }

        if (head->next != nullptr)
            cout << ",";

        head = head->next;
    }

    cout << ")";
}

int main() {

    Node* A = new Node('A');
    Node* B = new Node('B');
    Node* C = new Node('C');
    Node* D = new Node('D');

    // Sublist (B,C)
    B->next = C;
    Node* sublist = new Node(B);

    // Main list (A,(B,C),D)
    A->next = sublist;
    sublist->next = D;

    cout << "Generalized Linked List: ";
    display(A);

    return 0;
}