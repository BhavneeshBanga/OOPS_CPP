#include <iostream>
using namespace std;
//student ke data member ko ek se zayada baar inherit na kare
class Student{
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no = a;
        }
        void PrintNumber(void){
            cout<<"Your roll number is "<<roll_no<<endl;
        }
};
class Test : virtual public Student{
    protected:
        float math, physics;
    public:
        void set_marks(float m1, float m2){
            math = m1;
            physics = m2;
        }
        void print_marks(void){
            cout<<"you result is here:"<<endl
                <<"Maths" <<math<<endl
                <<"Physics"<<physics<<endl;
        }
};
class Sports : virtual public Student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }
        void Print_score(void){
            cout<<"Your PT score is "<<score<<endl;
        }
};
class Result : public Test, public Sports{
    private:
        float Total;
    public:
        void display(void){
            Total = math+ physics + score;
            PrintNumber();
            print_marks();
            Print_score();
            cout<<"Your total score is "<<Total<<endl;
        }
};
int main() {
    Result harry;
    harry.set_number(90);
    harry.set_marks(78.9, 99.9);
    harry.set_score(9);
    harry.display();
    return 0;
}