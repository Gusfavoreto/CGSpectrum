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
    Node* head;
public:
    void Insert(int v);
    void Delete(int v);
    void Print();
};

void LinkedList::Insert(int v)
{
    //todo
};

void LinkedList::Delete(int v)
{
    //todo
};

void LinkedList::Print()
{
    //todo
};

int main() {
    LinkedList list;
    list.Insert(4);
    list.Insert(8);
    list.Insert(5);
    list.Print();//Should print out 4, 8, 5
    list.Delete(8);
    list.Print();//Should print out 4, 5
    return 0;
}