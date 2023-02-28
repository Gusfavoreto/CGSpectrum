#include <iostream>

using namespace std;

class Node
{
public:
    int value = 0;
    Node* next = nullptr;
};

class LinkedList
{
private:
    Node* head = nullptr;
public:
    void Insert(int v)
    {
        Node* p = new Node();
        p->value = v;

        if (head)
        {
            //if not a nullptr
            head->next = p;
        }
        else
        {
            //if nulptr
            head = p;
        }
        
    } 

    void Delete(int v)
    {

    }
    void Print()
    {
        Node* current = head;
        cout << "The list contains: ";

        while (current)
        {
            //Kepp runnig when it's not nullptr
            cout << current->next << ",";
            current = current->next;
        }
                
    }
};

int main()
{
    LinkedList list;

    list.Insert(1);
    list.Print();

    list.Insert(5);
    list.Print();

    return 0;
}

