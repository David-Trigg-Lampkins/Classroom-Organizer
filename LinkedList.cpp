//"LinkedList.cpp"
//Cameron Bailey & Trigg Lampkins
//functions to interact with the linked list
//11/01/2024

#include "linkedList.h"


using namespace std;

template <class T>
struct Node {
    int data;
    Node* prev;
    Node* next;
};

template <class T>
class List {

    Node* head;
};

template <class T>
List<T>::~List() {
    while (head) {
        Node<T>* temp = head;
        head = head->next;
        delete temp;
    }
}

template <class T>
void List<T>::insert(const T& data) {
    Node<T>* newNode = new Node<T>(data);
    if (!head) {
        head = newNode;
    } else {
        Node<T>* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
    }
    size++;
}

template <class T>
int List<T>::pop(const T& data) {
    Node* temp = head;
    int data = temp->next;
    head = head->next;
    delete temp;
    return data;
}

template <class T>
void List<T>::remove(const T& data) {
    Node<T>* current = head;
    Node<T>* previous = nullptr;

    while (current) {
        if (current->data.getName() == name) {
            if (previous) {
                previous->next = current->next;
            } else {
                head = current->next;
            }
            delete current;
            size--;
            return;
        }
        previous = current;
        current = current->next;
    }
}

template <class T>
void List<T>::print() const {
    Node<T>* current = head;
    if (!current) {
        std::cout << "No students in the list.\n";
        return;
    }
    while (current) {
        std::cout << current->data << std::endl;
        current = current->next;
    }
}

template <class T>
bool List<T>::isEmpty() {

}

template <class T>
int List<T>::getLength() {

}

template <class T>
void List<T>::sort() const {

}