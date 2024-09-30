#include <iostream>
#include <string>

using namespace std;

class Movie{
    //members
    int year;
    string title;
    string writer;
    public:
    void setYear(int Year){year=Year;}
    void setTitle(string Title){title = Title;}
    void setWriter()
    //getters

    //constructor
    Movie(int Year, string Title){setYear(Year);setTitle(Title));}
    void printColor(){
        cout<<"R: "<<r<<endl;
        cout<<"G: "<<g<<endl;
        cout<<"B: "<<b<<endl;
        cout<<"====================\n";
    }
};

int main(){
    Color *C1 = new Color(1,2,3);
    Color *C2 = new Color(100,222,30);
    Color *C3 = new Color(29,80,240);
    Color *C4 = new Color(190,5,77);
    cout<<"Color 1\n";
    C1->printColor();
    cout<<"Color 2\n";
    C2->printColor();
    cout<<"Color 3\n";
    C3->printColor();
    cout<<"Color 4\n";
    C4->printColor();
    delete C1;
    delete C2;
    delete C3;
    delete C4;
    return 0;
}