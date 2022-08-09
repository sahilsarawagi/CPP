# include <iostream>
using namespace std;
/* Function prototype 
type fuction name(arguments);*/
//int sum(int ,int );       //<----- this is acceptable
//int sum(int a, b);       //<----- this is not acceptable
int sum(int a,int b);     //<----- this is function prototype
void g();


int main(){
int num1,num2;
cout<<"enter the num1"<<endl;
cin>>num1;
cout<<"enter the num2"<<endl;
cin>>num2;
//num1,num2 are actual parameters
cout<<sum(num2,num1)<<endl;
g();

    return 0;
}


int sum(int a,int b){
    // foramal parameter a and b will be taking values from actual parameters num1 and num2
    int c=a+b;
    return c;


}
void g(){
 cout<<"Hello g"<<endl;

}