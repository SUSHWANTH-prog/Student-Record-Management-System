#include <iostream>
#include "Student.h"

using namespace std;

int main()
{
    Student student;

    student.inputStudent();

    cout << "\nStudent Details:" << endl;

    student.displayStudent();

    return 0;
}