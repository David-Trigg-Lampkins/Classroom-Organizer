//"Main.cpp"
//Cameron Bailey & Trigg Lampkins
//user interaction
//11/01/2024
#include "student.h"
#include "linkedList.h"
#include "LinkedList.cpp"
#include <iostream>
using namespace std;

int main()
{
    int choice;
    int currNode = 0;
    string name;
    int grade, age;
    List<Students> myList;
    Students currStudent(name, age, grade);
    Students newStudent(name, age, grade);

    do
    {
        //menu
        cout << "What would you like to do?\n";
            cout << "1: Add New Student\n2: Remove Student\n3: Select Next Student\n4: Select Previous Student\n5: Print All Students\n6: Sort Students\n7: Exit Program\n";
            cin >> choice;
            //input validation
            while(!(cin >> choice) || (choice < 1 || choice > 7))
            {
                //have user input another input 
                cout << "\nPlease enter a valid choice: ";
                cin.clear();
                cin.ignore(100, '\n'); 
            }
        switch(choice)
        {
            //print currently selected student
            case 1://enroll student
                cout << "What is the student's name: ";
                getline(cin, name);
                cout << "What is the student's age: ";
                cin >> age;
                cout << "What is the student's grade: ";
                cin >> grade;
                currStudent.setname(name);
                myList.insert(currNode, currStudent); //inserts into the linked list
                break;                  
            case 2://expel student  
                cout << "Enter name of student to remove: ";
                cin >> name;
                myList.remove(name);    
                break;
            case 3://next student
                currNode ++;
                break;
            case 4://prev student
                currNode --;
                break;
            case 5://print all students
                cout << "Printing list of students.\n";
                myList.print();
                break;
            case 6://sort students
                cout << "Sotring students.\n";
                myList.sort();
                cout << "Here is the list in order.\n";
                myList.print();
                break;          
        }                       
    } while (choice !=7);       
}