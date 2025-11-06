#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal eats food" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

class Puppy : public Dog {
public:
    void weep() {
        cout << "Puppy weeps" << endl;
    }
};

int main() {
    Puppy pup;

    pup.eat();
    pup.bark();
    pup.weep();

    return 0;
}