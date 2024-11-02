//"LinkedList.cpp"
//Cameron Bailey & Trigg Lampkins
//functions to interact with the linked list
//11/01/2024

#include "linkedList.h"


using namespace std;

template <class T>
List<T>::~List() //what deletes the linked list
{
    Node<Students>* current = head;
    while (current != nullptr)
    {
        Node<Students>* temp = current;
        current = current->next;
        delete temp; // Frees the memory
    }
}   //i tried running it and there are more errors than i can count

template <class T>
void insert(Students stu) 
{
    Node<Students> *newNode;				// A new node
	Node<Students> *nodePtr;				// To traverse the list
	Node<Students> *previousNode = NULL; // The previous node

	Node<Students> = new ListNode(stu);

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
		while (nodePtr != NULL && nodePtr->value < stu)
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
    Node<Students>* temp = head;
    int data = temp->next;
    head = head->next; //takes head to the next
    delete temp; //deletes the temp that is on the head
    return data;
}

template <class T>
void remove(name) 
{
    Node<Students>* current = head;
    Node<Students>* previous = nullptr;

    while (current) {
        if (current->data.getName() == name) {
            if (previous) {
                previous->next = current->next;
            } else {
                head = current->next;
            }
            delete current; //deletes the current head selected
            return;
        }
        previous = current;
        current = current->next; //returns to the current head before
    }
}

template <class T>
void print() {
    Node<Students>* current = head;
    if (!current) { //if there are no students in the list, it comes back false
        cout << "No students in the list.\n";
        return;
    }
    while (current) {
        cout << current->data << endl;
        current = current->next; // while loop to list everyone on the list
    }
}

template <class T>
bool isEmpty() {
    if(!head) //if there is nothing in the head node, it come back true
		return true;
	else
		return false; //if there is something there, it comes back false
}

template <class T>
void makeEmpty() 
{

	Node<Students> *nodePtr;   // To traverse the list
	Node<Students> *nextNode;  // To point to the next node

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
    int counter = 0; //sets counter to 0 to start the counting
	Node<Students> *nodePtr;
	
	nodePtr = head;
	
	while(nodePtr)
	{
		counter++; //while loop to count until they hit the end
		nodePtr = nodePtr->next;
	}
	return counter;
}


template <class T>
void sort() 
{    
    Node<Students>* MergeSort(Node *my_node);

        Node *secondNode;

    if (my_node == NULL) //node goes null
        return NULL;
    else if (my_node->next == NULL)
        return my_node;
    else
    {
        secondNode = Split(my_node); //splits node
        return Merge(MergeSort(my_node),MergeSort(secondNode));
    }
}


Node Merge(Node<Students>* firstNode, Node<Students>* secondNode)
{
    if (firstNode == NULL) return secondNode;
    else if(secondNode == NULL) return firstNode;
    else if(firstNode->number <= secondNode->number) //if I reverse the sign to >=, the behavior reverses
    {
        firstNode->next = Merge(firstNode->next, secondNode);
        return firstNode; //makes the first node for first section
    }
    else
    {
        secondNode->next = Merge(firstNode, secondNode->next);
        return secondNode; //makes the firsnode for first section
    }
}

Node Split(Node<Students>* my_node) // splits the nodes to sort out
{
    Node* firstNode;
    Node* secondNode;

    if (my_node == NULL) return NULL;
    else if (my_node->next == NULL) return NULL;
    else 
    {
        secondNode = my_node->next;
        my_node->next = secondNode->next;
        secondNode->next = Split(secondNode->next);
        return secondNode;
    }
};
