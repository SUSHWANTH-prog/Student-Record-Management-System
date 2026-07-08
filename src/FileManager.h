#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <vector>
#include "Student.h"

using namespace std;

void saveToFile(const vector<Student>& students);

void loadFromFile(vector<Student>& students);

#endif