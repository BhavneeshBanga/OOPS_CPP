#include <iostream>
#include <string>
using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title = s;
            rating  = r;
        }
        virtual void display()=0;   //do nothing function --> pure virtual function
};

class CWH_video : public CWH{
    float videolength;
    public:
        CWH_video(string s, float r, float vl ) : CWH(s,r){
            videolength = vl;
        }
        void display(){
            cout<<"This is an amaizung video with titale"<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of thsi video is: "<<videolength<<" Minutes"<<endl;
        }
};

class CWH_text : public CWH{
    int words;
    public:
        CWH_text(string s, float r, int w) : CWH(s,r){
            words = w;
        }
        void display(){
            cout<<"This is an amaizung text tutorial with titale"<<title<<endl;
            cout<<"textual rating : "<<rating<<" out of 5 stars"<<endl;
            cout<<"no of words of thsi tutorial is: "<<words<<"words"<<endl;
        }
        
};

int main() {
    string title = new char[30];
    float rating , vlen;
    int words;

    // for code with harry videos
    title = "Django tutorial";
    vlen = 4.56;
    rating  = 4.89;
    CWH_video djvideo(title, rating, vlen);
    // djvideo.display();
    
    // // for code with harry text
    title = "Django tutorial";
    words = 456;
    rating  = 4.99;
    CWH_text djtext(title, rating, words);
    // djtext.display();

    CWH *tut[2];
    tut[0] = &djvideo;
    tut[1] = &djtext;

    tut[0]->display();
    tut[1]->display();
    
    return 0;
}
