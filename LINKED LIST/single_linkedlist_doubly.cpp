#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
    }
};
// Convert singly linked list to doubly linked list
void convertToDoubly(Node* head) {
    Node* current = head;
    Node* previous = nullptr;
    while (current != nullptr) {
        current->prev = previous;
        previous = current;
        current = current->next;
    }
}
void printForward(Node* head) {
    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}
void printBackward(Node* head) {
    if (head == nullptr)
        return;
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    while (temp != nullptr) {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    cout << "Before conversion:\n";
    printForward(head);
    convertToDoubly(head);
    cout << "\nAfter conversion (forward):\n";
    printForward(head);
    cout << "After conversion (backward):\n";
    printBackward(head);
    return 0;
}