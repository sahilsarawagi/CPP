// There are two types of header filen
// 1.System header files:it comes with the compiler
# include <iostream>
// 2 user defined header files It is written by the programmer
# include "this.h"
using namespace std;
int main(){
    int a=6,b=5;
    cout<<"Operator in c++"<<endl;
    cout<<"Following are the types of operaror in c++"<<endl;
    // Aritemetic opearator
    cout<<"The value of a+b is"<<a+b;
    cout<<"\nThe value of a-b is"<<a-b;
    cout<<"\nThe value of a*b is"<<a*b;
    cout<<"\nThe value of a/b is"<<a/b;
    cout<<"\nThe value of a%b is"<<a%b;
    cout<<"\nThe value of a++ is"<<a++;
    cout<<"\nThe value of a-- is"<<a--;
    cout<<"\nThe value of --a is"<<--a;
    cout<<"\nThe value of ++a is"<<++a;
// assingment operator --> use to asign value to the variable 
// int  a=3 , b=9;
// char d='d';
// comparision operator?
    cout<<"the vlaue of a ==b is"<< (a==b) <<"\n";
    cout<<"the vlaue of a >b is "<< (a>b ) <<"\n";
    cout<<"the vlaue of a<b is " << (a<b ) <<"\n";
    cout<<"the vlaue of a>=b is "<< (a>=b) <<"\n";
    cout<<"the vlaue of a<=b is "<< (a<=b) <<"\n";
    cout<<"the vlaue of a!=b is "<< (a!=b) <<"\n";
// logical operator?
    cout<<"the vlaue of (a==b)&&(a<b) is"<< ((a==b)&&(a<b)) <<"\n";
    cout<<"the vlaue of (a==b)or(a<b) is"<< ((a==b)||(a<b)) <<"\n";
    cout<<"the vlaue of not(a==b) is"<< (!(a==b)) <<"\n";
    
    return 0;
}