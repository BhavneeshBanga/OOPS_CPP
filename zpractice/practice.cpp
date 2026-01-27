#include <iostream>
#include <vector>
using namespace std;

class Student {
public:
    string name;

    Student(string n) {
        name = n;
    }

    void show() {
        cout << "Student: " << name << endl;
    }
};
int main() {
    vector<Student*> v;
    // object banna
    // Student* s1 = new Student("Bhavi");
    // Student* s2 = new Student("Bhavneesh");

    // // vector me add
    // v.push_back(s1);
    // v.push_back(s2);

    v.push_back(new Student("Bhavi"));
    v.push_back(new Student("Bhavay"));
    v.push_back(new Student("Arpit"));
    v.push_back(new Student("Aryan"));
    // loop

    for (auto st : v) {
        st->show();
    }

    return 0;
}
