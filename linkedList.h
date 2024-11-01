//"linkeList.h"
//Cameron Bailey & Trigg Lampkins
//create the kinked list class
//11/01/2024

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
using namespace std;

template <class T>
class Node {
    public:
    T element;
    Node *next;
    Node *prev;
    Node(const T& e = T(), Node *n = NULL) : element(e), next(n) {}
};

template <class T>
class List {

private:
    Node<T>* head; 
    int size;
    
public:
    
    List();// Constructor to initialize the dummyhead  
    ~List(); // Destructor to clean up memory
    int pop(const T& data);
    void insert(const T& data);
    bool isEmpty();
    int getLength();
    void remove(const T& data);
    void print() const; 
    void sort() const;
    void makeEmpty();
}; 

#endif