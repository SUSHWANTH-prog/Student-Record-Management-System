#include <iostream>
#include "Student.h"
#include <vector>
#include "FileManager.h"

using namespace std;

int main()
{
   
   vector<Student> students;
   loadFromFile(students);
   int choice;

   while(true){
      cout << "\n==========\n";
        cout << "  Student Record Management System\n";
        cout << "===============\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search student\n";
        cout << "4.Update student\n";
        cout << "5. delete a student data\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
   

   switch(choice)
   {
     case 1:
    {

    Student s;
     s.inputStudent();

    students.push_back(s);
    saveToFile(students);

    cout << "\nStudent added successfully!\n";

    break;
   }
   
        case 2:
        {
          if(students.empty())
          {
            cout << "\nNo student record found.\n";
          }
          else{
            for(int i=0;i < students.size();i++){
                  students[i].displayStudent();

            }
          }
          break;


        }
        
        case 3:
        {
            int id;
            cout << "Enter Student ID: ";
            cin >> id;
            cin.ignore();

            
            bool found = false;

           for(int i=0;i < students.size();i++)
           {

                 
                if(students[i].getId()== id){
                    students[i].displayStudent();
                    found = true;
                    break;
                }
               
        }

        if(found == false)
               {
                cout << "student not found";


           }

        } 
        break;

        
    

        case 4:
           { int id;
            cout << "Enter Student ID: ";
            cin >> id;
            cin.ignore();

            bool found = false;

            for(int i=0;i<students.size();i++){
                  if(students[i].getId() == id)
                  {
                    students[i].inputStudent();
                    saveToFile(students);
                    cout << "succesfully updated";
                    found =  true;
                    break;
                  }

            }

            if(!found)
               {
                cout << "student not found";


           }
           

        }
        break;


       case 5:
       {
         int id;
            cout << "Enter Student ID: ";
            cin >> id;
            cin.ignore();

        bool found = false;

        for(int i=0;i<students.size();i++){
             if(students[i].getId() == id ){
                students.erase(students.begin() + i);
                saveToFile(students);
                cout << "\nStudent deleted successfully!\n";
                found = true;
                break;
             }

        }

        if(!found)
               {
                cout << "student not found";


           }






       }
       break;


        case 6:
            cout << "\nThank you for using the program!\n";
            return 0;

        default:
            cout << "\nInvalid choice! Please try again.\n";
        }
    }
    }
   

        
    


 


    //students.inputStudent();

   // cout << "\nStudent Details:" << endl;

    //students.displayStudent();

    
