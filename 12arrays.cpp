# include <iostream>
using namespace std;
int main(){
    cout<<"MEthod 1 to define array"<<endl;
    int marks[4]={23,66,4,5};
    cout<<marks[0]<<endl;    
    cout<<marks[1]<<endl;    
    cout<<marks[2]<<endl;    
    cout<<marks[3]<<endl;    

    cout<<"MEthod 2 to define array"<<endl;
    int size[4];
    size[0]=55;
    size[1]=64;
    size[2]=35;
    size[3]=25;
    
    cout<<size[0]<<endl;
    cout<<size[1]<<endl;
    cout<<size[2]<<endl;
    cout<<size[3]<<endl;

    cout<<"overwriting the vlaue (you can change the value)"<<endl;
    size[2]=22;
    cout<<size[2]<<endl;

    cout<<"Printing as well as defining the vlaue of array by loop "<<endl;
    int length[3];
    for (int i = 0; i < 3; i++)
    {
        cout<<"THe vlaue of lenght "<<i+1<<endl;
        cin>>length[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cout<<"the value of length"<<i+1<<"is "<<length[i]<<endl;
    }
    

    return 0;
}