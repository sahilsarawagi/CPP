# include  <iostream>
using namespace std;
int count=0;
class num{
    public:
    num(){
        count++;
        cout<<"this is a time when the constructor is called for object number "<<count<<endl;
    }
    ~num(){             /// Destructor
        cout<<"This is the when my destructor called for object number "<<count<<endl;
        count--;
    }
};
int main(){
    cout<<"we are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    cout<<"Back to main"<<endl;

    return 0;
}