# include <iostream>
using namespace std;
int sum(int a, int b){
    int c=a+b;
    return c;
}
void wrongswap(int a, int b){
    int temp =b;
    b=a;
    a=temp;
}
void correctswap(int *a, int *b){
    int temp =*b;
    *b=*a;
    *a=temp;
}
// call by refrence using c++ refrence variablessss
void swapRefrenceVar(int &a,int &b){
    int temp =b;
    b=a;
    a=temp;

}  
int main(){

cout<<"the sum of 4 and 5 is "<<sum(4,5)<<endl;
int a=4,b=5;
cout<<"the vlaue of a is "<<a<<endl;
cout<<"the vlaue of b is "<<b<<endl;
// call by value
wrongswap(a,b);
cout<<"the vlaue of a after wrongswap is "<<a<<endl;
cout<<"the vlaue of b after wrongswap is "<<b<<endl;
// call by refrence
correctswap(&a,&b);
cout<<"the vlaue of a after correctswap is "<<a<<endl;
cout<<"the vlaue of b after correctswap is "<<b<<endl;
swapRefrenceVar(a,b);  // thsi will swap a and b using refrence variable
cout<<"the vlaue of a after swapRefrenceVar is "<<a<<endl;
cout<<"the vlaue of b after swapRefrenceVar is "<<b<<endl;
    return 0;
}