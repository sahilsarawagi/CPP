# include <iostream>
using namespace std;
int c=66;
int main(){
    int a ,b,c;
    cout<<"Enter the vlaue of a"<<"\n";
    cin>>a;
    cout<<"Enter the vlaue of b"<<"\n";
    cin>>b;
    c=a+b;
    cout<<" the sum "<<(c)<<"\n";
    cout<<" the global c is "<<::c<<"\n";
    float d=34.4;
    long double e=34.4;
    cout<<" the d is "<<d<<"\n";
    cout<<" the e is "<<e<<"\n";
    cout<<" the size of 34.4 "<<sizeof(34.4)<<"\n";
    cout<<" the size of 34.4f "<<sizeof(34.4f)<<"\n";
    cout<<" the size of 34.4F "<<sizeof(34.4F)<<"\n";
    cout<<" the size of 34.4l "<<sizeof(34.4l)<<"\n";
    cout<<" the size of 34.4L "<<sizeof(34.4L)<<"\n";

    // Refrence variable 
    float x=445;
    float &y=x;
    cout<<x<<endl;
    cout<<y<<endl;
    // typecasting
    int p=88;
    float q=45.95;
    cout<<"the value of p is"<<(float) p<<endl; 
    cout<<"the value of q is"<<(int) q<<endl; 
  
    int r =int(q);
    cout<<"the expression is"<<p+q<<endl; 
    cout<<"the expression is"<<p+int(q)<<endl; 
    cout<<"the expression is"<<p+(int)q<<endl; 


    return 0;
}