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
            Node* current = head;
            while (current->next)
            {
                current = current->next;
            }
            current->next = p;
        }
        else
        {
            //if nulptr
            head = p;
        }
        
    } 

    void Delete(struct node **head, int v)
    {
        struct node* current = *head;
        struct node* previous = *head;

        if (*head == NULL)
        {
            cout << "List is empty";
        }
        else if(v == 1)
        {
            *head = current->next;
            free(current);
            current = NULL;
        }
        else
        {
            while (v != 1)
            {
                previous = current;
                current = current->next;
                v--;
            }
            previous->next = current->link;
            free(current);
            current = NULL;
        }
        
    }

    void Print()
    {
        Node* current = head;
        cout << "The list contains: ";

        while (current)
        {
            //Kepp runnig when it's not nullptr
            cout << current->value << ",";
            current = current->next;
        }
                
    } 
};

int main()
{
    LinkedList list;

    list.Insert(1);
    //list.Print();

    list.Insert(5);
    //list.Print();

    list.Insert(10);
    list.Print();

    list.Delete(5);
    list.Print();


    return 0;
}

