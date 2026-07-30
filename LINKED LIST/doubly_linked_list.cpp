#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* prev;
    Node* next;
    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};
//traverse dd linked list
void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int getLength(Node* head) {
    int len = 0;
    Node* temp = head;
    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}
void insertAtHead(Node* &head, int data) {
    Node* temp = new Node(data);
    temp-> next = head;
    head->prev = temp;
    head = temp;
}
void insertAtTail(Node* &head, int val) {
    Node* newNode = new Node(val);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}
int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    print(head);

    cout << getLength(head) << endl;
    insertAtHead(head, 11);
    print(head);
    insertAtHead(head, 12);
    print(head);
    insertAtHead(head, 13);
    print(head);
    insertAtHead(head, 14);
    print(head);
    insertAtTail(head,20);
    print(head);
}