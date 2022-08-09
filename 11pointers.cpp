# include <iostream>
using namespace std;
int main(){
    // what is pointer? 
    // it is data type which holds the address of other data types
    
    int a=3;
    int *b=&a;
    // & ----> (address of) Address of operator 
    cout<<"THe address of a is "<<b<<endl; 
    cout<<"THe address of a is "<<&a<<endl; 
    // * ---->(value at) Derefrencing of operator
    cout<<"THe value at address a is "<<*b<<endl; 
    cout<<"THe value at address a is "<<*(&a)<<endl; 
    cout<<"THe value at address b is "<<*(&b)<<endl; 

    // pointer to pointer
    int **c=&b;
    cout<<"The address of b is"<<&b<<endl;
    cout<<"The address of b is"<<c<<endl;
    cout<<"The vlaue at address  c is"<<*c<<endl;
    cout<<"The vlaue at address value at(value at (c))  c is "<<**c<<endl;






    return 0;
}