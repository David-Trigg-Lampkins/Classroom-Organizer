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
    if(!head)
		return true;
	else
		return false;
}

template <class T>
int List<T>::getLength() {
    int counter = 0;
	ListNode *nodePtr;
	
	nodePtr = head;
	
	while(nodePtr != tail)
	{
		counter++;
		nodePtr = nodePtr->next;
		if (nodePtr == tail)
			counter++;
	}
	return counter;
}

template <class T>
void List<T>::sort() const {
    
    node* MergeSort(node *my_node)
{
    node *secondNode;

    if (my_node == NULL)
        return NULL;
    else if (my_node->next == NULL)
        return my_node;
    else
    {
        secondNode = Split(my_node);
        return Merge(MergeSort(my_node),MergeSort(secondNode));
    }
}

node* Merge(node* firstNode, node* secondNode)
{
    if (firstNode == NULL) return secondNode;
    else if (secondNode == NULL) return firstNode;
    else if (firstNode->number <= secondNode->number) //if I reverse the sign to >=, the behavior reverses
    {
        firstNode->next = Merge(firstNode->next, secondNode);
        return firstNode;
    }
    else 
    {
        secondNode->next = Merge(firstNode, secondNode->next);
        return secondNode;
    }
}

node* Split(node* my_node)
{
    node* secondNode;

    if (my_node == NULL) return NULL;
    else if (my_node->next == NULL) return NULL;
    else {
        secondNode = my_node->next;
        my_node->next = secondNode->next;
        secondNode->next = Split(secondNode->next);
        return secondNode;
    }
}
}