//"student.h"
//Cameron Bailey & Trigg Lampkins
//create the student class
//11/01/2024

#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
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
        void setage(int newAge){this->age = newAge;}
        void setgrade(int newGrade){this->grade = newGrade;}

        //getters
        string getName(){return name;}
        int getAge(){return age;}
        int getGrade(){return grade;}

        //constructor
        Students();
        Students(string name, int age, int grade)
        {
            this->name = name;
            this->age = age;
            this->grade = grade;
        }
        //overloaded operators
        bool operator==(const Students& compare)
        {
            return this->age == compare.age;
            return this->age == compare.grade;
        }
        bool operator>(const Students& compare)
        {
            return this->age > compare.age;
            return this->age > compare.grade;
            ;
        }
        bool operator<(const Students& compare)
        {
            return this->age < compare.age;
            return this->age < compare.grade;
        }

        friend ostream& operator<< (ostream& os, const Students person)
        {
            os << person.name;
            os << person.age;
            os << person.grade;
            return os;
        }
};

#endif