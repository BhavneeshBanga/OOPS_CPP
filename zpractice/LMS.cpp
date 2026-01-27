#include <iostream>
using namespace std;

class Book {
public:
    int id;
    string title;
    string author;

    Book(int i, string t, string a) {
        id = i;
        title = t;
        author = a;
    }

    void display() {
        cout << "\nBook ID: " << id;
        cout << "\nTitle: " << title;
        cout << "\nAuthor: " << author << endl;
    }
};

int main() {
    Book b1(1, "C++ Basics", "Bjarne Stroustrup");
    Book b2(2, "Python Basics", "Bhavneesh");
    Book b3(3, "Python Advanced", "Harry Bhai");

    b1.display();
    b2.display();
    b3.display();

    return 0;
}
