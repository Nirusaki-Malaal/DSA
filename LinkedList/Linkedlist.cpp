#include <iostream>
using namespace std;
class Node
{
    public:
        int data;
        Node* next;
        Node (int data1 , Node* next1)
        {
            data = data1;
            next = next1;
        }
        Node(int data1)
        {
            data = data1;
            next = nullptr;
        }
};
class LinkedList
{
public:
        Node* N1;
        Node * head;
        Node* tail;
    LinkedList(int data)
    {
        N1 = new Node(data);
        head = N1;
        tail = N1;
    }
    void add (int data)
    {
        Node* N2 = new Node(data);
        N1 -> next = N2;
        N1 = N2;
        tail = N2;
    }
    void display()
    {
        Node* temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void displayAt(int index)
    {
        int i = 0 ;
        Node* temp = head;
        while (i <= index)
        {
            if (temp == nullptr)
                cout << "Index Not Available";
            if (index == i)
            {
                cout << temp->data;
            }
            temp = temp->next;
            i++;
        }
        cout << endl;
    }
    void AddFront(int data)
    {
        Node* N2 = new Node(data , head);
        head = N2;
    }
    void length()
    {
        Node* temp = head;
        int length = 0;
        while (temp != nullptr)
        {
            length++; 
            temp = temp->next;
        }
        cout << length;
    }
    void search(int target)
    {
        int index = -1;
        int i=0;
        Node* temp = head;
        while (temp != nullptr)
        {
            if (temp->data == target)
            {
                cout << i;
                return;
            }
            i++;
            temp = temp->next;
        }
        cout << "NOT FOUND";
    }
    void pop()
    {
      Node* temp = head;
        while (temp != nullptr)
        {
            if (temp->next->next == nullptr)
                break;
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
        delete todelete;
    }
};

int main()
{
    LinkedList a(1) ;
    a.add(3);
    a.add(5);
    a.display();
    a.pop();
    cout << endl;
    a.pop();
    a.display();
}
