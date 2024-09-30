#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

class Movie{
    //members
    int year;
    string title;
    string writer;
    public:
    void setYear(int Year){year=Year;}
    void setTitle(string Title){title = Title;}
    void setWriter(string Writer){writer = Writer;}
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
    ifstream fin;
    fin.open("input.txt");
    int i = 1;
    if(fin.good()){
        Movie *temp = new Movie();
        while(!fin.eof()){
            //first line = screenwriter
            string tW;
            getline(fin, tW);
            temp->setWriter(t);
            //second line = year
            int tY;
            cin>>tY;
            temp->setYear(tY);
            //third line

            //append
        }
        fin.close();
    }
    else
        cout<<"File not found.\n";
}