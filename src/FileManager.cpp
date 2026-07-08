#include <fstream>
#include "FileManager.h"

void saveToFile(const vector<Student>& students)
{
   ofstream file("../data/students.txt");
   for(int i = 0; i < students.size(); i++)
{
   file << students[i].getId() << " "
     << students[i].getName() << " "
     << students[i].getAge() << " "
     << students[i].getDepartment() << " "
     << students[i].getCGPA() << endl;

}

file.close();
}

void loadFromFile(vector<Student>& students)

{
    ifstream file("../data/students.txt");
    int id;
    string name;
    string department;
    int age;
    float cgpa;

    while(file >> id >> name >> age >> department >> cgpa)
{
    Student  s(id,name,age,department,cgpa);
    students.push_back(s);

}
file.close();


}





