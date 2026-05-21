// WAP to implement doubly linked list
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;
};
Node* head = NULL;
// insert at the beginning of the doubly linked list
void insertBeg(int value)
{
    Node* newNode = new Node();
    newNode ->data = value;
    newNode ->next = head;
    newNode ->prev = NULL;

    if(head != NULL)
    {
        head -> prev = newNode;
    }
    head = newNode;
}
// insert at the end of the doubly linked list
void insertend(int value)
{
    Node* newNode = new Node();
    newNode ->data = value;
    newNode ->next = NULL;
    newNode ->prev = NULL;

    if(head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node* temp = head;
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newNode;
        newNode -> prev = temp;
    }
}
// insert after a given value in the doubly linked list
void insertAfter(int afterValue, int value)
{
    Node* newNode = new Node();
    newNode ->data = value;
    newNode ->next = NULL;
    newNode ->prev = NULL;

    Node* temp = head;
    while(temp != NULL && temp -> data != afterValue)
    {
        temp = temp -> next;
    }
    if(temp == NULL)
    {
        cout << "Value " << afterValue << " not found in the list" << endl;
        delete newNode;
        return;
    }
    newNode -> next = temp -> next;
    if(temp -> next != NULL)
    {
        temp -> next -> prev = newNode;
    }
    temp -> next = newNode;
    newNode -> prev = temp;
}
// delete a node with a given value from the doubly linked list
void deleteNode(int value)
{
    Node* temp = head;
    while(temp != NULL && temp -> data != value)
    {
        temp = temp -> next;
    }
    if(temp == NULL)
    {
        cout << "Value " << value << " not found in the list" << endl;
        return;
    }
    if(temp -> prev != NULL)
    {
        temp -> prev -> next = temp -> next;
    }
    else
    {
        head = temp -> next;
    }
    if(temp -> next != NULL)
    {
        temp -> next -> prev = temp -> prev;
    }
    delete temp;
}

void display(){
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << "NULL" <<endl;
}

int main(){
    insertBeg(5);
    insertBeg(10);
    insertBeg(15);
    insertend(10);
    insertend(20);
    insertend(30);
    insertAfter(10, 25);
    insertAfter(20, 35);
    deleteNode(10);

    cout << "linked list " ;
    display();
    return 0;
}
