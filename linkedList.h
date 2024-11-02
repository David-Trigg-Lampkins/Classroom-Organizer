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
    Node<Students> *next;

    Node() //node to get student info
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
        Node<Students>* head; 
        Node<Students>* tail;
    
    public:
    
        List()// Constructor to initialize the dummyhead 
        {
            head = NULL;
            tail = NULL;
        } 
        ~List(); // Destructor to clean up memory
        int pop(const T& data); 
        void insert(int position, Students stu); //adds items
        bool isEmpty(); //checks if empty
        int getLength(); //tells the length of the list
        void remove(string name);//removes from list
        void print() const; //prints list
        void sort() const; //sorts the list
        void makeEmpty(); //deletes the list until empty
        friend void head(const List& head);
}; 

#endif