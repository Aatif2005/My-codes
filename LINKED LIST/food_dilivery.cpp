/*food dilivery order managment system using single linked list
1. add a new orde (ordr id, customer name, food items,)(insert at end)
2. prepare (delte order from begining)
3. display all pending order
4. exit*/
#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    int order_id;
    string customer_name;
    string item_name;
    Node *next;

    Node(int id, string customer, string item)
    {
        order_id = id;
        customer_name = customer;
        item_name = item;
        next = NULL;
    }
};

Node *head = NULL;
void addOrder()
{
    int id;
    string customer, item;

    cout << "Enter Order ID, Customer Name, Item Name: ";
    cin >> id >> customer >> item;

    Node *newNode = new Node(id, customer, item);

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }

    cout << "Order added successfully!\n";
}

// Function to prepare the first order
void prepareOrder()
{
    if (head == NULL)
    {
        cout << "No pending orders.\n";
        return;
    }

    Node *ptr = head;
    head = head->next;

    cout << "\nOrder Prepared Successfully!\n";
    cout << "Order ID: " << ptr->order_id << endl;
    cout << "Customer: " << ptr->customer_name << endl;
    cout << "Food Item: " << ptr->item_name << endl;

    delete ptr;
}

// Function to display all pending orders
void displayOrder()
{
    if (head == NULL)
    {
        cout << "No pending orders.\n";
        return;
    }

    Node *ptr = head;

    cout << "\nPending Orders:\n";
    while (ptr != NULL)
    {
        cout << "Order ID: " << ptr->order_id << endl;
        cout << "Customer: " << ptr->customer_name << endl;
        cout << "Food Item: " << ptr->item_name << endl;
        cout << "\n";

        ptr = ptr->next;
    }
}

int main()
{
    int choice;

    while (true)
    {
        cout << "\n===== Food Order Management =====\n";
        cout << "1. Add New Order\n";
        cout << "2. Prepare Order\n";
        cout << "3. Display All Pending Orders\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        
        switch (choice)
        {
        case 1:
            addOrder();
            break;

        case 2:
            prepareOrder();
            break;

        case 3:
            displayOrder();
            break;

        case 4:
            cout << "Exiting Program...\n";
            return 0;

        default:
            cout << "Invalid Choice! Try Again.\n";
        }
    }

    return 0;
}