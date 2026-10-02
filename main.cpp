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
        cout << "Roll No: " << rollNo << " | Name: " << name << " | Marks: " << marks << endl;
    }
};

int main() {
    vector<Student> students;
    cout << "=== SNU CSE - Student Management System ===" << endl;
    cout << "Developed for GKS Scholarship Preparation" << endl;

    // Sample data - You can add more
    Student s1;
    s1.name = "Uma";
    s1.rollNo = 1;
    s1.marks = 95.5;
    
    students.push_back(s1);
    
    cout << "\nStudents List:\n";
    for(auto s : students) {
        s.display();
    }
    
    cout << "\nFuture: I will add AI-based ranking system!" << endl;
    return 0;
}
