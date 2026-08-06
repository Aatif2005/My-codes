/*
playlist management system using doubly linked list
1. insert song at the end
2. delete a song with particular song ID
3. display alll songs
4. exit
*/
#include <iostream>
#include <string>
using namespace std;

struct Node {
    int song_id;
    string song_name;
    string artist;
    Node* prev;
    Node* next;

    Node(int id, const string& name, const string& art)
        : song_id(id), song_name(name), artist(art), prev(nullptr), next(nullptr) {}
};

class Playlist {
private:
    Node* head;
    Node* tail;

public:
    Playlist() : head(nullptr), tail(nullptr) {}

    ~Playlist() {
        Node* temp = head;
        while (temp != nullptr) {
            Node* next = temp->next;
            delete temp;
            temp = next;
        }
    }

    void insertSong() {
        int id;
        string name, artist;

        cout << "Enter song_id: ";
        cin >> id;
        cin.ignore();

        cout << "Enter song_name: ";
        getline(cin, name);

        cout << "Enter artist name: ";
        getline(cin, artist);

        Node* newNode = new Node(id, name, artist);

        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }

        cout << "Song added successfully!\n";
    }

    void deleteSong() {
        if (head == nullptr) {
            cout << "Playlist is empty!\n";
            return;
        }

        int id;
        cout << "Enter the song_id to delete: ";
        cin >> id;

        Node* ptr = head;
        while (ptr != nullptr && ptr->song_id != id) {
            ptr = ptr->next;
        }

        if (ptr == nullptr) {
            cout << "Song not found!\n";
            return;
        }

        if (head == tail) {
            head = tail = nullptr;
        } else if (ptr == head) {
            head = head->next;
            head->prev = nullptr;
        } else if (ptr == tail) {
            tail = tail->prev;
            tail->next = nullptr;
        } else {
            ptr->prev->next = ptr->next;
            ptr->next->prev = ptr->prev;
        }

        delete ptr;
        cout << "Song deleted successfully!\n";
    }

    void displaySongs() const {
        if (head == nullptr) {
            cout << "\n Playlist is empty!\n";
            return;
        }

        Node* temp = head;
        cout << "\n Playlist Songs:\n";
        cout << string(35, '-') << "\n";

        while (temp != nullptr) {
            cout << "ID     : " << temp->song_id   << "\n";
            cout << "Song   : " << temp->song_name << "\n";
            cout << "Artist : " << temp->artist    << "\n";
            cout << string(35, '-') << "\n";
            temp = temp->next;
        }
    }
};

int main() {
    Playlist playlist;
    int choice;

    while (true) {
        cout << "\n===== PLAYLIST MANAGEMENT SYSTEM =====\n";
        cout << "1. Insert Song at End\n";
        cout << "2. Delete Song by Song ID\n";
        cout << "3. Display All Songs\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: playlist.insertSong();   break;
            case 2: playlist.deleteSong();   break;
            case 3: playlist.displaySongs(); break;
            case 4:
                cout << "\nExiting Playlist System...\n";
                return 0;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    }
}