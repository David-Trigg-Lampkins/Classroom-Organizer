//
//
//
//
#include "student.h"
#include "linkedList.h"


int main()
{
    int choice;

    do
    {
        //menu
        cout << "What would you like to do?\n";
            cout << "1: Add New Student\n2: Remove Student\n3: Select Next Student\n4: Print All Students\n5: Sort Students\n";
            cin >> choice;
            //input validation
            while(!(cin >> choice) || (choice < 1 || choice > 6))
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

                break;
            case 2://expel student
            
                break;
            case 3://next student
            
                break;
            case 4://print all students

                break;
            case 5://sort students

                break;
        }
    } while (choice !=6);
}