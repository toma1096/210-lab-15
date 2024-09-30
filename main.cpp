#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Movie{
    //members
    int year;
    string title;
    string writer;
    public:
    void setYear(int Year){year=Year;}
    void setTitle(string Title){title = Title;}
    void setWriter(string Writer){writer = Writer}
    //getters

    //constructor
    Movie(int Year, string Title,string Writer){setYear(Year);setTitle(Title);setWriter(Writer);}
    void printMovie(){
        cout<<"Movie: "<<title<<endl;
        cout<<setw(5)<<"Year Released: "<<year<<endl;
        cout<<"Screenwriter: "<<writer<<endl;
        cout<<endl;
    }
};

int main(){
    
}