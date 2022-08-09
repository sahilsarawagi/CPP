# include <iostream>
# include <fstream>
/*
The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream ---> Derived from fstreambase   
3. ofstream ---> Derived from fstreambase 
*/
/*
In order to work with files in c++,you will have to open it. Primarily ,there are 2 ways to  open a file.
1. Using the constructor
2. Using the member function open() of the class
*/
using namespace std;
int main(){
    string str="sahil";
    string str2;
    // Opening file using constructor reading from it 
    ifstream in("58file2.txt");  // Read operation 
    // in>>str2 ;    // This only take 1 word like it will only take "this" form the file
    getline(in,str2); // this will take full line and give to str2
    getline(in,str2); // this will take 2nd full line and give to str2
    // as many time we run getline it will take more line 
    // Opening file using constructor and writing to it
    ofstream out("58file.txt");  // Write operation 
    out<<str ;

    cout<<str2<<endl;

    return 0;
}