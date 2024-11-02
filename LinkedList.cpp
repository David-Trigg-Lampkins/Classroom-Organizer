//"LinkedList.cpp"
//Cameron Bailey & Trigg Lampkins
//functions to interact with the linked list
//11/01/2024

#include "linkedList.h"


using namespace std;

template <class T>
List<T>::~List() //what deletes the linked list
{
    Node* current = head;
    while (current != nullptr)
    {
        Node* temp = current;
        current = current->next;
        delete temp; // Frees the memory
    }
}   //i tried running it and there are more errors than i can count

template <class T>
void insert(Students stu) 
{
    Node *newNode;				// A new node
	Node *nodePtr;				// To traverse the list
	Node *previousNode = NULL; // The previous node

	newNode = new ListNode(stu);

	// If there are no nodes in the list make newNode the first node
	if (!head)
	{
		head = newNode;
		newNode->next = NULL;
	}
	else  // Otherwise, insert newNode
	{
		// Position nodePtr at the head of list.
		nodePtr = head;

		// Initialize previousNode to NULL.
		previousNode = NULL;

		// Skip all nodes whose value is less than newValue.
		while (nodePtr != NULL && nodePtr->value < newValue)
		{  
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}

		// If the new node is to be the 1st in the list, insert it before all other nodes.
		if (previousNode == NULL)
		{
			head = newNode;
			newNode->next = nodePtr;
		}
		else  // Otherwise insert after the previous node.
		{
			previousNode->next = newNode;
			newNode->next = nodePtr;
		}
	}
}

template <class T>
int pop(const T& data) {
    Node* temp = head;
    int data = temp->next;
    head = head->next;
    delete temp;
    return data;
}

template <class T>
void remove(name) 
{
    Node* current = head;
    Node* previous = nullptr;

    while (current) {
        if (current->data.getName() == name) {
            if (previous) {
                previous->next = current->next;
            } else {
                head = current->next;
            }
            delete current;
            return;
        }
        previous = current;
        current = current->next;
    }
}

template <class T>
void print() {
    Node* current = head;
    if (!current) {
        cout << "No students in the list.\n";
        return;
    }
    while (current) {
        cout << current->data << endl;
        current = current->next;
    }
}

template <class T>
bool isEmpty() {
    if(!head)
		return true;
	else
		return false;
}

template <class T>
void makeEmpty() 
{

	Node *nodePtr;   // To traverse the list
	Node *nextNode;  // To point to the next node

	// Position nodePtr at the head of the list.
	nodePtr = head;

	// While nodePtr is not at the end of the list...
	while (nodePtr != NULL)
	{
		// Save a pointer to the next node.
		nextNode = nodePtr->next;
		
		cout << "\nDeleting the node with value " << nodePtr->student;
		
		// Delete the current node.
		delete nodePtr;

		// Position nodePtr at the next node.
		nodePtr = nextNode;
	}
	cout << endl << endl;
}

template <class T>
int getLength() 
{
    int counter = 0;
	Node *nodePtr;
	
	nodePtr = head;
	
	while(nodePtr)
	{
		counter++;
		nodePtr = nodePtr->next;
	}
	return counter;
}


template <class T>
void sort() {
    
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
    else if(secondNode == NULL) return firstNode;
    else if(firstNode->number <= secondNode->number) //if I reverse the sign to >=, the behavior reverses
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
} //i figured out that they do need the template on them, i was checking my labs to refresh on how i did them
//ok