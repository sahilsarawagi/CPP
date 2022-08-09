// we can make global and local variavle with same name but the precidence will be taken by local 
# include <iostream>
using namespace std;
int glo=66;
void sum(){
   int a;
   int b;
    // return cout<<"the sum of"<<a<<"and"<<b<<"is"<<a+b;
    cout<<glo<<"\n";
}
int main(){
    int glo=52;
    glo=5;
    // int a=4;
    // int b=5;
    int a=15,b=14;
    float pi=3.14;
    char m='h';
    bool k=true,g=false;
    sum();
    cout<<"The value of a is "<<a<<"\nTHe vlaue of b is "<<b;
    cout<<"The value of pi is "<<pi<<"\nTHe vlaue of m is "<<m<<"\n";
    cout<<glo<<"\n";
    cout<<g<<"\n";
    cout<<k;
    return 0;
    }