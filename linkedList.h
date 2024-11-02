//"linkeList.h"
//Cameron Bailey & Trigg Lampkins
//create the linked list class
//11/01/2024

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include "student.h"
using namespace std;

template <class T>
class Node 
{
    public:
    Students student;
    Node *next;

    Node()
    {
        student.getName = "";
        student.getAge = 0;
        student.getGrade = 0;
        next = NULL;
    }
}; 

template <class T>
class List
{
    private:
        Node* head; 
        Node* tail;
    
    public:
    
        List()// Constructor to initialize the dummyhead 
        {
            head = NULL;
            tail = NULL;
        } 
        ~List(); // Destructor to clean up memory
        int pop(const T& data);
        void insert(int position, Students stu); 
        bool isEmpty();
        int getLength();
        void remove(string name);
        void print() const; 
        void sort() const;
        void makeEmpty();
}; 

#endif