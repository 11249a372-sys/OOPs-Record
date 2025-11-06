#include <iostream>
#include <cstdlib>
using namespace std;

class Student {
    int rollNo;
    char name[30];

public:
    void* operator new(size_t size) {
        cout << "Custom new: Allocating " << size << " bytes" << endl;
        void* ptr = malloc(size);
        if (!ptr)
            throw bad_alloc();
        return ptr;
    }

    void operator delete(void* ptr) {
        cout << "Custom delete: Freeing memory" << endl;
        free(ptr);
    }

    void getData() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
    }

    void display() {
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }
};

int main() {
    Student* s1 = new Student;

    s1->getData();
    s1->display();

    delete s1;

    return 0;
}