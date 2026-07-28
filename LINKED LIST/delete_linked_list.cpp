#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Insert at end
void insert(Node* &head, int val) {
    Node* newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

// Delete node at given position (0-based)
void deleteNode(Node* &head, int pos) {

    // Case 1: Empty list
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    // Case 2: Invalid position
    if (pos < 0) {
        cout << "Invalid position\n";
        return;
    }

    // Case 3: Delete first node
    if (pos == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    // Find previous node
    Node* curr = head;
    for (int i = 0; curr != NULL && i < pos - 1; i++)
        curr = curr->next;

    // Case 4: Position out of range
    if (curr == NULL || curr->next == NULL) {
        cout << "Position out of range\n";
        return;
    }

    // Case 5: Delete middle/last node
    Node* temp = curr->next;
    curr->next = temp->next;
    delete temp;
}

// Display list
void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = NULL;

    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    insert(head, 40);
    insert(head, 50);

    cout << "Original List:\n";
    display(head);

    deleteNode(head, 0);   // Delete head
    display(head);

    deleteNode(head, 2);   // Delete middle/last depending on current list
    display(head);

    deleteNode(head, 10);  // Invalid position
    display(head);

    return 0;
}