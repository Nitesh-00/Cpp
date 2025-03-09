#include<iostream>
#include<fstream>
using namespace std;

/*There are 3 main classes for file I/O
-> fstream
-> ifstream     ---> Derived from 1
-> fstream      ---> Derived from 1

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
    
    //opening file using constructor and reading it
    string st2;
    ifstream in("file.txt");       //object to ifstream class
    in>>st2;      //Read only single word
    // getline(in,st2);   //To read complete line
    cout<<st2<<endl;
    in.close();        // To close the file
    cout<<st2<<endl;
    return 0;
}