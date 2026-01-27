#include <iostream>
using namespace std;
class Book{
    public:
        string title;
        string author;
        int year;
        Book(string title, string author, int year){
            this->title = title;
            this->author = author;
            this->year = year;
        }
        virtual void display(){
            cout<<"the name of the book is "<<title<<endl<<"the author of this book is "<<author<<endl<<"and it was published in year "<<year<<endl;
        }   
        ~Book() {}   
};
class EBook : public Book{
double filesizeMB;
    public:
        EBook(string t, string a, int y, double s) : Book(t,a,y), filesizeMB(s){}
        void display() override{
            Book :: display(); 
            cout<<"And the file size if "<<filesizeMB<<endl;

        }
};
int main() {
    EBook book("Black Book ", "bhavneesh", 2025, 5.5);
    book.display();
    return 0;
}