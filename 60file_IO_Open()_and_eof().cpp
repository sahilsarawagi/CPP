#include <iostream>
# include <fstream>
# include <string>
using namespace std;
int main(){
    ofstream out;
    out.open("58file.txt");
    out<<"Thsi is me \n";
    out<<"Thsi isdf fghjytgme \n";
    out<<"Thsi isdf fghjytgme \n";
    out<<"Thsi isdf fghjytgme ";
    out.close();
    string st,st2;
    ifstream in;
    in.open("58file.txt");
    // in>>st;
    // in>>st;
    // in>>st;
    // getline(in,st2);
    while(in.eof()==0){
         getline(in,st2);
    cout<<st2<<endl;

    }
    // cout<<st<<endl;
    in.close();


    return 0;
}