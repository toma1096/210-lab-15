#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>

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
    Movie(){}
    Movie(int Year, string Title,string Writer){setYear(Year);setTitle(Title);setWriter(Writer);}
    void printMovie(){
        cout<<"Movie: "<<title<<endl;
        cout<<setw(5)<<"Year Released: "<<year<<endl;
        cout<<setw(5)<<"Screenwriter: "<<writer<<endl;
        cout<<endl;
    }
};

int main(){
    //container for movies
    vector<Movie> movieList; 
    //read from input starts here=========================================
    ifstream fin;
    fin.open("input.txt");
    int i = 1;
    if(fin.good()){
        Movie *temp = new Movie();
        while(!fin.eof()){
            //first line = title
            string tT;
            getline(fin,tT);
            temp->setTitle(tT);
            //second line = year
            int tY;
            fin>>tY;
            fin.ignore();
            temp->setYear(tY);
            //third line = screenwriter
            string tW;
            getline(fin, tW);
            temp->setWriter(tW);
            //append
            movieList.push_back(*temp);
        }
        fin.close();
        //read from input ends here=========================================
        for (Movie M : movieList) M.printMovie();
    }
    else
        cout<<"File not found.\n";
    return 0;
}