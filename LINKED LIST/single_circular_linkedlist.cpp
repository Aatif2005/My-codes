#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Convert singly linked list to circular linked list
void convertToCircular(Node* head) {
    if (head == nullptr)
        return;
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = head;
}
void printCircular(Node* head) {
    if (head == nullptr)
        return;
    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << "(back to head)\n";
}
int main() {
    // Create singly linked list
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    cout << "Before conversion:\n";
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
    convertToCircular(head);
    cout << "\nAfter conversion:\n";
    printCircular(head);
    return 0;
}