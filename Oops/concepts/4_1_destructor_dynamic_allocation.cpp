#include <iostream>
using namespace std;

class Student {
private:
    string* name;
public:
    Student(string studentName) {
        name = new string(studentName);  // Allocating memory dynamically
        cout << "Constructor: Memory allocated for " << *name << endl;
    }

    ~Student() {
        cout << "Destructor: Memory deallocated for " << *name << endl;
        delete name;  // Freeing dynamically allocated memory
    }
};

int main() {
    Student s1("Alice");
    Student s2("Bob");
    
    return 0; // Destructor will be called automatically for s1 and s2
}
