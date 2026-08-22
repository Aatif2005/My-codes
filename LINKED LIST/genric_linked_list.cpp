#include <iostream>
using namespace std;
template <class T>
struct Node {
    T data;
    Node<T>* next;

    Node(T value) {
        data = value;
        next = NULL;
    }
};
template <class T>
class LinkedList {
private:
    Node<T>* head;

public:
    LinkedList() {
        head = NULL;
    }
    void insert(T value) {
        Node<T>* newNode = new Node<T>(value);

        if (head == NULL) {
            head = newNode;
            return;
        }

        Node<T>* temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    // Display list
    void display() {
        Node<T>* temp = head;

        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }
};

int main() {

    // Integer linked list
    LinkedList<int> numbers;

    numbers.insert(10);
    numbers.insert(20);
    numbers.insert(30);

    cout << "Integer List: ";
    numbers.display();


    // String linked list
    LinkedList<string> names;

    names.insert("Ram");
    names.insert("Shyam");
    names.insert("Mohan");

    cout << "String List: ";
    names.display();

    return 0;
}