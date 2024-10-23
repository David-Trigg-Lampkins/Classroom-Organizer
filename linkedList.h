#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
using namespace std;

template <class T>
class Node {
    public:
    T element;
    Node *next;

    Node(const T& e = T(), Node *n = NULL) : element(e), next(n) {}
};

template <class T>
class List {

private:
    Node<T>* dummyHead;  // Sentinel (dummy) head node

public:
    
    List();// Constructor to initialize the dummyhead  
    ~List(); // Destructor to clean up memory
    Node<T>* zeroth(); // Returns the dummy head node (zeroth node)
    Node<T>* first(); // Returns the first node in the list
    const Node<T>* first() const; // Const version of first() function (for const objects)    
    bool isEmpty() const; // Checks if the list is empty
    void insert(const T& data, Node<T>* p);
    Node<T>* find(const T& data); //  find an element, we must loop through all elements until we find the element or we reach the end
    Node<T>* findPrevious(const T& data);
   void remove(const T& data);
   void print() const; 
   void makeEmpty();
}; 

#endif