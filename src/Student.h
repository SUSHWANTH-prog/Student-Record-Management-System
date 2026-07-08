#ifndef STUDENT_H
#define STUDENT_H

#include<string>

using namespace std;

class Student {
private:
int id;
string name;
int age;
string department;
float cgpa;

public:
Student();

Student(int id,string name,int age,string department,float cgpa);
void inputStudent();
void displayStudent() const;
int getId() const;
string getName() const;
int getAge() const;
string getDepartment() const;
float getCGPA() const;
};

#endif
