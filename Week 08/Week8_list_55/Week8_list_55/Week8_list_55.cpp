#include <iostream>

using namespace std;

struct Node {
    int value;
    Node* next;
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList() {
        head = nullptr;
    }

    void Insert(int value) {
        Node* p = new Node;
        p->value = value;
        p->next = nullptr;

        if (head) {
            // if not a nullptr
            Node* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = p;
        }
        else {
            // if nullptr
            head = p;
        }
    }

    void Delete(int v) {

        cout << "Deleting node at position " << v << endl;

        if (head == nullptr) {
            cout << "List is empty" << endl;
            return;
        }

        Node* current = head;
        Node* previous = nullptr;

        while (current != nullptr && current->value != v) {
            previous = current;
            current = current->next;
            
        }

        if (current == nullptr) {
            cout << "Invalid Number" << endl;
            return;
        }

        if (previous == nullptr) {
            // delete the head node
            head = current->next;
        }
        else {
            previous->next = current->next;
        }

        delete current;
    }

    void Print() {
        Node* current = head;
        cout << "The list contains: ";

        while (current) {
            // Keep running when it's not nullptr
            cout << current->value << ",";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;

    list.Insert(1);
    //list.Print();

    list.Insert(5);
    //list.Print();

    list.Insert(10);
    //list.Print();

    list.Delete(5);
    list.Print();

    return 0;
}
