#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal eats food" << endl;
    }
};

class Pet {
public:
    void play() {
        cout << "Pet loves to play" << endl;
    }
};

class Dog : public Animal, public Pet {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog d;

    d.eat();
    d.play();
    d.bark();

    return 0;
}