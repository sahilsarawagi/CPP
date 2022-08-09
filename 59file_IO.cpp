# include <iostream>
# include <fstream>
using namespace std;

int main(){
    string name;
    cout<<"Enter your name"<<endl;
    cin>>name; // this line doesnot take content after space
    ofstream hout("58file2.txt");
    hout<<"My name is "+name;
    hout.close();
    string content;
    ifstream hin("58file2.txt");
    // hin>>content;    // thsi will only read first word
    getline(hin,content); // this will read whole line
    hin.close();
    cout<<"THe content of this file is "<<content<<endl;
    return 0;
}








