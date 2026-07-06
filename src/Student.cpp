#include "Student.h"
#include <iostream>

using namespace std;

    Student::Student(){
      id = 0;
      name = "";
      age = 0;
      department = "";
      cgpa = 0.0;



    }

    Student::Student(int id,string name,int age,string department,float cgpa){
    this->id = id;
    this->name = name;
    this->age = age;
    this->department = department;
    this->cgpa = cgpa;
    }

    void Student::inputStudent(){
     cout << "Enter Student ID: ";
    cin >> id;
    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Age: ";
    cin >> age;

    cin.ignore();

    cout << "Enter Department: ";
    getline(cin, department);

    cout << "Enter CGPA: ";
    cin >> cgpa;

    }
   
    void Student::displayStudent() const{
       cout << "\n" << endl;
    cout << "Student ID : " << id << endl;
    cout << "Name       : " << name << endl;
    cout << "Age        : " << age << endl;
    cout << "Department : " << department << endl;
    cout << "CGPA       : " << cgpa << endl;
    cout << "  " << endl;
    }
 
    
    int Student::getId() const
{
    return id;
}
  