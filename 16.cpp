#include <iostream>
#include <cstring>
using namespace std;

class String {
    char str[100];
public:
    String() {
        str[0] = '\0';
    }


    String(const char s[]) {
        strcpy(str, s);
    }

    void display() const {
        cout << str;
    }

    String operator+(const String &s) const {
        String temp;
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }
};

int main() {
    String s1("Hello, ");
    String s2("World!");
    
    String s3 = s1 + s2;

    cout << "String 1: ";
    s1.display();
    cout << "\nString 2: ";
    s2.display();
    cout << "\nConcatenated String: ";
    s3.display();
    cout << endl;

    return 0;
}