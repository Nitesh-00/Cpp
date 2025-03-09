#include<iostream>
#include<fstream>
using namespace std;

/*
In order to work with file in C++, we have to Open file.
There are two ways we can use to open a file:
1. By using constructor.
2. By using member function Open() of the class.
*/

int main(){
    string st = "Hello World";

    //opening file using constructor and writing on it
    // ofstream out("file.txt");
    // out<<st;
    
    //opening file using constructor abd reading it
    string st2;
    ifstream in("file.txt");
    // in>>st2;
    getline(in,st2);
    cout<<st2<<endl;
    return 0;
}