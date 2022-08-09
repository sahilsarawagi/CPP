# include <iostream>
using namespace std;
// float funcAverage(int a,int b){
//     float avg=(a+b)/2.0;
//     return avg;
// }
// template <class T1=int , class T2=float> 
// T2 funcAverage( T1 a,T1 b){
//     T2 avg=(a+b)/2.0;
//     return avg;
// }
template <class T1 , class T2> 
float funcAverage( T1 a,T2 b){
    float avg=(a+b)/2.0;
    return avg;
}
template <class T>
void swappp(T &x,T &y){
    T temp;
    temp=x;
    x=y;
    y=temp;


}
int main(){
    float a;
    a = funcAverage(4,3.56);
    cout<<a<<endl;
    printf("The average of these two number is %.3f\n",a);
    float p=5.63;
    float q=4.45;
    cout<<"the vlaue of p and q is "<<p<<" and "<<q<<endl;
    swappp(p,q);
    cout<<"the vlaue of p and q after swap is "<<p<<" and "<<q<<endl;
    
    return 0; 
}