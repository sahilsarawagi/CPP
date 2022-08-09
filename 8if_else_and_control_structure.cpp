# include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    if (age<18){
        cout<<"you are not allowed in the party"<<endl;

    }
    else{
        cout<<"you are allowed in this party"<<endl;
    }


    // switch case
    switch (age)
    {
    case 18:
        cout<<"u r 18"<<endl;
        break;
    
    case 22:
        cout<<"u r 22"<<endl;
        break;
    
    case 2:
        cout<<"u r 2"<<endl;
        break;
    
    default:
        cout<<"no special cases"<<endl;
        break;
    }

    return 0 ; 
}