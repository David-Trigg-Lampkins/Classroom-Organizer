#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Students
{
    private:
        string name;
        int age;
        int grade;
    public:
        //setters
        void setname(string newName){name = newName;}
        void setage(int newAge){age = newAge;}
        void setgrade(int newGrade){grade = newGrade;}

        //getters
        string getName(){return name;}
        int getAge(){return age;}
        int getGrade(){return grade;}

        //constructor
        Students(string name, int age, int grade)
        {
            this->name = name;
            this->age = age;
            this->grade = grade;
        }
        //overloaded operators
};

#endif