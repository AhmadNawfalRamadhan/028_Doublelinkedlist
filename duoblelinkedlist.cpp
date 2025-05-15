#include <iostream>
#include <string>
using namespace std;

class node
{
    public:
    int noMhas;
    node *next;
    node *prev;
};

class DoubleLinkedList
{
    private:
    node *START;
public:
    DoubleLinkedList()(
        START = NULL;)

void addNode()(
    int nim;
    string nama;
    cout <<"\nEnter the roll number of the student";
    cin >> nim;

    node *newNode = new Node();

    newNode ->noMhs = nim;

    if(START == NULL || nim <= START ->noMhs)
    {
        if(START !NULL && nim == START->noMhs)
        {
            cout << "\nDuplicate number not allowed" << endl;
            return;
        }

        newNode->next = START;

        if (START != NULL)
            START->prev = newNode;

        newNode->prev = NULL;

        START = newNode;
        return;
    }

    Node *current = START;
    While (current->next !=NULL && current->next->nomMhs < nim)
    {
        current = current->next;
    }

    if (current->next !=NULL && nim == current->next->nomMhs)
    {
        cout << "\nDuplicate roll number not allowed" << endl;
        return;
    }

    newNode->next = current->next;
    newNode->prev = current;

    if (current->next !=NULL)

)
};
//

void hapus()
{
    if (START == NULL)
    {
        cout << "\nList is empty" << endl;
        return;
    }

    cout << "\nEnter the roll number of the student whose record is to be deleted: ";
    int rollNo;
    cin >> rollNo;

    Node *current = START;

    while (current != NULL && current->noMhs != rollNo)
        current = current->next;


    if (current == START)
    {
        START = current->next;
        if (START != NULL)
            START->prev = NULL;
    }
    else
    {
        current->prev->next = current->next;

        if (current->next != NULL)
            current->next->prev = current->prev;
    }

    delete current;
    cout << "Record with roll number" << rollNo << "deleted" <<endl;
}

