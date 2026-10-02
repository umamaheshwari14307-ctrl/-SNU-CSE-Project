#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int rollNo;
    float marks;

    void display() {
        cout << "--------------------------" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    vector<Student> students;
    cout << "=== SNU CSE - Student Management System ===" << endl;
    cout << "Developed for GKS Scholarship - Umamaheshwari" << endl;

    // Sample data
    Student s1;
    s1.name = "Uma";
    s1.rollNo = 1;
    s1.marks = 95.5;
    
    students.push_back(s1); // Ithu thaan mukkiyam da!

    cout << "\nTotal Students: " << students.size() << endl;
    for(auto &s : students) {
        s.display();
    }

    return 0;
}
