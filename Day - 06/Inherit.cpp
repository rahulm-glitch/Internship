// C++ program to demonstrate the concept of inheritance

#include <iostream>
using namespace std;

class stu {
public:
    char name[50];
    int age;
};

class school : public stu {
public:
    char school_name[50];
    int std;
};

int main() {
    school s1;

    cout << "Student name: ";
    cin.getline(s1.name, 50);

    cout << "Student age: ";
    cin >> s1.age;

    cin.ignore();

    cout << "School name: ";
    cin.getline(s1.school_name, 50);

    cout << "Standard: ";
    cin >> s1.std;

    cout << "\nStudent name: " << s1.name;
    cout << "\nStudent age: " << s1.age;
    cout << "\nSchool name: " << s1.school_name;
    cout << "\nStandard: " << s1.std;

    return 0;
}