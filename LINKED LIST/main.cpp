#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
void insertAtHead(Node* &head, int data) {
    Node* ptr = new Node(data);
    ptr->next = head;
    head = ptr;
}
void insertAtTail(Node* &tail, int data) {
    Node* ptr = new Node(data);
    tail->next = ptr;
    tail = ptr;
}
void insertAtPosition(  Node* &tail, Node* &head,int position, int data) {
    if (position == 1) {
        insertAtHead(head, data);
        return;
    }
    Node* ptr = head;
    int cnt = 1;
    while (cnt < position - 1) {
        ptr = ptr->next;
        cnt++;
    }
    if (ptr->next == NULL) {
        insertAtTail(tail,data);
    }
    Node* nodeToInsert = new Node(data);
    nodeToInsert->next = ptr->next;
    ptr->next = nodeToInsert;
}
void print(Node* &head) {
    Node* ptr = head;
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}
int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head,9);
    print(head);
    insertAtTail(tail,11);
    print(tail);
    insertAtPosition(head,tail,1,5);
    print(head);
}