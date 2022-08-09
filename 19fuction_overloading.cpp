# include <iostream>
using namespace std;

int add(int a,int b){
    cout<<" using function with 2 argument"<<endl;
    return a+b;
}
int add(int a,int b,int c){
    cout<<" using function with 3 argument"<<endl;

    return a+b+c;
}
// ovrloaded function 
//calculate the volume of cylinder
float volume(double r, int h){
    return 3.14*r*r*h;
}
//calculate the volume of cube
float volume(int a){
    return a*a*a;
}
//calculate the volume of rectangular
float volume(int l,int b, int h){
    return l*b*h;
}

int main(){
    cout<<"THe sum of 3 and 6 is"<<add(3,6)<<endl;
    cout<<"THe sum of 3,8 and 6 is"<<add(3,8,6)<<endl;
    // in c++ we can make functon with same name and it will figure out by itself which function it has to execute by the help of number of argument it has been given
cout<<"the volume of cube is "<<volume(5)<<endl;
cout<<"the volume of cylinder is "<<volume(2.4,5)<<endl;
cout<<"the volume of rectangular is "<<volume(5,6,7)<<endl;


    return 0;
}