# include <iostream>
using namespace std;

int main(){
    // basic example of pointer 
    int a=5;
    int *ptr=&a;
    cout<<"The value of a is "<<*ptr<<endl;
    // new operator
    // int *p= new int(14);
    float *p= new float(14.52);
    cout<<"The value at address p is "<<*(p)<<endl;
    delete p;
    cout<<"The value at address p is "<<*(p)<<endl;
    int *arr=new int[4];
    arr[0]=56;
    arr[1]=34;
    arr[2]=89;
    arr[3]=9;
    cout<<"THe value of arr[0] is "<<arr[0]<<endl
        <<"THe value of arr[1] is "<<arr[1]<<endl
        <<"THe value of arr[2] is "<<arr[2]<<endl
        <<"THe value of arr[3] is "<<arr[3]<<endl;
    // Delete operator
        delete[] arr;
    cout<<"THe value of arr[0] is "<<arr[0]<<endl
        <<"THe value of arr[1] is "<<arr[1]<<endl
        <<"THe value of arr[2] is "<<arr[2]<<endl
        <<"THe value of arr[3] is "<<arr[3]<<endl;
//  only dynamically allocated variable can be destroyed using delete operator
    return 0 ;
}