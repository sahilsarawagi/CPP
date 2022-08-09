# include <iostream>
# include <iomanip>
using namespace std;
int main(){
    int a=45;
    cout<<"the value of a was "<<a<<endl;
    a=88;
    cout<<"the value of a is "<<a<<endl;
    // constant in c++
    const int b=5;      //THis is constant, now we can't change the value of b
    cout<<"the value of b is "<<b<<endl;
    // manipulator in c++
    // endl and setw are the manipulator
    int x=3,y=5,z=6;
    cout<<"Tht value of x without setw is "<<x<<endl;
    cout<<"Tht value of y without setw is "<<y<<endl;
    cout<<"Tht value of z without setw is "<<z<<endl;
    // setw will create white spaces
    cout<<"Tht value of x with setw is "<<setw(5)<<x<<endl;
    cout<<"Tht value of y with setw is "<<setw(2)<<y<<endl;
    cout<<"Tht value of z with setw is "<<setw(3)<<z<<endl;

    // operator precedence
    cout<<((((a*5)+b)-45)+87);

    return 0;
}