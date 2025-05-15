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
DoubleLinkedList()
}